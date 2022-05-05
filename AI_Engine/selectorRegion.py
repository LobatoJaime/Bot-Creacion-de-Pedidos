# -*- coding: utf-8 -*-
"""
Created on Tue Mar 29 11:25:17 2022

@author: W8DE5P2
"""

import cv2 as cv
from pdf2image import convert_from_path
import sys
import os
import json


def draw_rectangle(event, x, y, flags, param):
    """
    Mouse callback function
    """
    global ix, iy, fx, fy, isDrawing, img_to_show, img_original_resized
    if event == cv.EVENT_LBUTTONDOWN:
        isDrawing = True
        ix, iy = x, y
    elif event == cv.EVENT_MOUSEMOVE:
        if isDrawing is True:
            img_to_show = img_original_resized.copy()
            cv.rectangle(img_to_show, (ix, iy), (x, y), (0, 255, 0), 2)
    elif event == cv.EVENT_LBUTTONUP:
        img_to_show = img_original_resized.copy()
        isDrawing = False
        fx, fy = x, y
        cv.rectangle(img_to_show, (ix, iy), (x, y), (255, 0, 255), 2)


def field_selection():
    """
    Funcion que permite seleccion en una ventana
    """
    global ix, iy, fx, fy, img_to_show

    # Inicializacion de variables
    ix, iy, fx, fy = -1, -1, -1, -1

    # Actualizo la imagen y escucho los input
    while (1):
        cv.imshow(PedidosWindow, img_to_show)
        k = cv.waitKey(1) & 0xFF
        if k == 27:  # esc
            exit_program("El usuario interrumpido la aplicacion")
        elif k == 13:  # enter
            # Compruebo si ha seleccionado un area
            if (ix, iy, fx, fy) == (-1, -1, -1, -1):
                print("Seleccione un area")
            else:
                break
    # Ajusto los puntos
    if iy > fy:
        iy, fy = fy, iy
    if ix > fx:
        ix, fx = fx, ix
    ix = 0 if ix < 0 else ix
    iy = 0 if iy < 0 else iy
    fx = shape_resized[1] - 1 if fx >= shape_resized[1] else fx
    fy = shape_resized[0] - 1 if fy >= shape_resized[0] else fy

    # Redimensiono los puntos a la imagen original
    ratioH = shape_original[0] / shape_resized[0]
    ratioW = shape_original[1] / shape_resized[1]
    ix, iy = round(ix * ratioW), round(iy * ratioH)
    fx, fy = round(fx * ratioW), round(fy * ratioH)
    return ix, iy, fx, fy


def exit_program(message):
    """
    Funcion auxiliar para cerrar la aplicacion
    """
    cv.destroyAllWindows()
    sys.exit(message)


def pdf_to_img(path, pag_num):
    delete_img = False
    # Conversion pdf a jpg
    if os.path.splitext(path)[1].lower() == ".pdf":
        images = convert_from_path(path)
        # for i in range(len(images)):
        #     images[i].save(path + '.jpg', 'JPEG')
        path = path + '.jpg'
        images[pag_num - 1].save(path, 'JPEG')
        delete_img = True
    # Lectura de imagen
    img_original = cv.imread(path)
    if img_original is None:
        exit_program("No se pudo leer la imagen: " + path)
    # Borrado de archivo de imagen
    if delete_img:
        os.remove(path)
    return img_original


# %% Constantes globales
CoordinatesFile = "coordinates.json"
PedidosWindow = 'PDF pedidos'

# %% Variables globales
isDrawing = False  # true if mouse is pressed
ix, iy = -1, -1
fx, fy = -1, -1
img_to_show, img_original_resized = None, None

# %% Definicion variables
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\Thyssenkrupp Campo Limpo\header.jpg"
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\EMP\t1.pdf"
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\Engine Power Compoments\header.jpg"
pagNum = 1

# %% Conversion pdf a jpg
img_original = pdf_to_img(path, pagNum)

# Calculos las dimensiones
shape_original = img_original.shape[:2]  # height, width
height = 100
shape_resized = (height, round((shape_original[1] / shape_original[0]) * height))

# Resize de la imagen original
img_original_resized = cv.resize(img_original, (shape_resized[1], shape_resized[0]), interpolation=cv.INTER_AREA)

# Creacion imagen a mostrar por pantalla
img_to_show = img_original_resized.copy()

# Creacion de ventana y asignacion de eventos
cv.namedWindow(PedidosWindow)
cv.imshow(PedidosWindow, img_to_show)
cv.waitKey(1)
cv.setMouseCallback(PedidosWindow, draw_rectangle)

print("Selecciona las coordenadas:")
coordenadas = field_selection()

coordenadasDict = {
    "ix": coordenadas[0],
    "iy": coordenadas[1],
    "fx": coordenadas[2],
    "fy": coordenadas[3]
}

print("Coordenadas: " + str(coordenadasDict))
print("============================================")

# Serializing json 
json_object = json.dumps(coordenadasDict, indent=4)

# Writing to sample.json
with open(CoordinatesFile, "w") as outfile:
    outfile.write(json_object)

exit_program("Programa terminado")
