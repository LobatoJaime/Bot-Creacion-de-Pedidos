import cv2
import pytesseract
import numpy as np
import pandas as pd
from Packages.constants import tesseract_exe_online_path
from AI_Engine.sample import doc_layout_analysis
from AI_Engine.sample import modulo_basic_functions as mod_basic


def get_contornos_lineas(gray):
    """
    A raiz de una imagen gray, identifica las líneas y devuelve las coordenadas de los contornos de estas
    """
    boxes = []
    # threshold the grayscale image
    thresh = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)[1]

    # use morphology erode to blur horizontally
    kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (151, 3))
    morph = cv2.morphologyEx(thresh, cv2.MORPH_DILATE, kernel)

    # use morphology open to remove thin lines from dotted lines
    # kernel = cv.getStructuringElement(cv.MORPH_RECT, (3, 17))
    # morph = cv.morphologyEx(morph, cv.MORPH_OPEN, kernel)

    # Busca contornos
    cntrs = cv2.findContours(morph, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    cntrs = cntrs[0] if len(cntrs) == 2 else cntrs[1]

    # Extraigo las coordenadas de los boxes de los contornos
    for c in reversed(cntrs):
        # Extraigo la box del contorno
        box = cv2.boundingRect(c)
        # Ajusto los puntos
        x1, y1, x2, y2 = mod_basic.aumentar_box(box, gray.shape, (0, 6, 0, 6))
        boxes.append(x1, y1, x2, y2)

    return boxes


def procesamiento_img(roi, method):
    """
    Aplica un preprocesamiento a la imagen para que pueda ser leida por el OCR
    """
    img_procesada = np.array([])
    custom_config = None
    # method = 5
    # Metodo 0
    if method == 0:
        img_procesada = roi
    # Metodo 1
    if method == 1:
        # Threshold y dilatacion
        ret, thresh = cv2.threshold(roi, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)
        rect_kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (2, 2))
        img_procesada = cv2.dilate(thresh, rect_kernel, iterations=1)
        #img_procesada = cv2.erode(dilation, rect_kernel, iterations=1)
    # Metodo 2
    elif method == 2:
        # Blur y canny
        imagen_ruido_off = cv2.GaussianBlur(roi, (5, 5), 0)
        img_procesada = cv2.Canny(imagen_ruido_off, 50, 150)
    # Metodo 3
    elif method == 3:
        # Blur y threshold
        imagen_ruido_off = cv2.GaussianBlur(roi, (3, 3), 0)
        #cv2.imshow("imagen_ruido_off", imagen_ruido_off)
        ret, img_procesada = cv2.threshold(imagen_ruido_off, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)
    # Metodo 4
    elif method == 4:
        # Blur, threshold e inversion
        imagen_ruido_off = cv2.GaussianBlur(roi, (3, 3), 0)
        ret, thresh = cv2.threshold(imagen_ruido_off, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)
        img_procesada = cv2.bitwise_not(thresh)
    # Metodo 5
    elif method == 5:
        # Threshold, dilatacion e inversion
        ret, thresh = cv2.threshold(roi, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)
        rect_kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (2, 2))
        dilation = cv2.dilate(thresh, rect_kernel, iterations=1)
        img_procesada = cv2.bitwise_not(dilation)
    elif method == 6:
        # Blur, canny e inversion
        imagen_ruido_off = cv2.GaussianBlur(roi, (5, 5), 0)
        canny = cv2.Canny(imagen_ruido_off, 50, 150)
        img_procesada = cv2.bitwise_not(canny)
    return img_procesada, custom_config


def lectura_texto(gray, tesseract_exe_path, method=0, is_img_shown=False):
    """
    Reconoce el texto de una imagen. Se pueden indicar diferentes metodos
    Devuelve una lista de textos junto a un valor de confianza.
    """
    result = []
    img_to_show = gray.copy() if is_img_shown else None

    # Tesseract configuracion
    pytesseract.pytesseract.tesseract_cmd = tesseract_exe_path
    #custom_config = r'--psm 7 -c tessedit_char_whitelist=0123456789.'
    custom_config = r"--psm 7"

    # Deteccion de texto
    print('################ Output ##################')
    # Detecto los contornos de las lineas del texto
    boxes, img_to_show = doc_layout_analysis.process_line(gray, img_to_show)
    if is_img_shown:
        cv2.imshow("Lineas detectadas", cv2.resize(img_to_show, None, fx=0.5, fy=0.5, interpolation=cv2.INTER_AREA))
        cv2.waitKey(0)
        cv2.destroyWindow("Lineas detectadas")
    # Recorro los contornos y leo el texto
    for box in boxes:
        # Preprocesamiento de la imagen
        x1, y1, x2, y2 = box
        roi = gray[y1:y2, x1:x2]
        if is_img_shown:
            cv2.imshow("Texto", cv2.resize(roi, None, fx=0.8, fy=0.8, interpolation=cv2.INTER_AREA))
            cv2.waitKey(0)
            cv2.destroyWindow("Texto")
        # Preprocesamiento de la imagen
        img_procesada, custom_config_aux = procesamiento_img(roi, method)
        if is_img_shown:
            cv2.imshow("Texto procesado", cv2.resize(img_procesada, None, fx=0.8, fy=0.8, interpolation=cv2.INTER_AREA))
            cv2.waitKey(0)
            cv2.destroyWindow("Texto procesado")
        if custom_config_aux is not None:
            custom_config = custom_config_aux
        # Leo el texto dentro de la region y elimino los espacios a los lados del texto
        output_data = lectura_texto_data(img_procesada, custom_config)
        result.append(output_data)
    print(result)
    print('############################################')
    print("")

    return result


def lectura_texto_data(img_procesada, custom_config):
    line_conf = []
    # Leo el texto y extraigo la informacion en un diccionario
    data_dict = pytesseract.image_to_data(img_procesada, config=custom_config, output_type='dict')
    # Convierto el campo de conf de string a float
    data_dict["conf"] = [float(x) for x in data_dict["conf"]]
    # Creo el dataframe a partir del diccionario
    data = pd.DataFrame(data_dict)
    # Elimino las filas con valor de confianza -1
    data = data[data.conf != -1]
    # data.to_excel(r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\dataFrameTESERACT.xlsx")
    # Creo las listas de texto extraido con su valor de confianza
    lines = data.groupby(['page_num', 'block_num', 'par_num', 'line_num'])['text'] \
        .apply(lambda x: ' '.join(list(x))).tolist()
    # El valor de confianza lo saco a partir del valor minimo
    confs = data.groupby(['page_num', 'block_num', 'par_num', 'line_num'])['conf'].min().tolist()
    print("lines")
    print(lines)
    print("confs")
    print(confs)
    # Creo la lista con el texto final y su valor de confianza
    text = lines[0].strip() if len(lines) > 0 else ""
    conf = round(confs[0], 3) if len(lines) > 0 else 100
    line_conf.append(text)
    line_conf.append(conf)
    print("=================================")
    print(line_conf)
    return line_conf
