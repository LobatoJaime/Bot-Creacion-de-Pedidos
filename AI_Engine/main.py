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
from AI_Engine.sample import modulo_basic_functions as modg_func
from AI_Engine.sample import doc_layout_analysis
from AI_Engine.format_table import FormatTable
from AI_Engine.lines import search_horiz_lines
from Packages.constants import poppler_online_path, tesseract_exe_online_path, ai_online_path


def main(proveedor: str, pedidos_path: str,
         is_img_shown: bool = False,
         ai_path: str = None, poppler_path: str = None, tesseract_exe_path: str = None) -> pd.DataFrame:
    """
    Metodo principal de extraccion de datos de proveedores
    Parameters:
        proveedor: Nombre del proveedor del cual se extraera la informacion. Proveedores disponibles:
            - Engine Power Compoments
            - Thyssenkrupp Campo Limpo
            - WorldClass Industries
            - EMP
            - Thyssenkrupp Crankshaft
            - WorldClass Industries EU
        pedidos_path: Ruta de la carpeta donde se encuentran los archivos o ruta del propio archivo a extraer
         la informacion
        is_img_shown: (Opcional) Variable para visualizar la extraccion de datos. Por defecto, esta a false
        ai_path: (Opcional) Ruta donde se encuentran las carpetas que vaya a usar la apliacacion (Config, Resultados,
         etc.). Por defecto, coge la ruta en linea
        poppler_path: (Opcional) Ruta donde se encuentran los binarios de Poppler. Por defecto, coge la ruta en linea
        tesseract_exe_path: (Opcional) Ruta donde se encuentra el ejecutable de Tesseract. Por defecto, coge la ruta en linea

    Returns:
        Dataframe de los datos extraidos. None si ha habido algun error
    """

    # region Adaptacion de parametros
    pedidos_path = os.path.normpath(pedidos_path)
    if ai_path is None:
        ai_path = ai_online_path
    ai_path = os.path.normpath(ai_path)
    if poppler_path is None:
        poppler_path = poppler_online_path
    poppler_path = os.path.normpath(poppler_path)
    if tesseract_exe_path is None:
        tesseract_exe_path = tesseract_exe_online_path
    tesseract_exe_path = os.path.normpath(tesseract_exe_path)
    # endregion

    # region Constantes
    # General constants
    PEDIDOS_WINDOW = 'PDF pedidos'
    COLUMNAS = ("order_number", "client", "reference", "quantity", "ship_out_date", "arrival_date", "confidence")
    COLUMNAS = ("archivo",) + COLUMNAS
    CAMPOS = ("order_number", "reference", "quantity", "ship_out_date", "arrival_date")
    HEIGHT_TO_SHOW = 800
    # Paths
    PATH_CONFIG = os.path.join(ai_path, 'Config')
    PATH_RESULTADOS = os.path.join(ai_path, 'Resultados')
    # Filepaths
    FILEPATH_PROVEEDORES_DATA = os.path.join(PATH_CONFIG, r"proveedores_data.json")
    FILEPATH_FORMATO_CAMPOS = os.path.join(PATH_CONFIG, r"formato_campos.json")
    # File names
    FILE_TABLE_HEADER = r"header"
    FILE_TABLE_END = r"end"
    # endregion

    # region Variables
    # Dataframe
    df = pd.DataFrame(columns=COLUMNAS)
    # endregion

    # region Main
    print("-------------- " + proveedor + " --------------")

    # region Listado archivos de proveedores
    files = []
    if os.path.isdir(pedidos_path):
        files = os.listdir(pedidos_path)
        files = list(map(lambda name: os.path.join(pedidos_path, name), files))
    else:
        files.append(pedidos_path)
    # endregion

    # region Lectura de configuracion

    # region Informacion del proveedor
    proveedores_data = {}
    # Leo archivo JSON
    if os.path.exists(FILEPATH_PROVEEDORES_DATA):
        with open(FILEPATH_PROVEEDORES_DATA, 'r') as openfile:
            proveedores_data = json.load(openfile)
    else:
        modg_func.close_windows("Configuracion de proveedores no encontrada")
        return
    # Compruebo que existe el proveedor
    if proveedor not in proveedores_data:
        modg_func.close_windows("Configuracion de proveedores no contiene información del proveedor")
        return
    else:
        # Compruebo que sea un diccionario
        if not type(proveedores_data[proveedor]) is dict:
            modg_func.close_windows("El formato de la Configuracion de proveedores no es correcta")
            return
    # endregion

    # region Formato campos
    formato_campos = {}
    # Leo archivo JSON
    if os.path.exists(FILEPATH_FORMATO_CAMPOS):
        with open(FILEPATH_FORMATO_CAMPOS, 'r') as openfile:
            formato_campos = json.load(openfile)
    else:
        modg_func.close_windows("Configuracion de formato no encontrado")
        return
    # Formateo el diccionario
    for campo in formato_campos:
        formato_campos[campo] = "|".join(formato_campos[campo])
    # endregion

    # Creo variables de acceso directo
    proveedor_data = proveedores_data[proveedor]
    proveedor_campos = proveedor_data["fields"]
    proveedor_tabla = proveedor_data["table"]

    # Leo las imagenes de los headers y final de la tabla
    pathfile_table_header_list = [os.path.join(PATH_CONFIG, proveedor, filename) for filename in
                                  os.listdir(os.path.join(PATH_CONFIG, proveedor)) if
                                  filename.startswith(FILE_TABLE_HEADER)]
    pathfile_table_end_list = [os.path.join(PATH_CONFIG, proveedor, filename) for filename in
                               os.listdir(os.path.join(PATH_CONFIG, proveedor)) if
                               filename.startswith(FILE_TABLE_END)]
    img_table_header_list = [cv.imread(pathfile) for pathfile in pathfile_table_header_list]
    img_table_end_list = [cv.imread(pathfile) for pathfile in pathfile_table_end_list]
    # endregion

    # region Lectura del proveedor
    # Recorro todos los archivos del directorio
    n_files = 0
    for filename in files:

        # region Filtrado de archivo
        # Compruebo que el archivo sea PDF
        if not os.path.splitext(filename)[1].lower() == ".pdf":
            continue
        # if n_files > 4:
        #     break
        # endregion

        # Imprimo nombre del archivo
        print(filename + ":")

        # region Conversion PDF a imagen
        img_list = modg_func.pdf_to_img(os.path.join(filename), poppler_path=poppler_path)
        # endregion

        # region Visualizacion pedido
        if is_img_shown:
            # Calculo las dimensiones de la primera hoja
            shape_original = img_list[0].shape[:2]  # height, width
            shape_resized = (HEIGHT_TO_SHOW, round((shape_original[1] / shape_original[0]) * HEIGHT_TO_SHOW))
            # Muestro el PDF
            cv.imshow(PEDIDOS_WINDOW,
                      cv.resize(img_list[0], (shape_resized[1], shape_resized[0]), interpolation=cv.INTER_AREA))
            cv.waitKey(1)
        # endregion

        # region Creacion tuplas campos hoja y campos tabla
        # Creo tuplas de los campos dentro y fuera de tabla
        campos_tabla, campos_hoja = [], []
        for campo in CAMPOS:
            # Compruebo que la configuracion no es nula
            if proveedor_campos[campo] is not None:
                if proveedor_campos[campo]['in_table']:
                    campos_tabla.append(campo)
                else:
                    campos_hoja.append(campo)
        campos_tabla, campos_hoja = tuple(campos_tabla), tuple(campos_hoja)
        campos_validos = campos_hoja + campos_tabla
        # endregion

        # region Creacion sets de informacion
        # Recorro la configuracion para crear los sets de informacion
        # Estos set contendran los campos presentes y el numero de pagina donde se encuentran
        sets_info = []
        # Recorremos cada pagina
        for n_pag in range(len(img_list)):
            setInfo = {}
            # Recorro campos fijos para crear el set de info
            for campo in campos_hoja:
                if proveedor_campos[campo]["pag"] == "all" or proveedor_campos[campo]["pag"] == n_pag + 1:
                    setInfo[campo] = n_pag
            # Si hay campos hoja en la pagina, creamos nuevo set
            if setInfo != {}:
                setInfo["table"] = [n_pag]
                sets_info.append(setInfo)
            # Si no hay campos hoja, actualizamos el campo tabla del ultimo set
            else:
                sets_info[-1]["table"].append(n_pag)
        print("sets_info:")
        print(sets_info)
        print()
        # endregion

        # region Creacion lista imagenes de tabla
        # Creo la lista de imagenes donde se encontrara la tabla
        img_table_info_list = []
        if proveedor_tabla["coordinates"] is not None:
            img_table_info_list = modg.create_table_info_list(img_list,
                                                              img_table_header_list,
                                                              img_table_end_list,
                                                              proveedor_tabla["coordinates"])

            # region Visualizacion lista imagenes de tabla
            if is_img_shown and False:
                for img_table_info in img_table_info_list:
                    cv.imshow("img_table",
                              cv.resize(img_table_info["roi"], None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
                    cv.waitKey(0)
                cv.destroyWindow("img_table")
            # endregion

        # endregion

        # region Creacion de sets de datos
        set_data_list = []
        # Recorremos cada set de informacion
        for setInfo in sets_info:
            set_data = {}

            # region Creacion imagen combinada de la tabla del set
            table_list = []
            for table_pag in setInfo["table"]:
                if img_table_info_list[table_pag]["has_header"]:
                    table_list.append(img_table_info_list[table_pag]["roi"])
            table_img = modg_func.vconcat_resize(table_list)
            if len(table_img.shape) == 3:
                table_img_gray = cv.cvtColor(table_img, cv.COLOR_BGR2GRAY)
            else:
                table_img_gray = table_img.copy()
            # endregion

            # region Lectura campos hoja
            for campo in campos_hoja:
                if setInfo[campo] is not None:
                    img_read = img_list[setInfo[campo]]
                    set_data[campo] = modg.lectura_campo(img_read,
                                                         proveedor_campos[campo]["coordinates"],
                                                         tesseract_exe_path,
                                                         proveedor_campos[campo]["method_ocr"],
                                                         proveedor_campos[campo]['regex'],
                                                         is_img_shown)
                else:
                    # Si la info del campo en el set es nulo, recupero el valor del set anterior
                    set_data[campo] = set_data_list[-1][campo] if len(set_data_list) > 0 else None
            # endregion

            # region Lectura campos tabla
            # Inicializo campos tabla
            for campo in campos_tabla:
                set_data[campo] = []
            # Leo campos tabla
            if table_img is not None and len(campos_tabla) > 0:

                # region Tabla "lines"
                if proveedor_tabla["type"] == "lines":

                    # region Visualizacion tabla del set
                    if is_img_shown:
                        cv.imshow("img_table",
                                  cv.resize(table_img, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
                        cv.waitKey(0)
                        cv.destroyWindow("img_table")
                    # endregion

                    # region Busqueda de lineas horizontales
                    lines = search_horiz_lines(table_img_gray, 3, table_img_gray.shape[1] - 30)
                    # endregion

                    # region Eliminacion de lineas horizontales
                    thresh = cv.threshold(table_img_gray, 0, 255, cv.THRESH_BINARY_INV + cv.THRESH_OTSU)[1]
                    horizontal_kernel = cv.getStructuringElement(cv.MORPH_RECT, (40, 1))
                    remove_horizontal = cv.morphologyEx(thresh, cv.MORPH_OPEN, horizontal_kernel, iterations=1)
                    cnts = cv.findContours(remove_horizontal, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE)
                    cnts = cnts[0] if len(cnts) == 2 else cnts[1]
                    tabla_procesada = table_img_gray.copy()
                    for c in cnts:
                        cv.drawContours(tabla_procesada, [c], -1, (255, 255, 255), 5)

                    # region Visualizacion tabla sin lineas
                    if is_img_shown:
                        cv.imshow("tabla_procesada",
                                  cv.resize(tabla_procesada, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
                        cv.waitKey(0)
                        cv.destroyWindow("tabla_procesada")
                    # endregion

                    # endregion

                    # region Creacion de lista de imagenes por fila de tabla
                    filas_img = []
                    y1, y_end = 0, tabla_procesada.shape[0]
                    for line in lines:
                        y2 = line[0][1]
                        filas_img.append(tabla_procesada[y1:y2])
                        y1 = y2
                    filas_img.append(tabla_procesada[y1:y_end])
                    # endregion

                    # region Lectura de campos
                    # Recorro las imagenes de las filas
                    for fila_img in filas_img:

                        # region Visualizacion fila
                        if is_img_shown:
                            cv.imshow("fila",
                                      cv.resize(fila_img, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
                            cv.waitKey(0)
                            cv.destroyWindow("fila")
                        # endregion

                        # region Lectura de campo por fila
                        row_data = {}
                        is_empty_row = True  # Variable para determinar si la fila esta vacia
                        for campo in campos_tabla:
                            # Leo el campo
                            lectura = modg.lectura_campo(fila_img,
                                                         proveedor_campos[campo]["coordinates"],
                                                         tesseract_exe_path,
                                                         proveedor_campos[campo]["method_ocr"],
                                                         proveedor_campos[campo]['regex'],
                                                         is_img_shown)
                            # El campo no esta vacio
                            if lectura[0].strip():
                                is_empty_row = False

                            row_data[campo] = lectura
                        # endregion

                        # region Validacion de fila
                        # Si la fila tiene valores la inserto en el set de datos
                        if not is_empty_row:
                            for campo in campos_tabla:
                                set_data[campo].append(row_data[campo])
                        # endregion

                    # endregion

                # endregion

                # region Tabla "no_lines"
                elif proveedor_tabla["type"] == "no_lines":
                    for campo in campos_tabla:
                        # Creo el ROI que contiene la columna
                        ix, iy, fx, fy = proveedor_campos[campo]["coordinates"]
                        column_img = table_img_gray[iy:fy, ix:fx]
                        # Detecto los contornos de las lineas del texto
                        column_img_to_show = column_img.copy() if is_img_shown else None
                        boxes, column_img_to_show = doc_layout_analysis.process_line(column_img, column_img_to_show)
                        if is_img_shown:
                            cv.imshow("column_img",
                                      cv.resize(column_img_to_show, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
                        set_data[campo] = []
                        # Por cada contorno leo el campo
                        for box in reversed(boxes):
                            set_data[campo].append(modg.lectura_campo(column_img,
                                                                      box,
                                                                      tesseract_exe_path,
                                                                      proveedor_campos[campo]["method_ocr"],
                                                                      proveedor_campos[campo]['regex'],
                                                                      is_img_shown))
                # endregion

            # Compruebo que las listas de los campos en tabla no estan vacios
            if any(len(set_data[campo]) <= 0 for campo in campos_tabla):
                # Si alguna lista de tabla no tiene valores, saltamos al siguiente set
                continue
            # endregion

            # Añado nuevo set
            set_data_list.append(set_data)

        print("set_data_list")
        print(set_data_list)
        print()
        # endregion

        # region Creacion dataframe
        # Relleno el dataframe
        for set_data in set_data_list:
            # Extraigo el diccionario con el texto
            set_data_dict = {}
            for campo in set_data:
                if campo in campos_tabla:
                    set_data_dict[campo] = [item[0] for item in set_data[campo]]
                    set_data_dict["conf_" + campo] = [item[1] for item in set_data[campo]]
                else:
                    set_data_dict[campo] = set_data[campo][0]
                    set_data_dict["conf_" + campo] = set_data[campo][1]
            # Creo el dataframe con los datos extraidos de la pagina
            df_n = pd.DataFrame(set_data_dict)

            print(df_n)
            # Creo la lista de los nombres de las columnas auxiliares de confianza
            conf_columnas = [x for x in list(set_data_dict.keys()) if x.startswith("conf_")]
            print(df_n[conf_columnas])
            # Creo la columna de confianza
            df_n["confidence"] = df_n[conf_columnas].min(axis=1)
            df_n = pd.DataFrame(df_n, columns=COLUMNAS)
            # Relleno el valor de las columnas extra
            if "archivo" in COLUMNAS:
                df_n["archivo"] = filename
            df_n["client"] = proveedor
            # Recorro todas las filas del dataframe para comprobar si el formato del campo es correcto
            for i in range(len(df_n)):
                for campo in campos_validos:
                    # Aplico regex para comprobar el formato
                    reg_res = modg.regex_group(formato_campos[campo], df_n.loc[i, campo])
                    # Si el formato no es correcto, el valor de confianza es -100
                    if reg_res is None or df_n.loc[i, campo] is None or len(reg_res) != len(df_n.loc[i, campo]):
                        df_n.loc[i, "confidence"] = -100
            # Uno el data frame con el dataframe global
            print("Dataframe set:")
            print(df_n)
            df = pd.concat([df, df_n], ignore_index=True)
        # endregion

        # region Eliminacion visualizacion pedido
        if is_img_shown:
            cv.destroyWindow(PEDIDOS_WINDOW)
        # endregion

        n_files = n_files + 1
    # endregion

    # region Formateo dataframe
    # Sacar un promedio de la columna de confianza
    confidences = df['confidence'].to_list()
    if len(confidences) > 1:
        total_confidence = (sum(confidences) / len(
            confidences)) / 100  # Dividirlo por 100 para tener valores entre [0-1]
        total_confidence = round(total_confidence, 2)  # Redondear a 2 decimales
        df['confidence'] = [total_confidence] * len(confidences)

    # Formatear las columnas de la tabla
    df = FormatTable(orders=df).format()
    # endregion

    # region Visualizacion y guardado de dataframe
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
    # endregion

    # Borro ventanas
    modg_func.close_windows("Aplicacion terminada")
    # endregion

    return df


# proveedor = "Engine Power Compoments"
# proveedor = "Thyssenkrupp Crankshaft"
# proveedor = "WorldClass Industries"
# proveedor = "JD REMAN"
# proveedor = "Thyssenkrupp Campo Limpo"
# proveedor = "EMP"
# proveedor = "ESP"
#
# pedidos_path_root = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores"
# pedidos_path = r"orders_history\Thyssen Krupp Cranks_5500044982_DZ104463"
# pedidos_path = r"extra\Thyssenkrupp Campo Limpo\20-04-2022_09h-22m.pdf"
# pedidos_path = r"CLIIENTES JOHN DEERE\ESP\t48.pdf"
# pedidos_path = r"orders_history\ESP INTERNATIONAL_1223728_R116529"
# pedidos_path = r"CLIIENTES JOHN DEERE\WorldClass Industries"
# pedidos_path = r"extra\Thyssenkrupp Campo Limpo"
# pedidos_path = r"CLIIENTES JOHN DEERE\Thyssenkrupp Campo Limpo"
# pedidos_path = r"test"
# pedidos_path = r"CLIIENTES JOHN DEERE\EMP"
# pedidos_path = r"CLIIENTES JOHN DEERE\ESP\t48.pdf"
# pedidos_path = os.path.join(pedidos_path_root, pedidos_path)
#
# main(proveedor, pedidos_path, is_img_shown=True, ai_path=".",
#      poppler_path=r"C:\Program Files (x86)\poppler-22.01.0\Library\bin",
#      tesseract_exe_path=r"C:\Program Files\Tesseract-OCR\tesseract.exe")
