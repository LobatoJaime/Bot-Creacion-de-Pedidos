import pandas as pd
import numpy as np


def change_client_name(orders: pd.DataFrame, planes_entrega: pd.DataFrame) -> pd.DataFrame:
    """Funcion que cambia el nombre del cliente por el nombre de
    cliente proporcionado por SAP"""
    index = orders.index[0]
    sap_code = orders['sap_code'][index]
    if str(sap_code) not in [str(np.NaN), str(np.nan)]:
        client_row = planes_entrega.loc[planes_entrega['Cliente'] == sap_code]
        index = client_row.index[0]
        client_name = client_row['Nombre del Cliente'][index]
        for index in orders.index:
            orders['client'][index] = client_name
    return orders
