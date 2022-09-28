# -*- coding: utf-8 -*-
"""
Created on Tue Mar 22 10:46:23 2022

@author: W8DE5P2
"""

import cv2 as cv
import os
import sys
from pdf2image import convert_from_path
import numpy as np
from matplotlib import pyplot as plt


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

def exit_program(message):
    """
    Funcion auxiliar para cerrar la aplicacion
    """
    cv.destroyAllWindows()
    sys.exit(message)


pathImg = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\Thyssenkrupp Crankshaft\t16-2.jpg"
pathImg = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\Thyssenkrupp Crankshaft\t112-1-cut.jpg"
pathImg = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\WordClass Industries\t100.pdf"
pathImg = os.path.normpath(pathImg)
pagNum = 1

pathTemplate = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\WordClass Industries\t2-header vendor.jpg"
pathTemplate = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\WordClass Industries\t2-end.jpg"
pathTemplate = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proyectos\Pedidos-Tier-2\Pedidos-Tier-2\CLIIENTES JOHN DEERE\WordClass Industries\t2-header.jpg"

pathTemplate = os.path.normpath(pathTemplate)

img = pdf_to_img(pathImg, pagNum)

img = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
img2 = img.copy()
template = cv.imread(pathTemplate, cv.IMREAD_GRAYSCALE)
w, h = template.shape[::-1]

# All the 6 methods for comparison in a list
methods = ['cv.TM_CCOEFF', 'cv.TM_CCOEFF_NORMED', 'cv.TM_CCORR',
            'cv.TM_CCORR_NORMED', 'cv.TM_SQDIFF', 'cv.TM_SQDIFF_NORMED']
# cv.TM_CCORR no funciona bien
for meth in methods:
    print(meth + ":")
    img = img2.copy()
    method = eval(meth)
    # Apply template Matching
    res = cv.matchTemplate(img, template, method)
    min_val, max_val, min_loc, max_loc = cv.minMaxLoc(res)
    # If the method is TM_SQDIFF or TM_SQDIFF_NORMED, take minimum
    if method in [cv.TM_SQDIFF, cv.TM_SQDIFF_NORMED]:
        # Si el match es correcto, min_val debera ser menor que 0.01 (cv.TM_SQDIFF_NORMED)
        top_left = min_loc
        print("min_val: " + str(min_val))
    else:
        # Si el match es correcto, max_val debera ser mayor que 0.9 (cv.TM_CCOEFF_NORMED)
        top_left = max_loc
        print("max_val: " + str(max_val))
    bottom_right = (top_left[0] + w, top_left[1] + h)
    cv.rectangle(img, top_left, bottom_right, 0, 5)
    # plt.subplot(121),plt.imshow(res,cmap = 'gray')
    # plt.title('Matching Result'), plt.xticks([]), plt.yticks([])
    # plt.subplot(122),plt.imshow(img,cmap = 'gray')
    # plt.title('Detected Point'), plt.xticks([]), plt.yticks([])
    # plt.suptitle(meth)
    # plt.show()
    
    shape_original = img.shape[:2]  # height, width
    resized_height = 500
    shape_resized = (resized_height, round((shape_original[1]/shape_original[0]) * resized_height))

    # Resize de la imagen original    
    cv.imshow(str(meth), cv.resize(img, (shape_resized[1], shape_resized[0]), interpolation=cv.INTER_AREA))

cv.waitKey(0)
cv.destroyAllWindows()