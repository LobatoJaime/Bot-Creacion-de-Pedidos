# import necessary packages
import numpy as np
import cv2
from AI_Engine.sample import modulo_basic_functions as modg_func
import os


# processing letter by letter boxing
def process_letter(gray, output):
    boxes = []
    # clean the image using otsu method with the inversed binarized image
    ret, thresh = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)
    # assign the kernel size
    kernel = np.ones((2, 1), np.uint8)  # vertical
    # use closing morph operation then erode to narrow the image
    temp_img = cv2.morphologyEx(thresh, cv2.MORPH_CLOSE, kernel, iterations=3)
    # temp_img = cv2.erode(thresh,kernel,iterations=2)
    letter_img = cv2.erode(temp_img, kernel, iterations=1)

    # find contours
    (contours, _) = cv2.findContours(letter_img.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    for cnt in contours:
        box = cv2.boundingRect(cnt)
        x1, y1, x2, y2 = modg_func.aumentar_box(box, gray.shape, (1, 5, 0, 0))
        boxes.append((x1, y1, x2, y2))
        if output is not None:
            cv2.rectangle(output, (x1, y1), (x2, y2), (0, 255, 0), 1)

    return boxes, output


# processing letter by letter boxing
def process_word(gray, output):
    boxes = []
    # clean the image using otsu method with the inversed binarized image
    ret, thresh = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)
    # assign 2 rectangle kernel size 1 vertical and the other will be horizontal
    kernel = np.ones((2, 1), np.uint8)
    kernel2 = np.ones((1, 4), np.uint8)
    # use closing morph operation but fewer iterations than the letter then erode to narrow the image
    temp_img = cv2.morphologyEx(thresh, cv2.MORPH_CLOSE, kernel, iterations=2)
    # temp_img = cv2.erode(thresh,kernel,iterations=2)
    word_img = cv2.dilate(temp_img, kernel2, iterations=1)

    (contours, _) = cv2.findContours(word_img.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    for cnt in contours:
        box = cv2.boundingRect(cnt)
        x1, y1, x2, y2 = modg_func.aumentar_box(box, gray.shape, (1, 5, 0, 0))
        boxes.append((x1, y1, x2, y2))
        if output is not None:
            cv2.rectangle(output, (x1, y1), (x2, y2), (0, 255, 0), 1)

    return boxes, output


# processing line by line boxing
def process_line(gray, output, join_horizontal_boxes=False):
    boxes = []
    # clean the image using otsu method with the inversed binarized image
    ret, thresh = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)
    # assign a rectangle kernel size	1 vertical and the other will be horizontal
    kernel = np.ones((1, 5), np.uint8)
    kernel2 = np.ones((2, 4), np.uint8)
    # use closing morph operation but fewer iterations than the letter then erode to narrow the image
    temp_img = cv2.morphologyEx(thresh, cv2.MORPH_CLOSE, kernel2, iterations=2)
    # temp_img = cv2.erode(thresh,kernel,iterations=2)
    line_img = cv2.dilate(temp_img, kernel, iterations=5)

    (contours, _) = cv2.findContours(line_img.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    for cnt in reversed(contours):
        box = cv2.boundingRect(cnt)
        x1, y1, x2, y2 = modg_func.aumentar_box(box, gray.shape, (3, 7, 2, 2))
        boxes.append((x1, y1, x2, y2))
    boxes = box_sort(boxes)
    # Si se indica, junto las lineas horizontales (tomo punto abajo izq como referencia)
    if join_horizontal_boxes:
        i = 0
        while i < len(boxes) - 1:
            if abs(boxes[i][3] - boxes[i + 1][3]) < 5:
                boxes[i] = (
                    min(boxes[i][0], boxes[i + 1][0]),
                    min(boxes[i][1], boxes[i + 1][1]),
                    max(boxes[i][2], boxes[i + 1][2]),
                    max(boxes[i][3], boxes[i + 1][3])
                )
                boxes.pop(i + 1)
            else:
                i += 1
    if output is not None:
        for box in boxes:
            x1, y1, x2, y2 = box
            cv2.rectangle(output, (x1, y1), (x2, y2), (0, 255, 0), 1)

    return boxes, output


# processing par by par boxing
def process_par(gray, output):
    boxes = []
    # clean the image using otsu method with the inversed binarized image
    ret, thresh = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)
    # assign a rectangle kernel size
    kernel = np.ones((5, 5), 'uint8')
    par_img = cv2.dilate(thresh, kernel, iterations=3)

    (contours, _) = cv2.findContours(par_img.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    for cnt in contours:
        box = cv2.boundingRect(cnt)
        x1, y1, x2, y2 = modg_func.aumentar_box(box, gray.shape, (1, 5, 0, 0))
        boxes.append((x1, y1, x2, y2))
        if output is not None:
            cv2.rectangle(output, (x1, y1), (x2, y2), (0, 255, 0), 1)

    return boxes, output


# processing margin with paragraph boxing
def process_margin(gray, output):
    boxes = []
    # clean the image using otsu method with the inversed binarized image
    ret, thresh = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)
    # assign a rectangle kernel size
    kernel = np.ones((20, 5), 'uint8')
    margin_img = cv2.dilate(thresh, kernel, iterations=5)

    (contours, _) = cv2.findContours(margin_img.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    for cnt in contours:
        box = cv2.boundingRect(cnt)
        x1, y1, x2, y2 = modg_func.aumentar_box(box, gray.shape, (1, 5, 0, 0))
        boxes.append((x1, y1, x2, y2))
        if output is not None:
            cv2.rectangle(output, (x1, y1), (x2, y2), (0, 255, 0), 1)

    return boxes, output


# ordering the boxes from top to bottom and left to right
def box_sort(boxes):
    # Sort left to right
    boxes.sort(key=lambda x: x[0])
    # Sort top to bottom
    swapped = True  # We set swapped to True so the loop looks runs at least once
    while swapped:
        swapped = False
        for i in range(len(boxes) - 1):
            # We not swap if the center or the bottom of next box is between the top and bottom of actual box
            # if not ((boxes[i][3] > (boxes[i + 1][3] + boxes[i + 1][1])/2 > boxes[i][1]) or
            #         (boxes[i][3] > boxes[i + 1][3] > boxes[i][1])):
            if boxes[i][3] > boxes[i + 1][3] and abs(boxes[i][3] - boxes[i + 1][3]) > 5:
                # Swap the elements
                boxes[i], boxes[i + 1] = boxes[i + 1], boxes[i]
                # Set the flag to True so we'll loop again
                swapped = True
    return boxes


def main():
    # loading images
    path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Engine " \
           r"Power Components\t42.pdf"
    path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\WorldClass " \
           r"Industries\t2.pdf"
    path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & " \
           r"Co\Desktop\Proyectos\Pedidos-Tier-2\Proveedores\orders_history\ESP " \
           r"INTERNATIONAL_1223728_R116529\10-02-2022_09h-13m-1.jpg"
    path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN " \
           r"DEERE\Thyssenkrupp Campo Limpo\t15.pdf"

    if os.path.splitext(path)[1].lower() == ".pdf":
        image1 = modg_func.pdf_to_img(os.path.join(path), None, False)[0]
    else:
        image1 = cv2.imread(path)

    # hardcoded assigning of output images for the 3 input images
    output1_letter = image1.copy()
    output1_word = image1.copy()
    output1_line = image1.copy()
    output1_par = image1.copy()
    output1_margin = image1.copy()

    gray1 = cv2.cvtColor(image1, cv2.COLOR_BGR2GRAY)

    # processing and writing the output
    _, output1_letter = process_letter(gray1, output1_letter)
    _, output1_word = process_word(gray1, output1_word)
    _, output1_line = process_line(gray1, output1_line)
    # special case for the 5th output because margin with paragraph is just the 4th output with margin
    # cv2.imwrite("output/letter/output1_letter.jpg", output1_letter)
    # cv2.imwrite("output/word/output1_word.jpg", output1_word)
    # cv2.imwrite("output/line/output1_line.jpg", output1_line)
    _, output1_par = process_par(gray1, output1_par)
    # cv2.imwrite("output/par/output1_par.jpg", output1_par)
    _, output1_margin = process_margin(gray1, output1_margin)
    # cv2.imwrite("output/margin/output1_margin.jpg", output1_margin)

    cv2.imshow("output letter", cv2.resize(output1_letter, None, fx=0.5, fy=0.5, interpolation=cv2.INTER_AREA))
    cv2.imshow("output word", cv2.resize(output1_word, None, fx=0.5, fy=0.5, interpolation=cv2.INTER_AREA))
    cv2.imshow("output line", cv2.resize(output1_line, None, fx=0.5, fy=0.5, interpolation=cv2.INTER_AREA))
    cv2.imshow("output par", cv2.resize(output1_par, None, fx=0.5, fy=0.5, interpolation=cv2.INTER_AREA))
    cv2.imshow("output margin", cv2.resize(output1_margin, None, fx=0.5, fy=0.5, interpolation=cv2.INTER_AREA))

    cv2.waitKey(0)

# main()
