import cv2 as cv
import numpy as np
import math


def search_horiz_lines(image, method, minDist):
    """
    output: [(pt1, pt2), (pt1, pt2), ...]
    output: [((x1, y1), (x2, y2)), ...]
    """
    output = []
    fx_resize = 1
    fy_resize = 1

    image_to_show = image.copy()
    if len(image) == 3:
        gray = cv.cvtColor(image, cv.COLOR_BGR2GRAY)
    else:
        gray = image.copy()
    if method == 1:
        edge = cv.Canny(gray, 100, 170, apertureSize=3)
        lines = cv.HoughLines(edge, 1, np.pi / 180, 340)
        for line in lines:
            rho, theta = line[0]
            a = np.cos(theta)
            b = np.sin(theta)
            x0 = a * rho
            y0 = b * rho
            # x1 stores the rounded off value of (r* cosΘ - 1000 * sinΘ)
            x1 = int(x0 + 1000 * (-b))
            # y1 stores the rounded off value of (r * sinΘ + 1000 * cosΘ)
            y1 = int(y0 + 1000 * (a))
            # x2 stores the rounded off value of (r * cosΘ + 1000 * sinΘ)
            x2 = int(x0 - 1000 * (-b))
            # y2 stores the rounded off value of (r * sinΘ - 1000 * cosΘ)
            y2 = int(y0 - 1000 * (a))

            cv.line(image_to_show, (x1, y1), (x2, y2), (0, 0, 255), 2)
        # cv.imshow("gray", cv.resize(gray, None, fx=0.5, fy=0.5, interpolation=cv.INTER_AREA))
        cv.imshow("edge", cv.resize(edge, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
    elif method == 2:
        image_thr = cv.adaptiveThreshold(gray, 255, cv.THRESH_BINARY_INV, cv.ADAPTIVE_THRESH_GAUSSIAN_C, 51, 0)
        ret, image_thr = cv.threshold(gray, 0, 255, cv.THRESH_OTSU | cv.THRESH_BINARY_INV)
        dst_img = cv.Canny(image_thr, 50, 200, None, 3)
        # lines = cv.HoughLines(dst_img, 1, np.pi / 180, 150, None, 0, 0)
        #
        # for i in range(0, len(lines)):
        #             rho_l = lines[i][0][0]
        #             theta_l = lines[i][0][1]
        #             a_l = np.cos(theta_l)
        #             b_l = np.sin(theta_l)
        #             x0_l = a_l * rho_l
        #             y0_l = b_l * rho_l
        #             pt1_l = (int(x0_l + 1000*(-b_l)), int(y0_l + 1000*(a_l)))
        #             pt2_l = (int(x0_l - 1000*(-b_l)), int(y0_l - 1000*(a_l)))
        #             dist = math.dist(pt1_l, pt2_l)
        #             cv.line(image_to_show, pt1_l, pt2_l, (0,0,255), 3, cv.LINE_AA)
        #             print(str(i) + ":")
        #             print("  - rho_l:" + str(rho_l))
        #             print("  - theta_l:" + str(theta_l))
        #             print("  - x0_l:" + str(x0_l))
        #             print("  - y0_l:" + str(y0_l))
        #             print("  - pt1_l:" + str(pt1_l))
        #             print("  - pt2_l:" + str(pt2_l))
        #             print("  - dist:" + str(dist))
        #             cv.imshow("image", cv.resize(image_to_show, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
        #             cv.waitKey(0)
        linesP = cv.HoughLinesP(dst_img, 1, np.pi / 180, 50, None, 50, 10)

        for i in range(0, len(linesP)):
            lin = linesP[i][0]
            cv.line(image_to_show, (lin[0], lin[1]), (lin[2], lin[3]), (0, 0, 255), 3, cv.LINE_AA)
            cv.imshow("image_to_show",
                      cv.resize(image_to_show, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
            cv.waitKey(0)

        cv.imshow("gray", cv.resize(gray, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
        cv.imshow("image_thr", cv.resize(image_thr, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
        cv.imshow("dst_img", cv.resize(dst_img, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
    elif method == 3:
        edges = cv.Canny(gray, 50, 150, apertureSize=3)
        minLineLength = 100
        lines = cv.HoughLinesP(image=edges, rho=1, theta=np.pi / 180, threshold=100, lines=np.array([]),
                               minLineLength=minLineLength, maxLineGap=80)
        a, b, c = lines.shape
        for i in range(a):
            pt1 = (lines[i][0][0], lines[i][0][1])
            pt2 = (lines[i][0][2], lines[i][0][3])
            # Difference in x coordinates
            dx = pt2[0] - pt1[0]
            # Difference in y coordinates
            dy = pt2[1] - pt1[1]
            # Distance
            distance = math.dist(pt1, pt2)
            # Angle between p1 and p2 in radians
            theta = -math.atan2(dy, dx)
            angle = math.degrees(theta)
            print(str(i) + ":")
            print("  - pt1:" + str(pt1))
            print("  - pt2:" + str(pt2))
            print("  - dist:" + str(distance))
            print("  - theta:" + str(theta) + " rad")
            print("  - theta:" + str(angle) + "°")
            if distance >= minDist:
                if abs(angle) < 1:
                    print("OK")
                    output.append((pt1, pt2))
                else:
                    print("NO OK")
        # cv.imshow("gray", cv.resize(gray, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
        # cv.imshow("edges", cv.resize(edges, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
    elif method == 4:
        gray = cv.cvtColor(image, cv.COLOR_BGR2GRAY)
        blur = cv.GaussianBlur(gray, (7, 7), 0)
        ret, image_thr = cv.threshold(blur, 0, 255, cv.THRESH_OTSU | cv.THRESH_BINARY_INV)
    # cv.imshow("image_to_show", cv.resize(image_to_show, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
    # cv.waitKey(0)
    # cv.destroyAllWindows()
    # Ordeno las listas de arriba a abajo usando el primer punto de cada linea
    output = sorted(output, key=lambda line: line[0][1])
    # Si la separacion vertical entre dos lineas es menor de 5 pixeles, descarto la primera linea
    output_aux = []
    for i in range(len(output)):
        if i >= len(output)-1 or output[i+1][0][1] - output[i][0][1] > 5:
            output_aux.append(output[i])
    output = output_aux
    for line in output_aux:
        cv.line(image_to_show, line[0], line[1], (0, 0, 255), 3,
                cv.LINE_AA)
        cv.imshow("lines in image",
                  cv.resize(image_to_show, None, fx=fx_resize, fy=fy_resize, interpolation=cv.INTER_AREA))
        cv.waitKey(0)
    cv.destroyWindow("lines in image")

    return output

# image = cv.imread(r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & "
#                   r"Co\Desktop\Proyectos\Pedidos-Tier-2\Proveedores\orders_history\ESP "
#                   r"INTERNATIONAL_1223728_R116529\10-02-2022_09h-13m-1.jpg")
# method = 3
# search_lines(image, method)
