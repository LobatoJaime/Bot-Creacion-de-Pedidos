import tabula
import numpy as np
import pandas as pd

path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\L_R516237_D_Z60_AliA_A_00_A_012622_154737.pdf"
df = tabula.read_pdf(path, pages="all")

path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\L_R516237_D_Z60_AliA_A_00_A_012622_154737_df"
i = 0
for df_i in df:
    i = i+1
    df_i.to_excel(path + str(i) + ".xlsx")