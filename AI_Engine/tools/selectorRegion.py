# -*- coding: utf-8 -*-
"""
Created on Tue Mar 29 11:25:17 2022

@author: W8DE5P2
"""

import cv2 as cv
from AI_Engine.modules import modulo_basic_functions as mod_basic
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


def file_reading(path, pag_num):
    if os.path.splitext(path)[1].lower() == ".pdf":
        img_list = mod_basic.pdf_to_img(path)
        img = img_list[pag_num - 1]
    else:
        img = cv.imread(path)
    return img


# %% Constantes globales
CoordinatesFile = "coordinates.json"
PedidosWindow = 'PDF pedidos'

# %% Variables globales
isDrawing = False  # true if mouse is pressed
ix, iy = -1, -1
fx, fy = -1, -1
img_to_show, img_original_resized = None, None

# %% Definicion variables
path_root = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores"
path = r"CLIIENTES JOHN DEERE\Thyssenkrupp Campo Limpo\header.jpg"
path = r"orders_history\Thyssen Krupp Cranks_5500044982_DZ104463"
path = r"extra\Thyssenkrupp Campo Limpo"
path = r"orders_history\ESP INTERNATIONAL_1223728_R116529\10-02-2022_09h-13m.pdf"
path = r"CLIIENTES JOHN DEERE\TIG\john deere iberica po 0016415 r1.pdf"
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Nueva carpeta\Bot-Creacion-de-Pedidos\AI_Engine\Config\70017048\header.jpg"
path = r"CLIIENTES JOHN DEERE\Thyssenkrupp Crankshaft\t15.pdf"
path = r"extra\ESP\ESP ERROR.pdf"
path = os.path.join(path_root, path)
pagNum = 1

# Lectura archivo
img_original = file_reading(path, pagNum)

# Calculos las dimensiones
shape_original = img_original.shape[:2]  # height, width
height = 1000
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

# Writing to modules.json
with open(CoordinatesFile, "w") as outfile:
    outfile.write(json_object)

exit_program("Programa terminado")
