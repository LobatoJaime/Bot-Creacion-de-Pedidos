import pandas as pd
import numpy as np


def validate_dates(orders: pd.DataFrame) -> bool:
    """Funcion que comprueba que todos los campos de
    ship_out_date y arrival_date hayan sido escritos de la manera
    correcta"""
    dates_ok = True
    for index in orders.index:
        arrival_date = str(orders['arrival_date'][index])
        ship_out_date = str(orders['ship_out_date'][index])
        if not val(arrival_date) or not val(ship_out_date):
            dates_ok = False
            return dates_ok
        if arrival_date in ('', str(np.NaN), None, ' ', str(np.NAN)) and \
                ship_out_date in ('', str(np.NaN), None, ' ', str(np.NAN)):
            dates_ok = False
            return dates_ok
    return dates_ok


def val(date: str) -> bool:
    if date in ('', str(np.NaN), None, ' ', str(np.NAN)):
        return True
    # -----------COMPROBAR LONGITUD--------------
    if len(date) > 10 or len(date) < 8:
        return False
    # -----------COMPROBAR FORMATO--------------
    if not date[0:2].isdigit():
        return False
    if date[2] not in ('/', '.'):
        return False
    if not date[3:5].isdigit():
        return False
    if date[5] not in ('/', '.'):
        return False
    if not date[6:].isdigit() or len(date[6:]) > 4:
        return False
    if int(date[0:2]) > 31:
        return False
    if int(date[3:5]) > 12 or int(date[3:5]) == 0:
        return False
    return True
