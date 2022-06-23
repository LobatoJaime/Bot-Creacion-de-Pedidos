import cv2 as cv
import numpy as np
from AI_Engine.sample import modulo_basic_functions as mod_basic


def nothing(x):
    """Funcion nothing para trackbar"""
    pass


def table_parameter_selector(src):
    size_factor = 0.5  # Factor the image will be resized
    scale_x = 20
    scale_y = 20

    # Inicializamos trackbar para modificar parametros:
    cv.namedWindow("Parameters selector")
    cv.createTrackbar("size_factor", "Parameters selector", int(size_factor * 10), 20, nothing)
    cv.createTrackbar("scaleX", "Parameters selector", scale_x, 50, nothing)
    cv.createTrackbar("scaleY", "Parameters selector", scale_y, 50, nothing)

    stop = False
    while not stop:
        # Creamos trackbar para modificar parametros:
        size_factor = cv.getTrackbarPos('size_factor', 'Parameters selector')
        if size_factor == 0:
            size_factor = 1
        size_factor = size_factor / 10
        scale_x = cv.getTrackbarPos('scaleX', 'Parameters selector')
        if scale_x == 0:
            scale_x = 1
        scale_y = cv.getTrackbarPos('scaleY', 'Parameters selector')
        if scale_y == 0:
            scale_y = 1
        # Detectamos las tablas
        tables_data, src_no_lines = table_detector(src, size_factor, scale_x, scale_y, True)
        # Dibujamos las detecciones y las mostramos
        src_to_show = src.copy()
        for table_data in tables_data:
            src_to_show_roi = src_to_show[table_data["table_coordinates"][0][1]:table_data["table_coordinates"][1][1],
                              table_data["table_coordinates"][0][0]:table_data["table_coordinates"][1][0]]
            cv.rectangle(src_to_show, table_data["table_coordinates"][0], table_data["table_coordinates"][1], (0, 255, 0), 5)
            for cell_data in table_data["cells"]:
                cv.rectangle(src_to_show_roi,
                             (cell_data["lines_coordinates"][0][0], cell_data["lines_coordinates"][0][1]),
                             (cell_data["lines_coordinates"][1][0], cell_data["lines_coordinates"][1][1]),
                             (0, 0, 255), 2)
                cv.circle(src_to_show_roi,
                          (int((cell_data["lines_coordinates"][0][0] + cell_data["lines_coordinates"][1][0]) / 2),
                           int((cell_data["lines_coordinates"][0][1] + cell_data["lines_coordinates"][1][1]) / 2)),
                          5, (255, 255, 0), cv.FILLED)
            for joint_points in table_data["joints_coordinates"]:
                cv.circle(src_to_show_roi, (joint_points[0], joint_points[1]), 7, (255, 0, 0), -1)
        # Visualizamos las tablas
        cv.imshow("src_to_show", cv.resize(src_to_show, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        cv.imshow("src_no_lines", cv.resize(src_no_lines, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        k = cv.waitKey(10) & 0xFF
        if k == 27:  # esc
            stop = True
    return tables_data


def get_table(src, tables_data):
    if len(src.shape) == 3:
        gray = cv.cvtColor(src, cv.COLOR_BGR2GRAY)
    else:
        gray = src
    for table_data in tables_data:
        table_roi = gray[table_data["table_coordinates"][0][1]:table_data["table_coordinates"][1][1],
                    table_data["table_coordinates"][0][0]:table_data["table_coordinates"][1][0]]
        cv.imshow("table_roi", cv.resize(table_roi, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        cv.waitKey(0)
    return


def table_detector(src, size_factor: float = None, scale_x: int = None, scale_y: int = None, is_img_shown: bool = False):
    """
    A partir de una imagen saco los puntos de las tablas detectadas
    Returns:
        tables_data = [
            {
                "table_coordinates": (pt1, pt2),
                "joints_coordinates": [(pt1, pt2), (pt1, pt2), ...],
                "vertical_lines_x_pos": [y1, y2, ...],
                "horizontal_lines_y_pos": [x1, x2, ...],content_coordinates
                "cells": [
                    {
                        "content_coordinates": (pt1, pt2),
                        "lines_coordinates": (pt1, pt2)
                    }, ...
                ]
            }, ...
        ]
    """
    # Parameters
    if size_factor is None:
        size_factor = 0.5  # Factor the image will be resized
    if scale_x is None:
        scale_x = 20  # Play with this variable in order to increase / decrease the amount of lines to be detected
    if scale_y is None:
        scale_y = 20  # Play with this variable in order to increase / decrease the amount of lines to be detected
    circularStructure = cv.getStructuringElement(cv.MORPH_ELLIPSE, (5, 5))

    # Visualization parameters
    visualization_size_factor = 0.4 / size_factor

    # region Image preprocessing
    # Resizing for practical reasons
    size = [int(src.shape[1] * size_factor), int(src.shape[0] * size_factor)]
    rsz = cv.resize(src, size, interpolation=cv.INTER_AREA)
    if len(rsz.shape) == 3:
        gray = cv.cvtColor(rsz, cv.COLOR_BGR2GRAY)
    else:
        gray = rsz

    # Apply adaptiveThreshold at the bitwise_not of gray, notice the ~ symbol
    bw = cv.adaptiveThreshold(~gray, 255, cv.ADAPTIVE_THRESH_MEAN_C, cv.THRESH_BINARY, 15, -2)
    # bw = cv.adaptiveThreshold(~gray, 255, cv.ADAPTIVE_THRESH_GAUSSIAN_C, cv.THRESH_BINARY, 15, -2)
    # endregion

    # region Detect horizontal and vertical lines
    # Create the images that will use to extract the horizontal and vertical lines
    horizontal = bw.copy()
    vertical = bw.copy()

    # Specify size on horizontal axis
    horizontalsize = int(horizontal.shape[1] / scale_x)

    # Create structure element for extracting horizontal lines through morphology operations
    horizontalStructure = cv.getStructuringElement(cv.MORPH_RECT, (horizontalsize, 1))

    # Apply morphology operations
    horizontal = cv.dilate(horizontal, cv.getStructuringElement(cv.MORPH_RECT, (1, 2)), (-1, -1))
    horizontal = cv.erode(horizontal, horizontalStructure, (-1, -1))
    horizontal = cv.dilate(horizontal, horizontalStructure, (-1, -1))
    # horizontal = cv.dilate(horizontal, horizontalStructure, (-1, -1)) # expand horizontal lines

    # Specify size on vertical axis
    verticalsize = int(vertical.shape[0] / scale_y)

    # Create structure element for extracting vertical lines through morphology operations
    verticalStructure = cv.getStructuringElement(cv.MORPH_RECT, (1, verticalsize))

    # Apply morphology operations
    vertical = cv.dilate(vertical, cv.getStructuringElement(cv.MORPH_RECT, (2, 1)), (-1, -1))
    vertical = cv.erode(vertical, verticalStructure, (-1, -1))
    vertical = cv.dilate(vertical, verticalStructure, (-1, -1))
    # vertical = cv.dilate(vertical, verticalStructure, (-1, -1)) # expand vertical lines

    # endregion

    # region Table mask
    # create a mask which includes the tables
    mask = cv.bitwise_or(horizontal, vertical)
    # endregion

    # region Joints mask
    # find the joints between the lines of the tables, we will use this information in order to descriminate tables
    # from pictures (tables will contain more than 4 joints while a picture only 4 (i.e. at the corners))
    joints = cv.bitwise_and(horizontal, vertical)
    joints = cv.dilate(joints, circularStructure, (-1, -1))
    # endregion

    # region Image features visualization
    if is_img_shown:
        cv.imshow("rsz", cv.resize(rsz, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                   interpolation=cv.INTER_AREA))
        cv.imshow("horizontal", cv.resize(horizontal, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                          interpolation=cv.INTER_AREA))
        cv.imshow("vertical", cv.resize(vertical, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                        interpolation=cv.INTER_AREA))
        cv.waitKey(10)
    # endregion

    # region Detect tables
    # Encuentro los contornos de las tablas
    table_contours, hierarchy = cv.findContours(mask, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE, offset=(0, 0))
    tables_data = []
    for table_cnt in table_contours:
        table_data = {
            "table_coordinates": (),
            "joints_coordinates": [],
            "vertical_lines_x_pos": [],
            "horizontal_lines_y_pos": [],
            "cells": [],
        }

        # region Contour data extraction and filtering
        # Filtro los contornos por area
        area = cv.contourArea(table_cnt)
        if area < 50/size_factor:  # Valor elegido aleatoriamente
            continue
        # Extraigo coordenadas del contorno
        contours_poly = cv.approxPolyDP(table_cnt, 3, True)
        x1, y1, w, h = cv.boundingRect(contours_poly)
        x2, y2 = x1 + w, y1 + h
        # Filtro los contornos por anchura y altura
        if w < 2 or h < 2:
            continue
        # Agrando el ROI para coger lineas en el borde
        #x1, y1, x2, y2 = x1-2, y1-2, x2+2, y2+2
        # if x1 < 0: x1 = 0
        # if y1 < 0: y1 = 0
        # if x2 > mask.shape[1]: x2 = mask.shape[1]
        # if y2 > mask.shape[0]: y2 = mask.shape[0]
        # Encuentro el numero de joints de las lineas verticales y horizontales
        joints_contours, _ = cv.findContours(joints[y1:y2, x1:x2], cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
        # Filtro los contornos por numero de joints
        if len(joints_contours) < 4:
            continue
        # endregion

        # region Vertical lines X position extraction
        # Find external contours from the vertical lines
        contours_v, hierarchy = cv.findContours(vertical[y1:y2, x1:x2], cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE, offset=(0, 0))
        vertical_lines_info = []
        for cnt_v in contours_v:
            # calculate x, y coordinate of center
            M = cv.moments(cnt_v)
            cX = int(M["m10"] / M["m00"]) if M["m00"] != 0 else 0
            cY = int(M["m01"] / M["m00"]) if M["m00"] != 0 else 0
            extTop = tuple(cnt_v[cnt_v[:, :, 1].argmin()][0])[1]
            extBot = tuple(cnt_v[cnt_v[:, :, 1].argmax()][0])[1]
            vertical_lines_info.append(((cX, cY, extTop, extBot), cnt_v))
        # Ordenamos las lineas verticales
        vertical_lines_info.sort(key=lambda x: x[0][1])  # Arriba -> abajo
        vertical_lines_info.sort(key=lambda x: x[0][0])  # Izq -> der
        # Guardamos las posiciones y de las lineas verticales
        vertical_lines_x_pos = []
        for vertical_line in vertical_lines_info:
            if len(vertical_lines_x_pos) == 0:
                vertical_lines_x_pos.append(vertical_line[0][0])
            else:
                if vertical_line[0][0] - vertical_lines_x_pos[-1] > 2:
                    vertical_lines_x_pos.append(vertical_line[0][0])
        # endregion

        # region Horizontal lines Y position extraction
        # Find external contours from the horizontal lines
        contours_h, hierarchy = cv.findContours(horizontal[y1:y2, x1:x2], cv.RETR_EXTERNAL,
                                                cv.CHAIN_APPROX_SIMPLE, offset=(0, 0))
        horizontal_lines_info = []
        for cnt_h in contours_h:
            # calculate x, y coordinate of center
            M = cv.moments(cnt_h)
            cX = int(M["m10"] / M["m00"]) if M["m00"] != 0 else 0
            cY = int(M["m01"] / M["m00"]) if M["m00"] != 0 else 0
            extLeft = tuple(cnt_h[cnt_h[:, :, 0].argmin()][0])[0]
            extRight = tuple(cnt_h[cnt_h[:, :, 0].argmax()][0])[0]
            horizontal_lines_info.append(((cX, cY, extLeft, extRight), cnt_h))
        # Ordenamos las lineas horizontales
        horizontal_lines_info.sort(key=lambda x: x[0][0])  # Izq -> der
        horizontal_lines_info.sort(key=lambda x: x[0][1])  # Arriba -> abajo
        # Guardamos las posiciones x de las lineas horizontales
        horizontal_lines_y_pos = []
        for horizontal_line in horizontal_lines_info:
            if len(horizontal_lines_y_pos) == 0:
                horizontal_lines_y_pos.append(horizontal_line[0][1])
            else:
                if horizontal_line[0][1] - horizontal_lines_y_pos[-1] > 2:
                    horizontal_lines_y_pos.append(horizontal_line[0][1])
        # endregion

        # region Busqueda celdas
        # Creamos mascara de la tabla
        mask_table = mask[y1:y2, x1:x2]
        # Creamos un frame negro alrededor de la mascara de la tabla para aunar en un solo contorno
        # los huecos exteriores
        mask_table_white_frame = np.zeros([mask_table.shape[0]+2, mask_table.shape[1]+2], dtype=np.uint8)
        mask_table_white_frame[1:-1, 1:-1] = cv.bitwise_or(mask_table, mask_table_white_frame[1:-1, 1:-1])
        if is_img_shown:
            cv.imshow("mask_table",
                      cv.resize(mask_table, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                interpolation=cv.INTER_AREA))
            cv.imshow("mask_table_white_frame",
                      cv.resize(mask_table_white_frame, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                interpolation=cv.INTER_AREA))
            cv.imshow("~mask_table_white_frame",
                      cv.resize(~mask_table_white_frame, None, fx=visualization_size_factor,
                                fy=visualization_size_factor,
                                interpolation=cv.INTER_AREA))
            cv.waitKey(0)
        # Buscamos los contornos de las celdas
        cells_contours, _ = cv.findContours(~mask_table_white_frame, cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
        cells = []
        for cell_cnt in reversed(cells_contours):
            # Calculo de las coordenadas de la celda
            xCell, yCell, wCell, hCell = cv.boundingRect(cell_cnt)
            xCell, yCell = xCell-1, yCell-1
            # Calculo de las coordenadas externas de la celda
            extLeft = tuple(cell_cnt[cell_cnt[:, :, 0].argmin()][0])[0] - 1
            extRight = tuple(cell_cnt[cell_cnt[:, :, 0].argmax()][0])[0] - 1
            extTop = tuple(cell_cnt[cell_cnt[:, :, 1].argmin()][0])[1] - 1
            extBot = tuple(cell_cnt[cell_cnt[:, :, 1].argmax()][0])[1] - 1
            # Si alguna de las coordenadas externas es limite con la imagen, no es una celda
            if extLeft <= 0 or extRight >= mask_table.shape[1]-1 or extTop <= 0 or extBot >= mask_table.shape[0]-1:
                continue
            # Buscamos las posiciones de las lineas verticales y horizontales que contienen a la celda
            pt1, pt2 = mod_basic.get_closest_lines(vertical_lines_x_pos, horizontal_lines_y_pos,
                                                   (extLeft, extTop), (extRight, extBot))
            cells.append({
                "content_coordinates": ((int(xCell / size_factor), int(yCell / size_factor)),
                                        (int((xCell+wCell) / size_factor), int((yCell+hCell) / size_factor))),
                "lines_coordinates": ((int(pt1[0] / size_factor), int(pt1[1] / size_factor)),
                                      (int(pt2[0] / size_factor), int(pt2[1] / size_factor)))
            })
            # region Cell visualization
            cv.rectangle(rsz[y1:y2, x1:x2], (xCell, yCell), (xCell + wCell, yCell + hCell), (0, 0, 255), 2)
            cv.circle(rsz[y1:y2, x1:x2], (int(xCell + wCell/2), int(yCell + hCell/2)), 5, (255, 255, 0), cv.FILLED)
            cv.drawContours(rsz[y1-1:y2+1, x1-1:x2+1], [cell_cnt], -1, (0, 255, 0), 1)
            cv.imshow("rsz",
                      cv.resize(rsz, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                interpolation=cv.INTER_AREA))
            cv.waitKey(0)
            # endregion
        # endregion

        # region Table data output
        table_data["vertical_lines_x_pos"] = [int(vertical_line_y_pos / size_factor) for vertical_line_y_pos in vertical_lines_x_pos]
        table_data["horizontal_lines_y_pos"] = [int(horizontal_line_x_pos / size_factor) for horizontal_line_x_pos in horizontal_lines_y_pos]
        table_data["table_coordinates"] = ((int(x1 / size_factor), int(y1 / size_factor)),
                                      (int(x2 / size_factor), int(y2 / size_factor)))
        for joint_cnt in joints_contours:
            # calculate x,y coordinate of center
            M = cv.moments(joint_cnt)
            if M["m00"] != 0:
                cX = int(M["m10"] / M["m00"])
                cY = int(M["m01"] / M["m00"])
            else:
                cX, cY = 0, 0
            table_data["joints_coordinates"].append((int(cX / size_factor), int(cY / size_factor)))
        table_data["cells"] = cells
        # endregion

        tables_data.append(table_data)

    # endregion

    # region Image without table lines
    # Get foreground
    mask_inv = cv.bitwise_not(mask)
    fg = cv.bitwise_or(src, src, mask=cv.resize(mask_inv, (src.shape[1], src.shape[0]), interpolation=cv.INTER_LINEAR))
    # get second masked value (background) mask must be inverted
    background = np.full(src.shape, 255, dtype=np.uint8)
    bk = cv.bitwise_or(background, background, mask=cv.resize(mask, (src.shape[1], src.shape[0]), interpolation=cv.INTER_LINEAR))
    # combine foreground+background
    src_no_lines = cv.bitwise_or(fg, bk)
    # endregion

    return tables_data, src_no_lines


def main():
    # region Load source image
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Skyway\t0-1.jpg"
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Engine Power Components\t129.pdf-0.jpg"
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\ESP\t71.pdf-0.jpg"
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Thyssenkrupp Campo Limpo\t15-1.jpg"
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Skyway txt\John Deere Iberica SPW Open Order Report.pdf-1.jpg"

    src = cv.imread(source_path)

    # Check if image is loaded fine
    if not src.data:
        print("Problem loading image!!!")
        return
    # endregion

    tables_data = table_parameter_selector(src)
    get_table(src, tables_data)


#main()
