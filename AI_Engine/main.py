# -*- coding: utf-8 -*-
"""
Created on Mon Apr 04 13:51:56 2022

@author: W8DE5P2 
"""

import cv2 as cv
import os
import pandas as pd
import json
from AI_Engine.sample import modulo_general as modg


def main(proveedor: str = None, path_archivos: str = None, is_img_shown: bool = False) -> pd.DataFrame:
    """
    Metodo principal de extraccion de datos de proveedores
    Argumentos:
        proveedor: Nombre del proveedor del cual se extraera la informacion. Proveedores disponibles:
            - Engine Power Compoments
            - Thyssenkrupp Campo Limpo
            - WorldClass Industries
            - EMP
            - Thyssenkrupp Crankshaft
        path_archivos: Ruta de la carpeta donde se encuentran los archivos o ruta del propio archivo
        is_img_shown: Variable para visualizar la extraccion de datos
    Returns:
        Dataframe de los datos extraidos. None si ha habido algun error
    """
    path_archivos = os.path.normpath(path_archivos)
    # %% Constantes
    PEDIDOS_WINDOW = 'PDF pedidos'
    CAMPOS = ("order_number", "reference", "quantity", "ship_out_date", "arrival_date")
    COLUMNAS = ("archivo",) + CAMPOS
    HEIGHT_TO_SHOW = 800
    # Paths
    PATH_CONFIG = os.path.join(os.path.dirname(__file__), 'Config')
    PATH_RESULTADOS = os.path.join(os.path.dirname(__file__), 'Resultados')
    # Files
    FILE_TABLE_HEADER = r"header.jpg"
    FILE_TABLE_END = r"end.jpg"
    # Filepaths
    FILEPATH_PROVEEDORES_DATA = os.path.join(PATH_CONFIG, r"proveedoresData.json")
    print(FILEPATH_PROVEEDORES_DATA)

    # %% Definicion variables
    df = pd.DataFrame(columns=COLUMNAS)

    # Listo los archivos del directorio
    # proveedor = os.path.basename(os.path.normpath(pathArchivos))
    files = []
    if os.path.isdir(path_archivos):
        files = os.listdir(path_archivos)
        files = list(map(lambda name: os.path.join(path_archivos, name), files))
    else:
        files.append(path_archivos)

    # %% Main
    print("-------------- " + proveedor + " --------------")

    # Leo el diccionario con la informacion del proveedor
    proveedores_data = {}
    # Abro archivo JSON
    if os.path.exists(FILEPATH_PROVEEDORES_DATA):
        with open(FILEPATH_PROVEEDORES_DATA, 'r') as openfile:
            # Leo del archivo JSON
            proveedores_data = json.load(openfile)
    else:
        modg.close_windows("Archivo de datos de proveedores no existe")
        return

    # Compruebo que este el proveedor
    if proveedor not in proveedores_data:
        modg.close_windows("Archivo de datos de proveedores no contiene información del proveedor")
        return
    else:
        # Compruebo que sea un diccionario
        if not type(proveedores_data[proveedor]) is dict:
            modg.close_windows("El formato de la información del proveedor no es correcta")
            return
    proveedor_data = proveedores_data[proveedor]

    # Leo las imagenes de los headers y final de la tabla
    pathfile_table_header = os.path.join(PATH_CONFIG, proveedor, FILE_TABLE_HEADER)
    pathfile_table_end = os.path.join(PATH_CONFIG, proveedor, FILE_TABLE_END)
    img_table_header = cv.imread(pathfile_table_header, cv.IMREAD_GRAYSCALE)
    img_table_end = cv.imread(pathfile_table_end, cv.IMREAD_GRAYSCALE)

    # Recorro todos los archivos del directorio
    n_files = 0
    for filename in files:
        # Compruebo que el archivo sea PDF
        if not os.path.splitext(filename)[1].lower() == ".pdf":
            continue
        # if not filename == "10-02-2022_11h-06m.pdf":
        #     continue
        # if n_files > 0:
        #     break

        # Imprimo nombre del archivo
        print(filename + ":")

        # Conversion PDF a imagen
        img_list = modg.pdf_to_img(os.path.join(filename))

        if is_img_shown:
            # Calculo las dimensiones de la primera hoja
            shape_original = img_list[0].shape[:2]  # height, width
            shape_resized = (HEIGHT_TO_SHOW, round((shape_original[1] / shape_original[0]) * HEIGHT_TO_SHOW))
            # Muestro el PDF
            cv.imshow(PEDIDOS_WINDOW,
                      cv.resize(img_list[0], (shape_resized[1], shape_resized[0]), interpolation=cv.INTER_AREA))
            cv.waitKey(1)

        # Creo la lista de imagenes donde se encontrara la tabla
        img_table_info_list = []
        if proveedor_data["table_coordinates"] is not None:
            img_table_info_list = modg.create_table_info_list(img_list, img_table_header, img_table_end,
                                                              proveedor_data["table_coordinates"])
            if is_img_shown:
                for img_table_info in img_table_info_list:
                    cv.imshow("img_table",
                              cv.resize(img_table_info["roi"], None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
                    cv.waitKey(0)
                cv.destroyWindow("img_table")

        # Creo tuplas de los campos dentro y fuera de tabla
        campos_tabla, campos_hoja = [], []
        for campo in CAMPOS:
            config_campo = proveedor_data["fields"][campo]
            # Compruebo que la configuracion no es nula
            if config_campo is not None:
                if config_campo['in_table']:
                    campos_tabla.append(campo)
                else:
                    campos_hoja.append(campo)
        campos_tabla = tuple(campos_tabla)
        campos_hoja = tuple(campos_hoja)
        campos_validos = campos_hoja + campos_tabla

        # Recorremos cada pagina
        pag_campos_data = []
        for n_pag in range(len(img_list)):
            # Inicializo el diccionario de campos de la pagina
            pag_campos_data.append({})
            # Muestro hoja
            if is_img_shown:
                cv.imshow(PEDIDOS_WINDOW,
                          cv.resize(img_list[n_pag], (shape_resized[1], shape_resized[0]), interpolation=cv.INTER_AREA))
                cv.waitKey(1)
            # Log
            print("Num pag: " + str(n_pag + 1))
            # Leemos los campos en la pagina
            for campo in campos_validos:
                # Log
                print("Campo: " + campo)
                # Inicializo campo
                pag_campos_data[n_pag][campo] = None
                # Inicializo imagen de lectura
                img_read = None
                # Guardo configuracion de campo
                config_campo = proveedor_data["fields"][campo]
                # Compruebo que el campo se encuentra en la tabla o en la hoja
                if config_campo['in_table']:
                    # Tabla
                    if img_table_info_list[n_pag]["has_header"]:
                        img_read = img_table_info_list[n_pag]["roi"]
                else:
                    # Hoja
                    if config_campo["pag"] == "all" or config_campo["pag"] == n_pag + 1:
                        img_read = img_list[n_pag]
                # Leo los datos de la hoja
                if img_read is not None:
                    pag_campos_data[n_pag][campo] = modg.lectura_campo(img_read, config_campo["coordinates"],
                                                                       config_campo["method_ocr"],
                                                                       config_campo['regex'],
                                                                       config_campo['in_table'], is_img_shown)

            # Relleno el dataframe
            # Compruebo que las listas de los campos en tabla no estan vacios
            is_table_empty = False
            for campo_tabla in campos_tabla:
                # Si estan vacios no creo el dataframe
                if pag_campos_data[n_pag][campo_tabla] is None or len(pag_campos_data[n_pag][campo_tabla]) < 1:
                    is_table_empty = True
                    break
            # Si alguna lista de tabla no tiene valores, saltamos a la siguiente pagina
            if is_table_empty:
                continue
            # Compruebo que los valores en hoja no sean nulos
            for campo_hoja in campos_hoja:
                # Si el valor del campo es nulo, copio el valor de las paginas anteriores
                if pag_campos_data[n_pag][campo_hoja] is None:
                    for n_pag_prev in reversed(range(0, n_pag + 1)):
                        if pag_campos_data[n_pag_prev][campo_hoja] is not None:
                            pag_campos_data[n_pag][campo_hoja] = pag_campos_data[n_pag_prev][campo_hoja]
                            break

            # Creo el dataframe con los datos extraidos de la pagina
            df_n = pd.DataFrame(pag_campos_data[n_pag], columns=COLUMNAS)
            # Relleno el valor de la columna de archivo
            df_n["archivo"] = filename
            # Uno el data frame con el dataframe global
            df = pd.concat([df, df_n], ignore_index=True)
            print("Dataframe pag " + str(n_pag + 1) + ":")
            print(df_n)

        # Elimino las ventanas de visualizacion
        if is_img_shown: cv.destroyWindow(PEDIDOS_WINDOW)

        n_files = n_files + 1

    # Imprimo el dataframe
    print()
    print()
    print("Dataframe total:")
    print(df.to_string())
    # Guardo el dataframe en un EXCEL para su visualizacion
    path_dataframe = os.path.join(PATH_RESULTADOS, proveedor)
    if not os.path.exists(path_dataframe):
        os.makedirs(path_dataframe)
    df.to_excel(os.path.join(path_dataframe, "dataFrame.xlsx"))

    # Borro ventanas
    modg.close_windows("Aplicacion terminada")
    return df


# proveedor = "Engine Power Compoments"
# proveedor = "WorldClass Industries"
# proveedor = "EMP"
# proveedor = "Thyssenkrupp Crankshaft"
# proveedor = "Thyssenkrupp Campo Limpo"
# proveedor = "ESP"
#
# path_archivos = r"Proveedores\orders_history\Thyssen Krupp Cranks_5500044982_DZ104463"
# path_archivos = r"Proveedores\extra\Thyssenkrupp Campo Limpo"
# path_archivos = r"Proveedores\CLIIENTES JOHN DEERE\Thyssenkrupp Campo Limpo"
# path_archivos = r"Proveedores\extra\Thyssenkrupp Campo Limpo\20-04-2022_09h-22m.pdf"
# path_archivos = r"Proveedores\CLIIENTES JOHN DEERE\ESP"
#
# main(proveedor, path_archivos, True)
