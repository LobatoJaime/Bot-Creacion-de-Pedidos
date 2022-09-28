from AI_Engine.modules import modulo_basic_functions as mod_basic

path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\orders_history\Thyssen Krupp Cranks_5500044982_DZ104463\10-02-2022_11h-06m.pdf"
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Proveedores\extra\ESP\ESP ERROR.pdf"
path = mod_basic.pdf_to_img(path, erase_img=False)
print("PDF convertido a imagen")

