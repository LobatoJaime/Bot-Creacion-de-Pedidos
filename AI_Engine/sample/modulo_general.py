import re
import cv2 as cv
from AI_Engine.sample.modulo_ocr import lectura_texto
from AI_Engine.sample import modulo_basic_functions as mod_basic


def apply_list_template_matching(img, template_list):
    """Busca una lista de templates en una imagen. Escoge el template con mayor coincidencia y devuelve las
    coordenadas top left y bottom right"""
    output = (None, None), (None, None), -1
    for template in template_list:
        result = apply_template_matching(img, template)
        if result[2] > output[2]:
            output = result
    return output[:2]


def apply_template_matching(img, template):
    """
    Busca una imagen template en una imagen. Devuelve las coordenadas top left y bottom right, junto a valor maximo
    de coincidencia
    """
    result = (None, None), (None, None), -1
    if template is None:
        return result
    # Get template shape
    h, w = template.shape[:2]
    # Transformamos la imagen o el template a escala de grises si uno de los dos ya lo estan
    if len(template.shape) == 2 or len(img.shape) == 2:
        if len(template.shape) == 3:
            template = cv.cvtColor(template, cv.COLOR_BGR2GRAY)
        if len(img.shape) == 3:
            img = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
    # Apply template Matching
    res = cv.matchTemplate(img, template, cv.TM_CCOEFF_NORMED)
    min_val, max_val, min_loc, max_loc = cv.minMaxLoc(res)
    # Si el valor maximo es menor que un threshold, no se ha encontrado ninguna coincidencia
    if max_val < 0.5:
        return result
    # Calculo los valores de top_left y bottom_right
    top_left = max_loc
    bottom_right = (top_left[0] + w, top_left[1] + h)
    #cv.rectangle(img, top_left, bottom_right, 0, 5)
    result = top_left, bottom_right, max_val
    return result


def lectura_campo(img, points, tesseract_exe_path, method=None, is_img_shown=False):
    """
    Lector de caracteres a traves de un imagen
    Parameters:
        img: Imagen donde se leera el texto
        points: Tupla de coordenadas de la imagen donde se leera el texto
        method: Metodo de lectura
        is_img_shown: Activa la visualizacion de las imagenes
        tesseract_exe_path: Ruta del ejecutable de Tesseract
    Returns:
        Lista de tuplas: [(Texto leido, confianza de la lectura), ...]
    """

    # Transformamos la imagen a escala de grises si no lo esta
    if len(img.shape) == 3:
        gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
    else:
        gray = img.copy()

    # Creo el ROI donde se leera el texto
    if len(points) == 4:
        ix, iy, fx, fy = points
    elif len(points) == 2:
        (ix, iy), (fx, fy) = points
    roi = gray[iy:fy, ix:fx]

    # Leo el texto
    list_lectura = lectura_texto(roi, tesseract_exe_path, method, is_img_shown)

    return list_lectura


def handle_lecture_ocr(list_lecture, regex_validation, regex_filter = None):
    """
    Recibe una lista de tuplas de resultados ocr (text, conf) y los maneja para convertirlos a una sola tupla.

    Si se especifica filtro regex, se aplica a cada una de las tuplas y se extrae el texto encontrado de
    mayor confianza. Si no se encuentra, se devuelve el texto concatenado con el menor valor de confianza.

    Parameters:
        list_lecture: Lista de tuplas: [(Texto leido, confianza de la lectura), ...]
        regex: Lista de filtros regex para busqueda de texto
    """

    # Si la lista de resultados esta vacia, el texto es vacio y la confianza es de 100
    if list_lecture is None or len(list_lecture) < 1:
        return "", 100

    # region Preparacion parametros
    regex_filter = [] if regex_filter is None else regex_filter
    # endregion

    # Inicializo el resultado (texto vacio y valor de confianza minimo por defecto)
    text = ""
    conf = min(list_lecture, key=lambda lecture: lecture[1])[1]

    # Aplico filtro regex
    if len(regex_filter) > 0:
        # Ordeno los resultados por valores de confianza de mayor a menor
        list_lecture = reversed(sorted(list_lecture, key=lambda lecture: lecture[1]))
        # Aplico regex en todas las lineas encontradas
        for lecture in list_lecture:
            text_aux = lecture[0]
            # Aplico filtro
            for reg in regex_filter:
                if text_aux is not None:
                    text_aux = regex_group(reg, text_aux)
            # Si el texto hace match con el regex, cogemos este valor y el valor de confianza de la linea
            if text_aux is not None:
                text = text_aux
                conf = lecture[1]
                break
        # Si el regex no ha hecho match, junto todas las lineas y aplico el filtro sobre el texto entero
        if text == "":
            text_aux = ""
            # Junto las lineas
            for lecture in list_lecture:
                text_aux = text_aux + " " + lecture[0]
            text_aux = text_aux.strip()
            # Aplico filtro
            for reg in regex_filter:
                if text_aux is not None:
                    text_aux = regex_group(reg, text_aux)
            if text_aux is not None:
                text = text_aux
    else:
        # Si no hay filtro regex, el resultado es la concanetacion de los textos, y la confianza es la minima
        for lecture in list_lecture:
            text = text + " " + lecture[0]
        text = text.strip()

    # Aplico regex de validacion
    text = regex_group(regex_validation, text)
    text = "" if text is None else text

    print("result final: (" + text + ", " + str(conf) + ")")
    return text, conf


