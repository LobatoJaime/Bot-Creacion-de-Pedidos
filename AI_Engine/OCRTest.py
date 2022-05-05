#!/usr/bin/env python
# coding: utf-8

# ## Convertir pdf a imágen

# In[15]:


from pdf2image import convert_from_path
from PIL import Image
import pytesseract
import cv2
import os


# In[16]:
path = "C:/Users/W8DE5P2/OneDrive-Deere&Co/OneDrive - Deere & Co/Desktop/Proyectos/PEDIDOS TIER 2/CLIIENTES JOHN DEERE/Coffeyville Sektam/t141"
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\WordClass Industries/t121"
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\orders_history\Thyssen Krupp Cranks_5500044982_DZ104463\roiDate.png"

def aumentar_box(box, img_shape):
    """
    Añade mas borde al box teniendo en cuenta los limites de la imagen
    """
    # Extraigo las caracteristicas del box
    x1, y1, w, h = box
    # Creo los puntos
    x2, y2 = x1 + w, y1 + h
    # Modifico los puntos si estos salen de la imagen
    x1 = x1
    if x1 < 0:
        x1 = 0
    y1 = y1 - 6
    if y1 < 0:
        y1 = 0
    x2 = x2
    if x2 >= img_shape[1]:
        x2 = img_shape[1]
    y2 = y2 + 6
    if y2 >= img_shape[0]:
        y2 = img_shape[0]
    return x1, y1, x2, y2

#images = convert_from_path(path + ".pdf")

#for i in range(len(images)):
#    #images[i].save('C:/Users/JHDFDQH/OneDrive-Deere&Co/OneDrive - Deere & Co/Desktop/Pruebas/copia.jpg', 'JPEG')
#    images[i].save(path + '-' + str(i+1) + '.jpg', 'JPEG')


## Delimitar los campos de texto con cv2

# In[18]:


image = cv2.imread(path)
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
gray_copy = gray.copy()
#filename = "{}.png".format(os.getpid())
#cv2.imwrite(filename, gray)


## Tesseract para convertir a texto

# Tesseract
pytesseract.pytesseract.tesseract_cmd = ("C:/Program Files/Tesseract-OCR/tesseract.exe")
print('################ Output ##################')
is_multiple = True
result = []

if False:
    # Performing OTSU threshold
    ret, thresh1 = cv2.threshold(gray, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)

    # Specify structure shape and kernel size.
    # Kernel size increases or decreases the area
    # of the rectangle to be detected.
    # A smaller value like (10, 10) will detect
    # each word instead of a sentence.
    rect_kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (18, 18))

    # Applying dilation on the threshold image
    dilation = cv2.dilate(thresh1, rect_kernel, iterations=1)

    # Finding contours
    contours, hierarchy = cv2.findContours(dilation, cv2.RETR_EXTERNAL,
                                           cv2.CHAIN_APPROX_NONE)

    # Creating a copy of image
    im2 = image.copy()

    cv2.imshow("thresh1", thresh1)

    # Looping through the identified contours
    # Then rectangular part is cropped and passed on
    # to pytesseract for extracting text from it
    # Extracted text is then written into the text file
    for cnt in contours:
        x, y, w, h = cv2.boundingRect(cnt)

        # Drawing a rectangle on copied image
        rect = cv2.rectangle(im2, (x, y), (x + w, y + h), (0, 255, 0), 2)

        # Cropping the text block for giving input to OCR
        cropped = im2[y:y + h, x:x + w]

        # Apply OCR on the cropped image
        text = pytesseract.image_to_string(cropped)

        # Appending the text into file
        print(text)
        cv2.imshow("cropped", cropped)
        cv2.waitKey(0)
else:
    if is_multiple:
        # Detecto los contornos de las regiones donde hay líneas de texto
        # Mas info:
        # https://webmonkez.com/questions/813813/como-detectar-el-texto-sobre-las-lineas-usando-opencv-en-python

        # Configuracion
        custom_config = r'--psm 7 -c tessedit_char_whitelist=0123456789.'

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

        # Recorro los contornos y leo el texto
        for c in reversed(cntrs):
            # Extraigo la box del contorno
            box = cv2.boundingRect(c)
            # Ajusto los puntos
            x1, y1, x2, y2 = aumentar_box(box, gray.shape)
            # Dibujo el rectangulo en la imagen img_to_show
            cv2.rectangle(gray_copy, (x1, y1), (x2, y2), (0, 0, 255), 2)
            roi = gray[y1:y2+1, x1:x2+1]

            # Metodo 1
            ret, thresh1 = cv2.threshold(roi, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)
            rect_kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (2, 2))
            dilation = cv2.dilate(thresh1, rect_kernel, iterations=1)
            erosion = cv2.erode(dilation, rect_kernel, iterations=1)
            # Metodo 2
            imagen_ruido_off = cv2.GaussianBlur(roi, (5, 5), 0)
            imagen_canny = cv2.Canny(roi, 50, 150)
            # Metodo 3
            custom_config = r'--psm 7'
            imagen_ruido_off = cv2.GaussianBlur(roi, (3, 3), 0)
            ret, thresh1 = cv2.threshold(imagen_ruido_off, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)

            cv2.imshow("roi", roi)
            cv2.imshow("dilation", dilation)
            cv2.imshow("erosion", erosion)
            cv2.imshow("imagen_ruido_off", imagen_ruido_off)
            cv2.imshow("imagen_canny", imagen_canny)
            cv2.imshow("thresh1", thresh1)


            # Leo el texto dentro de la region y elimino los espacios a los lados del texto
            text = pytesseract.image_to_string(thresh1, config=custom_config).strip()
            result.append(text)
            print(text)
            print('-------------------------')
            cv2.waitKey(0)
    else:
        # Leo el texto dentro de la region y elimino los espacios a los lados del texto
        text = pytesseract.image_to_string(gray).strip()
        result.append(text)
        print(text)

# pytesseract.pytesseract.tesseract_cmd = ("C:/Program Files/Tesseract-OCR/tesseract.exe")
# text = pytesseract.image_to_string(Image.open(filename))
# print(text)
# os.remove(filename)
cv2.imshow("Image", image)
cv2.imshow("Output", gray)
cv2.waitKey(0)


# In[ ]:




