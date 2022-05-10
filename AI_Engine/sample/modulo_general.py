import os
import re
import sys

import cv2 as cv
from AI_Engine.sample.modulo_ocr import lectura_texto
from pdf2image import convert_from_path
from Packages.constants import poppler_online_path


def apply_template_matching(img, template):
    """
    Busca una imagen template en una imagen. Devuelve las coordenadas top left y bottom right
    """
    if template is None:
        return (None, None), (None, None)
    # Get template shape
    w, h = template.shape[::-1]
    # Apply template Matching
    res = cv.matchTemplate(img, template, cv.TM_CCOEFF_NORMED)
    min_val, max_val, min_loc, max_loc = cv.minMaxLoc(res)
    # Si el valor maximo es menor que un threshold, no se ha encontrado ninguna coincidencia
    if max_val < 0.5:
        return (None, None), (None, None)
    # Calculo los valores de top_left y bottom_right
    top_left = max_loc
    bottom_right = (top_left[0] + w, top_left[1] + h)
    #cv.rectangle(img, top_left, bottom_right, 0, 5)
    return top_left, bottom_right


def lectura_campo(img, points, method=0, regex=[], is_multiple=False, is_img_shown=False):
    """
    Lector de caracteres a través de un imagen. La imagen debe estar en escala de grises
    Argumentos:
        img: imagen donde se leerá el texto
        points: tupla de coordenadas de la imagen donde se leerá el texto
        is_multiple: indica método de lectura. Si está a true, trata el texto por filas
        is_img_shown: activa la visualización de las imágenes
    Returns:
        Lista de strings o string con el texto reconocido. Si 'points' es None, devolvera una lista vacia
    """
    result = None
    if method is None:
        method = 0

    # Creo el ROI donde se leera el texto
    if points is not None:
        ix, iy, fx, fy = points
        roi = img[iy:fy, ix:fx]
        # cv.imshow("ROI1", cv.resize(roi, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        # cv.waitKey(0)
        # cv.destroyWindow("ROI1")
    else:
        return result

    # Leo el texto
    result = lectura_texto(roi, method, is_multiple, is_img_shown)
    # Aplico regex
    for reg in regex:
        if type(result) is list:
            for i in range(len(result)):
                result[i] = regex_group(reg, result[i])
        else:
            result = regex_group(reg, result)
    #print(result)
    return result


def regex_group(reg, input):
    """
    Arguments:
        reg: Regex string
        input: String to apply the regex
    Result:
        First string result of applying the regex. None if not found
    """
    result = None
    if input is not None:
        input = re.search(reg, input)
        if input is not None:
            result = input.group()

    return result


def vconcat_resize(img_list, interpolation=cv.INTER_CUBIC):
    """
    Define a function for vertically concatenating images of different widths
    """
    # take minimum width
    w_min = min(img.shape[1] for img in img_list)

    # resizing images
    im_list_resize = [cv.resize(img, (w_min, int(img.shape[0] * w_min / img.shape[1])), interpolation=interpolation)
                      for img in img_list]
    # return final image
    return cv.vconcat(im_list_resize)


def exit_program(message):
    """
    Funcion auxiliar para cerrar la aplicacion
    """
    cv.destroyAllWindows()
    sys.exit(message)


def close_windows(message):
    """
    Funcion auxiliar para cerrar las ventanas e imprimir un mensaje
    """
    cv.destroyAllWindows()
    print(message)


def pdf_to_img(path):
    """
    Convierte archivo pdf a lista de imagenes
    """
    list_img = []

    # Conversion pdf a jpg
    images = convert_from_path(path, poppler_path=poppler_online_path)
    # Recorro la lista de imagenes
    for i in range(len(images)):
        path_img = path + '-' + str(i) + '.jpg'
        # Guardo la imagen
        images[i].save(path_img, 'JPEG')
        # Lectura de imagen
        img_i = cv.imread(path_img, cv.IMREAD_GRAYSCALE)
        list_img.append(img_i)
        # Borrado de archivo de imagen
        os.remove(path_img)

    return list_img


