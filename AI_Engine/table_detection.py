import cv2 as cv
import numpy as np
from AI_Engine.lines import search_horiz_lines


def nothing(x):
    """Funcion nothing para trackbar"""
    pass


def table_parameter_selector(src):
    size_factor = 0.5  # Factor the image will be resized
    scale_x = 20
    scale_y = 20

    # Img for visualization
    src_to_show = src.copy()
    # Show source image
    # cv.imshow("src", cv.resize(src, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))

    # Inicializamos trackbar para modificar parametros:
    cv.namedWindow("Parameters selector")
    cv.createTrackbar("size_factor", "Parameters selector", int(size_factor * 10), 20, nothing)
    cv.createTrackbar("scaleX", "Parameters selector", scale_x, 50, nothing)
    cv.createTrackbar("scaleY", "Parameters selector", scale_y, 50, nothing)

    stop = False
    while (not stop):
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
        tables_data, src_no_lines = table_detector(src, size_factor, scale_x, scale_y)
        # Dibujamos las detecciones y las mostramos
        src_to_show = src.copy()
        for table_data in tables_data:
            cv.rectangle(src_to_show, table_data["table_points"][0], table_data["table_points"][1], (0, 255, 0), 3)
            for joint_points in table_data["joints_points"]:
                cv.circle(src_to_show, (joint_points[0], joint_points[1]), 7, (255, 0, 0), -1)
        cv.imshow("src_to_show", cv.resize(src_to_show, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        cv.imshow("src_no_lines", cv.resize(src_no_lines, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        k = cv.waitKey(10) & 0xFF
        if k == 27:  # esc
            stop = True
        # elif k == 13:  # enter
        #     size_factor = float(input("Introduce size_factor: "))
        #     scale = int(input("Introduce scale: "))
    return tables_data


def get_table(src, tables_data):
    if len(src.shape) == 3:
        gray = cv.cvtColor(src, cv.COLOR_BGR2GRAY)
    else:
        gray = src
    for table_data in tables_data:
        table_roi = gray[table_data["table_points"][0][1]:table_data["table_points"][1][1],
                    table_data["table_points"][0][0]:table_data["table_points"][1][0]]
        cv.imshow("table_roi", cv.resize(table_roi, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        cv.waitKey(0)
    return


def table_detector(src, size_factor: float = None, scale_x: int = None, scale_y: int = None):
    """
    A partir de una imagen saco los puntos de las tablas detectadas
    Returns:
        tables_data = [
            {
                "table_points": [pt1, pt2],
                "joints_points": [(pt1, pt2), (pt1, pt2), ...]
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

    # Show gray image
    cv.imshow("gray", cv.resize(gray, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                interpolation=cv.INTER_AREA))
    cv.imshow("not gray", cv.resize(~gray, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                    interpolation=cv.INTER_AREA))

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

    # Show extracted horizontal lines
    cv.imshow("horizontal", cv.resize(horizontal, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                      interpolation=cv.INTER_AREA))

    # search_horiz_lines(src, 3, src.shape[1] - 50)

    # Specify size on vertical axis
    verticalsize = int(vertical.shape[0] / scale_y)

    # Create structure element for extracting vertical lines through morphology operations
    verticalStructure = cv.getStructuringElement(cv.MORPH_RECT, (1, verticalsize))

    # Apply morphology operations
    vertical = cv.dilate(vertical, cv.getStructuringElement(cv.MORPH_RECT, (2, 1)), (-1, -1))
    vertical = cv.erode(vertical, verticalStructure, (-1, -1))
    vertical = cv.dilate(vertical, verticalStructure, (-1, -1))
    # vertical = cv.dilate(vertical, verticalStructure, (-1, -1)) # expand vertical lines

    # Show extracted vertical lines
    cv.imshow("vertical", cv.resize(vertical, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                    interpolation=cv.INTER_AREA))

    # endregion

    # region Table mask
    # create a mask which includes the tables
    mask = horizontal + vertical
    cv.imshow("mask", cv.resize(mask, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                interpolation=cv.INTER_AREA))
    # endregion

    # region Joints mask
    # find the joints between the lines of the tables, we will use this information in order to descriminate tables
    # from pictures (tables will contain more than 4 joints while a picture only 4 (i.e. at the corners))
    joints = cv.bitwise_and(horizontal, vertical)
    circularStructure = cv.getStructuringElement(cv.MORPH_ELLIPSE, (5, 5))
    joints = cv.dilate(joints, circularStructure, (-1, -1))
    cv.imshow("joints", cv.resize(joints, None, fx=visualization_size_factor, fy=visualization_size_factor,
                                  interpolation=cv.INTER_AREA))

    # Find external contours from the mask, which most probably will belong to tables or to images
    contours, hierarchy = cv.findContours(mask, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE, offset=(0, 0))
    # endregion

    # region Detect tables
    tables_data = []
    for cnt in contours:
        table_data = {
            "table_points": [],
            "joints_points": [],
            "vertical_lines_x_pos": [],
            "horizontal_lines_y_pos": [],
        }
        # region Contour filtering
        # find the area of each contour
        area = cv.contourArea(cnt)

        # filter individual lines of blobs that might exist and they do not represent a table
        if area < 50/size_factor:  # value is randomly chosen, you will need to find that by yourself with trial and error procedure
            continue

        # cnt_len = cv.arcLength(cnt, True)
        contours_poly = cv.approxPolyDP(cnt, 3, True)
        boundRect = cv.boundingRect(contours_poly)
        x1, y1, w, h = cv.boundingRect(contours_poly)
        # Agrando el ROI para coger lineas en el borde
        x1, y1, w, h = x1-2, y1-2, w+2, h+2
        if w < 2 or h < 2:
            continue

        # find the number of joints that each table has
        roi = joints[y1:y1 + h, x1:x1 + w]
        joints_contours, _ = cv.findContours(roi, cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
        # if the number is not more than 5 then most likely it not a table
        if len(joints_contours) < 4:
            continue
        # endregion

        # region Vertical lines X position extraction
        # Find external contours from the vertical lines
        contours_v, hierarchy = cv.findContours(vertical[y1:y1+h, x1:x1+w], cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE, offset=(0, 0))
        vertical_lines_x_pos = []
        for cnt_v in contours_v:
            # calculate moments for each contour
            M = cv.moments(cnt_v)
            # calculate x coordinate of center
            cX = int(M["m10"] / M["m00"]) if M["m00"] != 0 else 0
            vertical_lines_x_pos.append((cX, cnt_v))
        # Ordenamos las lineas verticales
        vertical_lines_x_pos.sort(key=lambda x: x[0])
        for vertical_line in vertical_lines_x_pos:
            if len(table_data["vertical_lines_x_pos"]) == 0:
                table_data["vertical_lines_x_pos"].append(vertical_line)
            else:
                if vertical_line[0] - table_data["vertical_lines_x_pos"][-1][0] > 2:
                    table_data["vertical_lines_x_pos"].append(vertical_line)
        # endregion

        # region Horizontal lines Y position extraction
        # Find external contours from the vertical lines
        contours_h, hierarchy = cv.findContours(horizontal[y1:y1 + h, x1:x1 + w], cv.RETR_EXTERNAL,
                                                cv.CHAIN_APPROX_SIMPLE, offset=(0, 0))
        horizontal_lines_y_pos = []
        for cnt_h in contours_h:
            # calculate moments for each contour
            M = cv.moments(cnt_h)
            # calculate x coordinate of center
            cY = int(M["m01"] / M["m00"]) if M["m00"] != 0 else 0
            horizontal_lines_y_pos.append((cY, cnt_h))
        # Ordenamos las lineas verticales
        horizontal_lines_y_pos.sort(key=lambda x: x[0])
        for horizontal_line in horizontal_lines_y_pos:
            if len(table_data["horizontal_lines_y_pos"]) == 0:
                table_data["horizontal_lines_y_pos"].append(horizontal_line)
            else:
                if horizontal_line[0] - table_data["horizontal_lines_y_pos"][-1][0] > 2:
                    table_data["horizontal_lines_y_pos"].append(horizontal_line)
        # endregion

        # cv.imshow("vertical_roi", cv.resize(vertical[y1:y1+h, x1:x1+w], None, fx=visualization_size_factor, fy=visualization_size_factor,
        #                             interpolation=cv.INTER_AREA))
        # cv.imshow("horizontal_roi", cv.resize(horizontal[y1:y1 + h, x1:x1 + w], None, fx=visualization_size_factor,
        #                                 fy=visualization_size_factor,
        #                                 interpolation=cv.INTER_AREA))

        # Recorro las lineas verticales y horizontales para encontrar las celdas
        cells = []
        cells_img = np.zeros((h, w), np.uint8)
        # Busco si hay joint entre las lineas
        for h_i_1 in range(len(horizontal_lines_y_pos)):
            pos_y_1, cnt_h_1 = horizontal_lines_y_pos[h_i_1]
            horizontal_1 = np.zeros((h, w), np.uint8)
            cv.drawContours(horizontal_1, [cnt_h_1], -1, (255, 255, 255), thickness=cv.FILLED)
            cv.imshow("horizontal_1", cv.resize(horizontal_1, None, fx=visualization_size_factor,
                                                fy=visualization_size_factor,
                                                interpolation=cv.INTER_AREA))
            for v_i_1 in range(len(vertical_lines_x_pos)):
                pos_x_1, cnt_v_1 = vertical_lines_x_pos[v_i_1]
                vertical_1 = np.zeros((h, w), np.uint8)
                cv.drawContours(vertical_1, [cnt_v_1], -1, (255, 255, 255), thickness=cv.FILLED)
                cv.imshow("vertical_1", cv.resize(vertical_1, None, fx=visualization_size_factor,
                                                  fy=visualization_size_factor,
                                                  interpolation=cv.INTER_AREA))

                joint_1_1 = cv.bitwise_and(horizontal_1, vertical_1)
                joint_1_1 = cv.dilate(joint_1_1, circularStructure, (-1, -1))
                cv.imshow("joint_1_1", cv.resize(joint_1_1, None, fx=visualization_size_factor,
                                                 fy=visualization_size_factor,
                                                 interpolation=cv.INTER_AREA))
                joint_1_1_contour, _ = cv.findContours(joint_1_1, cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
                # Si no hay joint, salto al siguiente
                if len(joint_1_1_contour) < 1:
                    continue
                print("joint1_1 found")
                v_i_2, h_i_2 = v_i_1 + 1, h_i_1 + 1
                cv.waitKey(0)
                # Busco el joint_2_2
                cell_found = False
                while h_i_2 < len(horizontal_lines_y_pos) and v_i_2 < len(vertical_lines_x_pos) and not cell_found:
                    # Busco el joint_1_2
                    pos_x_2, cnt_v_2 = vertical_lines_x_pos[v_i_2]
                    vertical_2 = np.zeros((h, w), np.uint8)
                    cv.drawContours(vertical_2, [cnt_v_2], -1, (255, 255, 255), thickness=cv.FILLED)
                    joint_1_2 = cv.bitwise_and(horizontal_1, vertical_2)
                    joint_1_2 = cv.dilate(joint_1_2, circularStructure, (-1, -1))
                    joint_1_2_contour, _ = cv.findContours(joint_1_2, cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
                    cv.imshow("vertical_2", cv.resize(vertical_2, None, fx=visualization_size_factor,
                                                      fy=visualization_size_factor,
                                                      interpolation=cv.INTER_AREA))
                    cv.imshow("joint_1_2", cv.resize(joint_1_2, None, fx=visualization_size_factor,
                                                     fy=visualization_size_factor,
                                                     interpolation=cv.INTER_AREA))
                    cv.waitKey(10)
                    # Busco el joint_2_1
                    if len(joint_1_2_contour) > 0:
                        print("joint_1_2 found")
                        pos_y_2, cnt_h_2 = horizontal_lines_y_pos[h_i_2]
                        horizontal_2 = np.zeros((h, w), np.uint8)
                        cv.drawContours(horizontal_2, [cnt_h_2], -1, (255, 255, 255), thickness=cv.FILLED)
                        joint_2_1 = cv.bitwise_and(horizontal_2, vertical_1)
                        joint_2_1 = cv.dilate(joint_2_1, circularStructure, (-1, -1))
                        joint_2_1_contour, _ = cv.findContours(joint_2_1, cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
                        cv.imshow("horizontal_2", cv.resize(horizontal_2, None, fx=visualization_size_factor,
                                                            fy=visualization_size_factor,
                                                            interpolation=cv.INTER_AREA))
                        cv.imshow("joint_2_1", cv.resize(joint_2_1, None, fx=visualization_size_factor,
                                                         fy=visualization_size_factor,
                                                         interpolation=cv.INTER_AREA))
                        cv.waitKey(10)
                        # Busco el joint_2_2
                        if len(joint_2_1_contour) > 0:
                            print("joint_2_2 found")
                            joint_2_2 = cv.bitwise_and(horizontal_2, vertical_2)
                            joint_2_2 = cv.dilate(joint_2_2, circularStructure, (-1, -1))
                            joint_2_2_contour, _ = cv.findContours(joint_2_2, cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
                            cv.imshow("joint_2_2", cv.resize(joint_2_2, None, fx=visualization_size_factor,
                                                             fy=visualization_size_factor,
                                                             interpolation=cv.INTER_AREA))
                            # Busco el joint_2_2
                            if len(joint_2_1_contour) > 0:
                                print("joint_2_2 found")
                                cell_found = True
                                cells.append(((pos_x_1, pos_y_1), (pos_x_2, pos_y_2)))
                                cv.rectangle(cells_img, (pos_x_1, pos_y_1), (pos_x_2, pos_y_2), (255, 255, 255), 1)
                                cv.imshow("cells_img", cv.resize(cells_img, None, fx=visualization_size_factor,
                                                                    fy=visualization_size_factor,
                                                                    interpolation=cv.INTER_AREA))
                                cv.waitKey(10)
                    # Me desplazo a la siguiente linea vertical
                    v_i_2 += 1
                    if v_i_2 >= len(vertical_lines_x_pos):
                        v_i_2 = v_i_1 + 1
                        # Bajo a la siguiente linea horizontal
                        h_i_2 += 1

        cv.drawContours(rsz, [cnt], -1, (0, 0, 255), 5)
        cv.rectangle(rsz, (x1, y1), (x1 + w, y1 + h), (0, 255, 0), 1)
        table_data["table_points"] = [(int(x1 / size_factor), int(y1 / size_factor)),
                                      (int((x1 + w) / size_factor), int((y1 + h) / size_factor))]
        for joint_cnt in joints_contours:
            # calculate moments for each contour
            M = cv.moments(joint_cnt)

            # calculate x,y coordinate of center
            if M["m00"] != 0:
                cX = int(M["m10"] / M["m00"])
                cY = int(M["m01"] / M["m00"])
            else:
                cX, cY = 0, 0
            table_data["joints_points"].append((int((x1 + cX) / size_factor), int((y1 + cY) / size_factor)))
            # cv.circle(rsz, (x1+cX, y1+cY), 5, (255, 0, 0), -1)
        tables_data.append(table_data)

    # endregion

    # region Visualization
    cv.imshow("rsz", cv.resize(rsz, None, fx=visualization_size_factor, fy=visualization_size_factor,
                               interpolation=cv.INTER_AREA))
    # endregion

    # white_bg = np.zeros(src.shape, dtype=np.uint8)
    #white_bg.fill(255)# get first masked value (foreground)
    mask = cv.bitwise_not(mask)
    fg = cv.bitwise_or(src, src, mask=cv.resize(mask, (src.shape[1], src.shape[0]), interpolation=cv.INTER_LINEAR))

    # get second masked value (background) mask must be inverted
    mask = cv.bitwise_not(mask)
    background = np.full(src.shape, 255, dtype=np.uint8)
    bk = cv.bitwise_or(background, background, mask=cv.resize(mask, (src.shape[1], src.shape[0]), interpolation=cv.INTER_LINEAR))

    # combine foreground+background
    src_no_lines = cv.bitwise_or(fg, bk)

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


main()
