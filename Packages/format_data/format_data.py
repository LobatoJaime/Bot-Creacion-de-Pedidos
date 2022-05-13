import pandas as pd
import numpy as np
from .format_date import format_date


class FormatData:
    """Clase donde se haran todos los procesos necesarios
    para cambiar el formato del pedido"""

    def __init__(self, orders: pd.DataFrame):
        self.orders = orders
        self.client = self.orders['client'][self.orders.index[0]]

    def format_all(self):
        self.format_dates()
        self.fix_lower_case_reference()
        return self.orders

    def format_dates(self):
        """Acepta los formatos de dd/mm/yyyy, dd/mm/yy\n
        dd.mm.yyyy, dd.mm.yy y los convierte en dd/mm/yyyy"""
        for index in self.orders.index:
            arrival_date = str(self.orders['arrival_date'][index])
            ship_out_date = str(self.orders['ship_out_date'][index])
            if arrival_date != str(np.nan):
                self.orders['arrival_date'][index] = format_date(arrival_date)
            if ship_out_date != str(np.nan):
                self.orders['ship_out_date'][index] = format_date(ship_out_date)

    def fix_lower_case_reference(self):
        """Funcion que transforma las letras de la
        referencia en mayuscula en caso de que hayan escrito en minusculas"""
        for index in self.orders.index:
            reference = str(self.orders['reference'][index])
            reference = reference.upper()
            self.orders['reference'][index] = reference
