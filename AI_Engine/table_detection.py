import cv2 as cv
from AI_Engine.lines import search_horiz_lines


def nothing(x):
    """Funcion nothing para trackbar"""
    pass


def table_parameter_selector(src):
    size_factor = 0.5  # Factor the image will be resized
    scaleX = 20
    scaleY = 20

    # Img for visualization
    src_to_show = src.copy()
    # Show source image
    # cv.imshow("src", cv.resize(src, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))

    # Inicializamos trackbar para modificar parametros:
    cv.namedWindow("Parameters selector")
    cv.createTrackbar("size_factor", "Parameters selector", int(size_factor * 10), 10, nothing)
    cv.createTrackbar("scaleX", "Parameters selector", scaleX, 50, nothing)
    cv.createTrackbar("scaleY", "Parameters selector", scaleY, 50, nothing)

    stop = False
    while(not stop):
        # Creamos trackbar para modificar parametros:
        size_factor = cv.getTrackbarPos('size_factor', 'Parameters selector')
        if size_factor == 0:
            size_factor = 1
        size_factor = size_factor / 10
        scaleX = cv.getTrackbarPos('scaleX', 'Parameters selector')
        if scaleX == 0:
            scaleX = 1
        scaleY = cv.getTrackbarPos('scaleY', 'Parameters selector')
        if scaleY == 0:
            scaleY = 1
        # Detectamos las tablas
        tables_data = table_detector(src, size_factor, scaleX, scaleY)
        # Dibujamos las detecciones y las mostramos
        src_to_show = src.copy()
        for table_data in tables_data:
            cv.rectangle(src_to_show, table_data["table_points"][0], table_data["table_points"][1], (0, 255, 0), 3)
            for joint_points in table_data["joints_point"]:
                cv.circle(src_to_show, (joint_points[0], joint_points[1]), 7, (255, 0, 0), -1)
        cv.imshow("src_to_show", cv.resize(src_to_show, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        k = cv.waitKey(1) & 0xFF
        if k == 27:  # esc
            stop = True
        # elif k == 13:  # enter
        #     size_factor = float(input("Introduce size_factor: "))
        #     scale = int(input("Introduce scale: "))

def table_detector(src, size_factor: float = None, scaleX: int = None, scaleY: int = None):
    # Parameters
    if size_factor is None:
        size_factor = 0.5  # Factor the image will be resized
    if scaleX is None:
        scaleX = 20  # Play with this variable in order to increase / decrease the amount of lines to be detected
    if scaleY is None:
        scaleY = 20  # Play with this variable in order to increase / decrease the amount of lines to be detected

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
    cv.imshow("gray", cv.resize(gray, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    cv.imshow("not gray", cv.resize(~gray, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))

    # Apply adaptiveThreshold at the bitwise_not of gray, notice the ~ symbol
    bw = cv.adaptiveThreshold(~gray, 255, cv.ADAPTIVE_THRESH_MEAN_C, cv.THRESH_BINARY, 15, -2)
    # bw = cv.adaptiveThreshold(~gray, 255, cv.ADAPTIVE_THRESH_GAUSSIAN_C, cv.THRESH_BINARY, 15, -2)
    # endregion

    # region Detect horizontal and vertical lines
    # Create the images that will use to extract the horizontal and vertical lines
    horizontal = bw.copy()
    vertical = bw.copy()

    # Specify size on horizontal axis
    horizontalsize = int(horizontal.shape[1] / scaleX)

    # Create structure element for extracting horizontal lines through morphology operations
    horizontalStructure = cv.getStructuringElement(cv.MORPH_RECT, (horizontalsize, 1))

    # Apply morphology operations
    horizontal = cv.dilate(horizontal, cv.getStructuringElement(cv.MORPH_RECT, (1, 2)), (-1, -1))
    cv.imshow("horizontal0", cv.resize(horizontal, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    horizontal = cv.erode(horizontal, horizontalStructure, (-1, -1))
    cv.imshow("horizontal1", cv.resize(horizontal, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    horizontal = cv.dilate(horizontal, horizontalStructure, (-1, -1))

    # horizontal = cv.dilate(horizontal, horizontalStructure, (-1, -1)) # expand horizontal lines

    # Show extracted horizontal lines
    cv.imshow("horizontal", cv.resize(horizontal, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))

    #search_horiz_lines(src, 3, src.shape[1] - 50)

    # Specify size on vertical axis
    verticalsize = int(vertical.shape[0] / scaleY)

    # Create structure element for extracting vertical lines through morphology operations
    verticalStructure = cv.getStructuringElement(cv.MORPH_RECT, (1, verticalsize))

    # Apply morphology operations
    vertical = cv.dilate(vertical, cv.getStructuringElement(cv.MORPH_RECT, (2, 1)), (-1, -1))
    cv.imshow("vertical0", cv.resize(vertical, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    vertical = cv.erode(vertical, verticalStructure, (-1, -1))
    cv.imshow("vertical1", cv.resize(vertical, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    vertical = cv.dilate(vertical, verticalStructure, (-1, -1))
    cv.imshow("vertical2", cv.resize(vertical, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    # vertical = cv.dilate(vertical, verticalStructure, (-1, -1)) # expand vertical lines

    # Show extracted vertical lines
    cv.imshow("vertical", cv.resize(vertical, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    # endregion

    # region Table mask
    # create a mask which includes the tables
    mask = horizontal + vertical
    cv.imshow("mask", cv.resize(mask, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    # endregion

    # region Joints mask
    # find the joints between the lines of the tables, we will use this information in order to descriminate tables
    # from pictures (tables will contain more than 4 joints while a picture only 4 (i.e. at the corners))
    joints = cv.bitwise_and(horizontal, vertical)
    circularStructure = cv.getStructuringElement(cv.MORPH_ELLIPSE, (5, 5))
    joints = cv.dilate(joints, circularStructure, (-1, -1))
    cv.imshow("joints", cv.resize(joints, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))

    # Find external contours from the mask, which most probably will belong to tables or to images
    contours, hierarchy = cv.findContours(mask, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE, offset=(0, 0))
    # endregion

    # region Detect tables
    tables_data = []
    for cnt in contours:
        table_data = {
            "table_points": [],
            "joints_point": []
        }
        # region Contour filtering
        # find the area of each contour
        area = cv.contourArea(cnt)

        # filter individual lines of blobs that might exist and they do not represent a table
        if area < 100: # value is randomly chosen, you will need to find that by yourself with trial and error procedure
            continue

        # cnt_len = cv.arcLength(cnt, True)
        contours_poly = cv.approxPolyDP(cnt, 3, True)
        boundRect = cv.boundingRect(contours_poly)
        x1, y1, w, h = cv.boundingRect(contours_poly)
        if w < 2 or h < 2:
            continue

        # find the number of joints that each table has
        roi = joints[y1:y1+h, x1:x1+w]
        joints_contours, _ = cv.findContours(roi, cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
        # if the number is not more than 5 then most likely it not a table
        if len(joints_contours) <= 4:
            continue
        # endregion

        # cv.imshow("roi", cv.resize(roi, None, fx=visualization_size_factor, fy=visualization_size_factor,
        #                            interpolation=cv.INTER_AREA))
        # if len(rsz.shape) == 3:
        #     rois.append(rsz[y1:y1 + h, x1:x1 + w, :].copy())
        # else:
        #     rois.append(rsz[y1:y1+h, x1:x1+w].copy())

        cv.drawContours(rsz, [cnt], -1, (0, 0, 255), 5)
        cv.rectangle(rsz, (x1, y1), (x1 + w, y1 + h), (0, 255, 0), 1)
        table_data["table_points"] = [(int(x1/size_factor), int(y1/size_factor)), (int((x1 + w)/size_factor), int((y1 + h)/size_factor))]
        for joint_cnt in joints_contours:
            # calculate moments for each contour
            M = cv.moments(joint_cnt)

            # calculate x,y coordinate of center
            if M["m00"] != 0:
                cX = int(M["m10"] / M["m00"])
                cY = int(M["m01"] / M["m00"])
            else:
                cX, cY = 0, 0
            table_data["joints_point"].append((int((x1+cX)/size_factor), int((y1+cY)/size_factor)))
            #cv.circle(rsz, (x1+cX, y1+cY), 5, (255, 0, 0), -1)
        tables_data.append(table_data)

    # endregion

    # region Visualization
    cv.imshow("rsz", cv.resize(rsz, None, fx=visualization_size_factor, fy=visualization_size_factor, interpolation=cv.INTER_AREA))
    # endregion

    return tables_data


def main():

    # region Load source image
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\JD SARAN\t54-1.jpg"
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Skyway\t0-1.jpg"
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\ESP\t14-1.jpg"
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Skyway\t0-1.jpg"
    source_path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Skyway txt\John Deere Iberica SPW Open Order Report.pdf-1.jpg"

    src = cv.imread(source_path)

    # Check if image is loaded fine
    if not src.data:
        print("Problem loading image!!!")
        return
    # endregion

    table_parameter_selector(src)


main()