def create_table_img(img_list, img_table_header, img_table_end, table_coordinates):
    """
    Crea una imagen de una tabla a partir de una lista de imagenes
    Argumentos:
        img_list: lista de imagenes
        img_table_header: template de imagen de header de tabla
        img_table_end: template de imagen de final de tabla
        table_coordinates: coordenadas donde se encuentra la tabla
    Returns:
        Imagen de la tabla
    """
    img_list_table = create_table_list(img_list, img_table_header, img_table_end, table_coordinates)
    return vconcat_resize(img_list_table)


def create_table_info_list(img_list, img_table_header, img_table_end, table_coordinates):
    """
        Crea un dicionario con las imagenes de las tablas con el numero de pagina como key, a partir de una lista de imagenes
        Argumentos:
            img_list: lista de imagenes
            img_table_header: template de imagen de header de tabla
            img_table_end: template de imagen de final de tabla
            table_coordinates: coordenadas donde se encuentra la tabla
        Returns:
            Lista de diccionarios con las imagenes de las tablas e info
        """
    img_table_info_list = []
    # Recorro la lista de imagenes
    for pag_i in range(0, len(img_list)):
        info_dict = {
            "has_header": False,
            "has_end": False,
            "roi": None
        }
        # Limito la region donde se puede encontrar la tabla
        index = str(pag_i + 1) if str(pag_i + 1) in table_coordinates else "all"
        ix, iy, fx, fy = table_coordinates[index]
        roi = img_list[pag_i][iy:fy, ix:fx]
        # Busco el header y el end
        header_top_left, header_bottom_right = apply_template_matching(roi, img_table_header)
        end_top_left, end_bottom_right = apply_template_matching(roi, img_table_end)
        # roi_to_show = roi.copy()
        # cv.rectangle(roi_to_show, header_top_left, header_bottom_right, (0, 0, 255), 2)
        # cv.rectangle(roi_to_show, end_top_left, end_bottom_right, (0, 0, 255), 2)
        # cv.imshow("roi_to_show", roi_to_show)
        # cv.waitKey(0)
        # cv.destroyWindow("roi_to_show")
        # Creo una nueva region que va desde el header hasta el end (si se ha encontrado)
        roi = roi[header_bottom_right[1]:end_top_left[1], header_top_left[0]:header_bottom_right[0]]
        # Inserto la informacion en el info dict
        if header_top_left != (None, None):
            info_dict["has_header"] = True
        if end_top_left != (None, None):
            info_dict["has_end"] = True
        info_dict["roi"] = roi
        # Inserto el diccionario en el img_table_info_list
        img_table_info_list.append(info_dict)
    return img_table_info_list


def create_table_list(img_list, img_table_header, img_table_end, table_coordinates):
    """
    Crea una lista con los datos de la tabla a partir de una lista de imagenes
    Argumentos:
        img_list: lista de imagenes
        img_table_header: template de imagen de header de tabla
        img_table_end: template de imagen de final de tabla
        table_coordinates: coordenadas donde se encuentra la tabla
    Returns:
        Lista de imagenes de las tablas
    """
    img_list_table = []
    # Recorro la lista de imagenes
    for pag_i in range(0, len(img_list)):
        # Limito la region donde se puede encontrar la tabla
        index = str(pag_i + 1) if str(pag_i + 1) in table_coordinates else "all"
        ix, iy, fx, fy = table_coordinates[index]
        roi = img_list[pag_i][iy:fy, ix:fx]
        # Busco el header y el end
        header_top_left, header_bottom_right = apply_template_matching(roi, img_table_header)
        end_top_left, end_bottom_right = apply_template_matching(roi, img_table_end)
        #roi_to_show = roi.copy()
        #cv.rectangle(roi_to_show, header_top_left, header_bottom_right, (0, 0, 255), 2)
        #cv.rectangle(roi_to_show, end_top_left, end_bottom_right, (0, 0, 255), 2)
        #cv.imshow("roi_to_show", roi_to_show)
        #cv.waitKey(0)
        #cv.destroyWindow("roi_to_show")
        # Creo una nueva region que va desde el header hasta el end (si se ha encontrado)
        roi = roi[header_bottom_right[1]:end_top_left[1], header_top_left[0]:header_bottom_right[0]]
        # Inserto la region en la lista
        img_list_table.append(roi)
        if end_top_left != (None, None):
            break
    return img_list_table
