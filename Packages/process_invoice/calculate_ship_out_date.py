import pandas as pd
import datetime
import numpy as np
from ..get_settings import get_settings


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
            settings = get_settings()
            days_for_shipping_date = int(settings['days_for_shipping_date'][0])
            number_of_weeks_for_shipping_date = days_for_shipping_date / 7
            ship_out_week = (arrival_date_dt - datetime.timedelta(weeks=number_of_weeks_for_shipping_date)).strftime(
                '%Y-W%W')  # en formato YYYY-WW
            day_of_week_for_shipping_date = settings['day_of_week_shipping_date'][0]
            day_of_week_dict = {'lunes': 1, 'martes': 2, 'miércoles': 3,
                                'jueves': 4, 'viernes': 5, 'sábado': 6, 'domingo': 7}
            number_of_day_of_week_for_shipping_date = str(day_of_week_dict[day_of_week_for_shipping_date])
            ship_out_date_dt = datetime.datetime.strptime(
                ship_out_week + '-{}'.format(number_of_day_of_week_for_shipping_date),
                '%Y-W%W-%w')  # calcula el jueves de esa semana
            ship_out_date = ship_out_date_dt.strftime('%d/%m/%Y')  # ponerlo en el formato deseado
            orders['ship_out_date'][index] = ship_out_date

    return orders
