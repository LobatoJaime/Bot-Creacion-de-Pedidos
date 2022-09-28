import datetime
import re
import numbers

import pandas as pd
from pandas.api.types import is_datetime64_dtype
from Packages.constants import formats_table_path
import numpy as np


class FormatTable:
    """Clase donde se van a formatear todos los campos
    necesarios para la tabla dependiendo del cliente"""

    def __init__(self, orders: pd.DataFrame, decimal_separator: str, date_format_regex: pd.DataFrame):
        self.orders = orders
        self.decimal_separator = decimal_separator
        self.date_format_regex = date_format_regex

    def format(self) -> pd.DataFrame:
        date_format = self.date_format_regex
        decimal_separator = self.decimal_separator
        for index in self.orders.index:
            if not isinstance(self.orders['arrival_date'][index], datetime.datetime):
                arrival_date = str(self.orders['arrival_date'][index])
                if arrival_date != str(np.nan):
                    self.orders['arrival_date'][index] = format_date(arrival_date, date_format)
            if not isinstance(self.orders['ship_out_date'][index], datetime.datetime):
                shipping_date = str(self.orders['ship_out_date'][index])
                if shipping_date != str(np.nan):
                    self.orders['ship_out_date'][index] = format_date(shipping_date, date_format)
            if not isinstance(self.orders['quantity'][index], numbers.Number):
                quantity = str(self.orders['quantity'][index])
                new_quantity = format_quantity(quantity, decimal_separator)
                self.orders['quantity'][index] = new_quantity
            else:
                self.orders['quantity'][index] = str(int(self.orders['quantity'][index]))
        # Si las columna son tipo fecha las convierto a string con el formato adecuado
        if is_datetime64_dtype(self.orders['arrival_date']):
            self.orders['arrival_date'] = self.orders['arrival_date'].dt.strftime('%d/%m/%Y')
        if is_datetime64_dtype(self.orders['ship_out_date']):
            self.orders['ship_out_date'] = self.orders['ship_out_date'].dt.strftime('%d/%m/%Y')

        return self.orders


def format_date(date: str, date_format: pd.DataFrame) -> str:
    """Convierte la fecha generada por la AI en dd/mm/yyyy"""
    formatted_date = 'N/A'
    for index in date_format.index:
        regex = date_format['regex'][index]
        date_time_format = date_format['format_code'][index]
        if re.match(regex, date):
            if '%W' in date_time_format:
                date = date + '.Thursday'
                date_time_format = date_time_format + '.%A'
            date_datetime = datetime.datetime.strptime(date, date_time_format)
            formatted_date = date_datetime.strftime('%d/%m/%Y')
            break
    return formatted_date


def format_quantity(number: str, decimal_separator: str) -> str:
    """Funcion que toma en cuenta el
    separador decimal del cliente y reescribe el numero como
    entero"""
    formatted_number = ''
    for char in number:
        if char.isdigit():
            formatted_number = formatted_number + char
        elif char == decimal_separator:
            break
    return formatted_number
