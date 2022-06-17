import os
import sys
import cv2 as cv
from pdf2image import convert_from_path


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


def pdf_to_img(path, poppler_path: str = None, erase_img: bool = True):
    """
    Convierte archivo pdf a lista de imagenes
    """
    list_img = []

    # Conversion pdf a jpg
    images = convert_from_path(path, poppler_path=poppler_path)
    # Recorro la lista de imagenes
    for i in range(len(images)):
        path_img = path + '-' + str(i) + '.jpg'
        # Guardo la imagen
        images[i].save(path_img, 'JPEG')
        # Lectura de imagen
        img_i = cv.imread(path_img, cv.IMREAD_COLOR)
        list_img.append(img_i)
        # Borrado de archivo de imagen
        if erase_img:
            os.remove(path_img)

    return list_img


def aumentar_box(box, img_shape, resize_config):
    """
    Añade mas borde al box teniendo en cuenta los limites de la imagen
    """
    left, top, right, down = resize_config
    # Extraigo las caracteristicas del box
    x1, y1, w, h = box
    # Creo los puntos
    x2, y2 = x1 + w, y1 + h
    # Modifico los puntos si estos salen de la imagen
    x1 = x1 - left
    if x1 < 0:
        x1 = 0
    y1 = y1 - top
    if y1 < 0:
        y1 = 0
    x2 = x2 + right
    if x2 > img_shape[1]:
        x2 = img_shape[1] - 1
    y2 = y2 + down
    if y2 > img_shape[0]:
        y2 = img_shape[0] - 1
    return x1, y1, x2, y2


def is_point_en_rect(point, rect_coor):
    x1, y1 = rect_coor[0]
    x2, y2 = rect_coor[1]
    x, y = point
    if x1 < x < x2:
        if y1 < y < y2:
            return True
    return False


def get_closest_lines(vertical_lines_y_pos, horizontal_lines_x_pos, pt1, pt2):
    closest_left = min(vertical_lines_y_pos, key=lambda y: abs(y - pt1[0]))
    closest_top = min(horizontal_lines_x_pos, key=lambda x: abs(x - pt1[1]))
    closest_right = min(vertical_lines_y_pos, key=lambda y: abs(y - pt2[0]))
    closest_bot = min(horizontal_lines_x_pos, key=lambda x: abs(x - pt2[1]))
    return (closest_left, closest_top), (closest_right, closest_bot)


def sum_points(pt1, pt2):
    return (pt1[0] + pt2[0], pt1[1] + pt2[1])


def subs_points(pt1, pt2):
    return (pt1[0] - pt2[0], pt1[1] - pt2[1])