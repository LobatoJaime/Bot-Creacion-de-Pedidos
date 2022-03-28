import pandas as pd
import numpy as np


def get_client_number(orders: pd.DataFrame, planes_entrega: pd.DataFrame) -> pd.DataFrame:
    """Funcion que relacion el nombre obtenido por la AI con el
    codigo de SAP que se tiene en la base de datos y añade dicha columna a la
    tabla de orders"""
    client_code = ''
    sap_codes = []
    for index in orders.index:
        order_number = str(orders['order_number'][index])
        if client_code == '':
            selected_row = planes_entrega.loc[planes_entrega['Número pedido cliente'] == order_number]
            try:
                ind = selected_row.index[0]
                client_code = selected_row['Cliente'][ind]
            except IndexError:
                client_code = np.NaN
        sap_codes.append(client_code)
    orders.insert(3, 'sap_code', sap_codes)
    return orders
