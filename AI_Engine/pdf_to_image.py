from AI_Engine.sample import modulo_basic_functions as mod_basic

path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\JD REMAN\t76.pdf"
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\CLIIENTES JOHN DEERE\Skyway txt\John Deere Iberica SPW Open Order Report.pdf"
mod_basic.pdf_to_img(path, erase_img=False)
print("PDF convertido a imagen")

