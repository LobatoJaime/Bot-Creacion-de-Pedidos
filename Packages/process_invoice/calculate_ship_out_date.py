import pandas as pd
import datetime
import numpy as np
from ..constants import number_of_weeks_for_shipping_date, number_of_day_of_week_for_shipping_date


def calculate_ship_out_date(orders: pd.DataFrame) -> pd.DataFrame:
    """Funcion que calcula la shipping date el jueves de 2 meses atras
    en relacion del delivery/arrival_date en caso de que el shipping_date
    no nos sea indicado"""
    for index in orders.index:
        ship_out_date = orders['ship_out_date'][index]
        arrival_date = orders['arrival_date'][index]
        if str(ship_out_date) == str(np.nan):
            # calcular arrival date -7 weeks y el jueves de esa semana
            try:
                arrival_date_dt = datetime.datetime.strptime(arrival_date, '%d/%m/%Y')  # En formato datetime
            except ValueError:
                arrival_date_dt = datetime.datetime.strptime(arrival_date, '%d/%m/%y')  # En formato datetime
            ship_out_week = (arrival_date_dt - datetime.timedelta(weeks=number_of_weeks_for_shipping_date)).strftime(
                '%Y-W%W')  # en formato YYYY-WW
            ship_out_date_dt = datetime.datetime.strptime(
                ship_out_week + '-{}'.format(number_of_day_of_week_for_shipping_date),
                '%Y-W%W-%w')  # calcula el jueves de esa semana
            ship_out_date = ship_out_date_dt.strftime('%d/%m/%Y')  # ponerlo en el formato deseado
            orders['ship_out_date'][index] = ship_out_date

    return orders
