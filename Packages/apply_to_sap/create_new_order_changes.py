import pandas as pd
import datetime
import numpy as np


def create_new_order_changes(orders: pd.DataFrame, sap_code: str, client_name: str) -> pd.DataFrame:
    """Funcion que crea tabla de cambios para un pedido nuevo"""
    # Hacer tabla de cambios vacia
    order_numbers = []
    planes_entrega_list = []
    clients = []
    references = []
    sap_codes = []
    ship_out_dates = []
    arrival_dates = []
    quantities = []
    confidences = []
    actions = []
    periodos_congelados = []
    for index in orders.index:
        order_number = str(orders['order_number'][index])
        quantity = str(orders['quantity'][index])
        ship_out_date = str(orders['ship_out_date'][index])
        reference = str(orders['reference'][index])
        ship_out_date_dt = str(datetime.datetime.strptime(ship_out_date, '%d/%m/%Y'))
        arrival_date = str(orders['arrival_date'][index]).replace('/', '.')
        order_numbers.append(order_number)
        planes_entrega_list.append(str(np.NaN))
        clients.append(client_name)
        references.append(reference)
        sap_codes.append(sap_code)
        ship_out_dates.append(ship_out_date_dt)
        arrival_dates.append(arrival_date)
        quantities.append(quantity)
        confidences.append(str(orders['confidence'][index]))
        actions.append('CREATE')

    for ship_out_date in ship_out_dates:
        ship_out_date_dt = datetime.datetime.strptime(ship_out_date, '%Y-%m-%d %H:%M:%S')
        today_dt = datetime.datetime.now()
        difference = (ship_out_date_dt - today_dt).days / 7  # Diferencia en semanas
        if difference <= 9:
            periodos_congelados.append(True)
        else:
            periodos_congelados.append(False)
    data = {"order_number": order_numbers,
            "plan_entrega": planes_entrega_list,
            "client": clients,
            "reference": references,
            "sap_code": sap_codes,
            "quantity": quantities,
            'ship_out_date': ship_out_dates,
            'arrival_date': arrival_dates,
            "confidence": confidences,
            "en_periodo_congelado": periodos_congelados,
            "action": actions}
    order_changes = pd.DataFrame(data, dtype=str)
    order_changes['ship_out_date'] = pd.to_datetime(order_changes['ship_out_date'])
    order_changes = order_changes.sort_values(by=['ship_out_date', 'action'], ascending=[True, False])

    return order_changes
