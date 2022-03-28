from Packages.process_invoice.get_formats import get_formats
import pandas as pd
import numpy as np
from .format_date import format_date
from .format_quantity import format_quantity


class FormatData:
    """Clase donde se haran todos los procesos necesarios
    para cambiar el formato del pedido"""

    def __init__(self, orders: pd.DataFrame):
        self.orders = orders
        self.quantity_formats, self.ship_out_date_formats, self.arrival_date_formats = get_formats()
        self.client = self.orders['client'][self.orders.index[0]]

    def format_all(self):
        # if validate_formats(self.client):
        self.fix_blank_reference()
        self.fix_blank_dates()
        self.format_quantity()
        self.ship_out_date()
        self.arrival_date()
        self.fix_lower_case_reference()
        # else:
        #     print('Error en el formato de los datos')
        return self.orders

    def fix_blank_reference(self):
        previous_ref = self.orders['reference'][0]
        for index in self.orders.index:
            if str(self.orders['reference'][index]) == str(np.nan):
                self.orders['reference'][index] = previous_ref
            else:
                previous_ref = self.orders['reference'][index]

    def fix_blank_dates(self):
        for index in self.orders.index:
            if [str(self.orders['ship_out_date'][index]), str(self.orders['arrival_date'][index])] == [str(np.nan),
                                                                                                       str(np.nan)]:
                self.orders = self.orders.drop(index=index)

    def format_quantity(self):
        row = self.quantity_formats.loc[self.quantity_formats['client'] == self.client]
        thousand_separators = {".": ",", ",": "."}  # Key=decimal_sep
        for index in row.index:
            decimal_sep = self.quantity_formats['decimal_separator'][index]
            for ind in self.orders.index:
                number = format_quantity(self.orders['quantity'][ind], decimal_sep)
                self.orders['quantity'][ind] = number

    def ship_out_date(self):
        row = self.ship_out_date_formats.loc[self.ship_out_date_formats['client'] == self.client]
        for index in row.index:
            date_format = str(self.ship_out_date_formats['date_format'][index])
            for ind in self.orders.index:
                if str(self.orders['ship_out_date'][ind]) != str(np.NaN):
                    ship_out_date = str(self.orders['ship_out_date'][ind])
                    if ship_out_date != str(np.nan):
                        date = format_date(ship_out_date, date_format)
                        self.orders['ship_out_date'][ind] = date

    def arrival_date(self):
        row = self.arrival_date_formats.loc[self.arrival_date_formats['client'] == self.client]
        for index in row.index:
            date_format = str(self.arrival_date_formats['date_format'][index])
            for ind in self.orders.index:
                arrival_date = str(self.orders['arrival_date'][ind])
                if arrival_date != str(np.nan):
                    date = format_date(arrival_date, date_format)
                    self.orders['arrival_date'][ind] = date

    def fix_lower_case_reference(self):
        """Funcion que transforma las letras de la
        referencia en mayuscula en caso de que hayan escrito en minusculas"""
        for index in self.orders.index:
            reference = str(self.orders['reference'][index])
            reference = reference.upper()
            self.orders['reference'][index] = reference
