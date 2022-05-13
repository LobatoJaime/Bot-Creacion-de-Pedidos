import datetime
import pandas as pd
from Packages.constants import formats_table_path
import numpy as np


class FormatTable:
    """Clase donde se van a formatear todos los campos
    necesarios para la tabla dependiendo del cliente"""

    def __init__(self, orders: pd.DataFrame):
        self.orders = orders
        self.client = self.orders['client'][self.orders.index[0]]
        data = pd.read_excel(formats_table_path, dtype=str)
        formats_table = pd.DataFrame(data, dtype=str)
        self.client_formats = formats_table[formats_table['client'] == self.client]
        print(self.client_formats.to_string())

    def format(self) -> pd.DataFrame:
        date_format = self.client_formats['date_format'][self.client_formats.index[0]]
        for index in self.orders.index:
            arrival_date = str(self.orders['arrival_date'][index])
            shipping_date = str(self.orders['ship_out_date'][index])
            quantity = str(self.orders['quantity'][index])

            if arrival_date != str(np.nan):
                new_date = format_date(arrival_date, date_format)
                self.orders['arrival_date'][index] = new_date

            if shipping_date != str(np.nan):
                new_date = format_date(shipping_date, date_format)
                self.orders['ship_out_date'][index] = new_date

        return self.orders


def format_date(date: str, date_format: str) -> str:
    """Convierte la fecha generada por la AI en dd/mm/yyyy"""
    day = ''
    month = ''
    year = ''
    formatted_date = 'N/A'

    if date_format == 'dd/mm/yyyy':
        position = 0
        for char in date:
            if char.isdigit():
                if len(day) < 2:
                    day = day.__add__(char)
                elif len(month) < 2:
                    month = month.__add__(char)
                else:
                    year = year.__add__(char)
                if len(month) == 1:
                    if date[position + 2].isdigit():
                        month = '0' + month
                if len(day) == 1:
                    if date[position + 2].isdigit():
                        day = '0' + day
            position = position + 1

    elif date_format == 'mm/dd/yyyy':
        position = 0
        for char in date:
            if char.isdigit():
                if len(month) < 2:
                    month = month.__add__(char)
                elif len(day) < 2:
                    day = day.__add__(char)
                else:
                    year = year.__add__(char)
                if len(month) == 1:
                    if date[position + 2].isdigit():
                        month = '0' + month
                if len(day) == 1:
                    if date[position + 2].isdigit():
                        day = '0' + day
            position = position + 1

    if len(year) == 2:
        year = '20' + year
    formatted_date = '{}/{}/{}'.format(day, month, year)
    return formatted_date
