from pdf2image import convert_from_path

path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\JD REMAN\t76.pdf"
pag_num = 1
# Conversion pdf a jpg
images = convert_from_path(path)
path = path + "-" + str(pag_num) + '.jpg'
images[pag_num - 1].save(path, 'JPEG')