def regex_group(reg, input_text, exact_match=False):
    """
    Aplica un filtro regex a un texto y devuelve el texto coincidente. Si no coincide o hay algun error, devuelve None
    Arguments:
        reg: Regex string
        input_text: String to apply the regex
        exact_match: If true, the match is strict
    Result:
        First string result of applying the regex. None if not found
    """
    if exact_match:
        reg = "^" + reg + "$"
    result = None
    if input_text is not None:
        input_text = re.search(reg, input_text)
        if input_text is not None:
            result = input_text.group()

    return result


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
    return mod_basic.vconcat_resize(img_list_table)


def create_table_info_list(img_list, img_table_header_list, img_table_end_list, table_coordinates):
    """
        Crea un dicionario con las imagenes de las tablas con el numero de pagina como key, a partir de una lista de imagenes
        Argumentos:
            img_list: lista de imagenes
            img_table_header_list: lista de templates de imagen de header de tabla
            img_table_end_list: lista de templates de imagen de final de tabla
            table_coordinates: coordenadas donde se encuentra la tabla
        Returns:
            Lista de diccionarios con las imagenes de las tablas e info
        """
    img_table_info_list = []
    # Recorro la lista de imagenes
    for pag_i in range(0, len(img_list)):
        # Limito la region donde se puede encontrar la tabla
        index = str(pag_i + 1) if str(pag_i + 1) in table_coordinates else "all"
        ix, iy, fx, fy = table_coordinates[index]
        roi = img_list[pag_i][iy:fy, ix:fx]
        # Busco el header y el end
        header_top_left, header_bottom_right = apply_list_template_matching(roi, img_table_header_list)
        end_top_left, end_bottom_right = apply_list_template_matching(roi, img_table_end_list)
        # Visualizacion de la deteccion
        # roi_to_show = roi.copy()
        # cv.rectangle(roi_to_show, header_top_left, header_bottom_right, (0, 0, 255), 2)
        # cv.rectangle(roi_to_show, end_top_left, end_bottom_right, (0, 0, 255), 2)
        # cv.imshow("roi_to_show", roi_to_show)
        # cv.waitKey(0)
        # cv.destroyWindow("roi_to_show")
        # Creo una nueva region que va desde el header hasta el end (si se ha encontrado)
        roi = roi[header_bottom_right[1]:end_top_left[1], header_top_left[0]:header_bottom_right[0]]
        # Reajusto las coordenadas
        if (header_top_left, header_bottom_right) != ((None, None), (None, None)):
            header_top_left = mod_basic.sum_points(header_top_left, (ix, iy))
            header_bottom_right = mod_basic.sum_points(header_bottom_right, (ix, iy))
        if (end_top_left, end_bottom_right) != ((None, None), (None, None)):
            end_top_left = mod_basic.sum_points(end_top_left, (ix, iy))
            end_bottom_right = mod_basic.sum_points(end_bottom_right, (ix, iy))
        # Inserto la informacion en el info dict
        info_dict = {
            "header_coordinates": (header_top_left, header_bottom_right),
            "end_coordinates": (end_top_left, end_bottom_right),
            "roi": roi,
        }
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


def create_combined_table_img(set_info_table, img_table_info_list):
    # Creacion imagen combinada de la tabla del set
    table_list = []
    for table_pag in set_info_table:
        if img_table_info_list[table_pag]["header_coordinates"] != ((None, None), (None, None)):
            table_list.append(img_table_info_list[table_pag]["roi"])
    table_img = mod_basic.vconcat_resize(table_list)
    return table_img


def convert_rgb_to_grayscale(img):
    if len(img.shape) == 3:
        img_gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
    else:
        img_gray = img.copy()
    return img_gray


