import cv2 as cv



def main():
    # Load source image
    path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\JD SARAN\t54-1.jpg"
    path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\ESP\t14-1.jpg"
    path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Skyway\t0-1.jpg"
    path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Skyway txt\John Deere Iberica SPW Open Order Report.pdf-1.jpg"
    src = cv.imread(path)

    # Check if image is loaded fine
    if not src.data:
        print("Problem loading image!!!")
        return

    # Show source image
    cv.imshow("src", src)

    # Resizing for practical reasons
    size_factor = 0.5
    size = [int(src.shape[1] * size_factor), int(src.shape[0] * size_factor)]
    rsz = cv.resize(src, size, interpolation=cv.INTER_AREA)
    if len(rsz.shape) == 3:
        gray = cv.cvtColor(rsz, cv.COLOR_BGR2GRAY)
    else:
        gray = rsz

    # Show gray image
    cv.imshow("gray", gray)
    cv.imshow("not gray", ~gray)

    # Apply adaptiveThreshold at the bitwise_not of gray, notice the ~ symbol
    bw = cv.adaptiveThreshold(~gray, 255, cv.ADAPTIVE_THRESH_MEAN_C, cv.THRESH_BINARY, 15, -2)

    # Create the images that will use to extract the horizonta and vertical lines
    horizontal = bw.copy()
    vertical = bw.copy()

    scale = 15 # play with this variable in order to increase / decrease the amount of lines to be detected

    # Specify size on horizontal axis
    horizontalsize = int(horizontal.shape[1] / scale)

    # Create structure element for extracting horizontal lines through morphology operations
    horizontalStructure = cv.getStructuringElement(cv.MORPH_RECT, (horizontalsize, 1))

    # Apply morphology operations
    horizontal = cv.erode(horizontal, horizontalStructure, (-1, -1))
    horizontal = cv.dilate(horizontal, horizontalStructure, (-1, -1))

    # horizontal = cv.dilate(horizontal, horizontalStructure, (-1, -1)) # expand horizontal lines

    # Show extracted horizontal lines
    cv.imshow("horizontal", horizontal)

    # Specify size on vertical axis
    verticalsize = int(horizontal.shape[0] / scale)

    # Create structure element for extracting vertical lines through morphology operations
    verticalStructure = cv.getStructuringElement(cv.MORPH_RECT, (1, verticalsize))

    # Apply morphology operations
    vertical = cv.erode(vertical, verticalStructure, (-1, -1))
    vertical = cv.dilate(vertical, verticalStructure, (-1, -1))

    #vertical = cv.dilate(vertical, verticalStructure, (-1, -1)) # expand vertical lines

    # Show extracted vertical lines
    cv.imshow("vertical", vertical)

    # create a mask which includes the tables
    mask = horizontal + vertical
    cv.imshow("mask", mask)

    # find the joints between the lines of the tables, we will use this information in order to descriminate tables
    # from pictures (tables will contain more than 4 joints while a picture only 4 (i.e. at the corners))
    joints = cv.bitwise_and(horizontal, vertical);
    cv.imshow("joints", joints)

    # Find external contours from the mask, which most probably will belong to tables or to images
    contours, hierarchy = cv.findContours(mask, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE, offset=(0, 0))

    rois = []
    for cnt in contours:
        # find the area of each contour
        area = cv.contourArea(cnt)

        # filter individual lines of blobs that might exist and they do not represent a table
        if area < 100: # value is randomly chosen, you will need to find that by yourself with trial and error procedure
            continue
        cnt_len = cv.arcLength(cnt, True)
        contours_poly = cv.approxPolyDP(cnt, 3, True)
        boundRect = cv.boundingRect(contours_poly)
        x1, y1, w, h = cv.boundingRect(contours_poly)

        # find the number of joints that each table has
        roi = joints[y1:y1+h, x1:x1+w]
        cv.imshow("roi", roi)
        cv.waitKey(0)
        joints_contours, _ = cv.findContours(roi, cv.RETR_CCOMP, cv.CHAIN_APPROX_SIMPLE)
        # if the number is not more than 5 then most likely it not a table
        if len(joints_contours) <= 4:
            continue
        if len(rsz.shape) == 3:
            rois.append(rsz[y1:y1 + h, x1:x1 + w, :].copy())
        else:
            rois.append(rsz[y1:y1+h, x1:x1+w].copy())

        cv.drawContours(rsz, [cnt], -1, (0, 0, 255), 5)
        cv.rectangle(rsz, (x1, y1), (x1+w, y1+h), (0, 255, 0), 1,)

    cv.imshow("rsz", rsz)
    for roi in rois:
        cv.imshow("roi", roi)
        cv.waitKey(0)
    return

main()