import pandas as pd
from .constants import tracking_root


def obtain_tracking_data():
    """Funcion para obtener el dataframe del seguimiento"""
    df = pd.read_excel(tracking_root).reset_index(drop=True)

    return df


def add_tracking(id: str, order: str, state: str, author: str, date: str, orderpdf: str, comparisonexcel: str):
    """Funcion para añadir una nueva entrada en el seguimiento"""
    tracking = obtain_tracking_data()

    print(tracking)

    tracking.loc[-1] = [id, order, state, author, date, orderpdf, comparisonexcel]

    tracking.to_excel(tracking_root, index=False)