import os
import sys
import cv2 as cv
from pdf2image import convert_from_path
from Packages.constants import poppler_online_path

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


def pdf_to_img(path, poppler_path: str, is_gray=True):
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
        if is_gray:
            img_i = cv.cvtColor(img_i, cv.COLOR_BGR2GRAY)
        list_img.append(img_i)
        # Borrado de archivo de imagen
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
        x2 = img_shape[1]-1
    y2 = y2 + down
    if y2 > img_shape[0]:
        y2 = img_shape[0]-1
    return x1, y1, x2, y2
