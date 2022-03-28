from Packages.constants import resources_folder
import pandas as pd
import os
path = os.path.join(resources_folder, 'codigo_sap_clientes.xlsx')
data = pd.read_excel(path, dtype=str)
df = pd.DataFrame(data)
for index in df.index:
    client = df['Customer'][index]
    sap_code = str(df['sap_code'][index])
    print('client:{} | sap_code{} --> {}:'.format(client, sap_code, sap_code[0:5]))
    if sap_code[0:5] in (99999, '99999'):
        print('Externo')
    else:
        print('No externo')