import tabula
import numpy as np
import pandas as pd

page = 2
path = r"C:\Users\W8DE5P2\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Análisis Gráficos ML\1.- Desgaste Disco Afeitador\L_R120631_L_Z30_A_AliA_00" \
       r"\Piezas Críticas\L_R120631_L_Z30_A_AliA_00_A_022121_083340"
df = tabula.read_pdf(path + ".pdf", pages=page)

path = path + "_" + str(page) + "_df"
i = 0
for df_i in df:
    i = i+1
    df_i.to_excel(path + str(i) + ".xlsx")
print("Se acabo")
