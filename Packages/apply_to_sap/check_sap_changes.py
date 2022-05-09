import pandas as pd
import datetime


def check_sap_changes(orders: pd.DataFrame, planes_entrega: pd.DataFrame) -> pd.DataFrame:
    """Crea una nueva tabla en la cual sale todos los pedidos que se tienen que
    crear o borrar"""
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

    # Chequear que pedidos se tienen que cambiar/agregar desde el documento proporcionado
    for index in orders.index:
        order_number = str(orders['order_number'][index])
        quantity = str(orders['quantity'][index])
        ship_out_date = str(orders['ship_out_date'][index])
        reference = str(orders['reference'][index])
        ship_out_date_dt = str(datetime.datetime.strptime(ship_out_date, '%d/%m/%Y'))
        arrival_date = str(orders['arrival_date'][index]).replace('/', '.')
        orders['ship_out_date'][index] = ship_out_date_dt  # cambia la columba de ship_out_date a formato datetime
        filtered_row = planes_entrega.loc[(planes_entrega['Número pedido cliente'] == order_number)
                                          & (planes_entrega['Cantidad de Pedido'] == quantity)
                                          & (planes_entrega['Fecha reparto'] == ship_out_date_dt)
                                          & (planes_entrega['Referencia'] == reference)]
        filtered_row_no_qty = planes_entrega.loc[(planes_entrega['Número pedido cliente'] == order_number)
                                                 & (planes_entrega['Fecha reparto'] == ship_out_date_dt)
                                                 & (planes_entrega['Referencia'] == reference)]
        try:
            pending_qty = filtered_row_no_qty['Cantidad Pendiente'][filtered_row_no_qty.index[0]]
        except IndexError:
            import traceback
            pending_qty = None
        plan_entrega_row = planes_entrega.loc[(planes_entrega['Número pedido cliente'] == order_number)
                                              & (planes_entrega['Referencia'] == reference)]
        plan_entrega = plan_entrega_row['Documento de Ventas'][plan_entrega_row.index[0]]
        if filtered_row.empty:
            order_numbers.append(order_number)
            planes_entrega_list.append(plan_entrega)
            clients.append(str(orders['client'][index]))
            references.append(reference)
            sap_codes.append(str(orders['sap_code'][index]))
            ship_out_dates.append(ship_out_date_dt)
            arrival_dates.append(arrival_date)
            quantities.append(quantity)
            confidences.append(str(orders['confidence'][index]))
            if pending_qty is not None:
                if pending_qty in (0, 0.0, '0', '0.0'):
                    actions.append('IN TRANSIT')
                else:
                    actions.append('CREATE')
            else:
                actions.append('CREATE')
        else:
            order_numbers.append(order_number)
            planes_entrega_list.append(plan_entrega)
            clients.append(str(orders['client'][index]))
            references.append(reference)
            sap_codes.append(str(orders['sap_code'][index]))
            ship_out_dates.append(ship_out_date_dt)
            arrival_dates.append(arrival_date)
            quantities.append(quantity)
            confidences.append(str(orders['confidence'][index]))
            if filtered_row['Cantidad Pendiente'][filtered_row.index[0]] in (0, 0.0, '0', '0.0'):
                actions.append('IN TRANSIT')
            else:
                actions.append('NONE')

    # Hacer lista con pares de nro de pedido <-> referencia
    orders_with_ref = []
    for index in orders.index:
        order_number = str(orders['order_number'][index])
        reference = str(orders['reference'][index])
        pair = [order_number, reference]
        if pair not in orders_with_ref:
            orders_with_ref.append(pair)

    # Chequear que pedidos se tienen que cambiar/borrar comparando SAP con el documento proporcionado
    for pair in orders_with_ref:
        order_n = pair[0]
        reference = pair[1]
        planes_entrega_filtered = planes_entrega.loc[(planes_entrega['Número pedido cliente'] == order_n)
                                                     & (planes_entrega['Referencia'] == reference)]
        for index in planes_entrega_filtered.index:
            order_number = str(planes_entrega_filtered['Número pedido cliente'][index])
            quantity = str(planes_entrega_filtered['Cantidad de Pedido'][index])
            ship_out_date = str(planes_entrega_filtered['Fecha reparto'][index])
            ship_out_date_dt = datetime.datetime.strptime(ship_out_date, '%Y-%m-%d %H:%M:%S')
            arrival_date_dt = ship_out_date_dt + datetime.timedelta(weeks=7)
            arrival_date = arrival_date_dt.strftime('%d.%m.%Y')
            # ship_out_date_dt = datetime.datetime.strptime(ship_out_date, '%Y-%m-%d %H:%M:%S')
            # ship_out_date = ship_out_date_dt.strftime('%d/%m/%Y')
            cantidad_pendiente = planes_entrega_filtered['Cantidad Pendiente'][index]
            if cantidad_pendiente in (0, 0.0, '0', '0.0'):
                continue
            filtered_row = orders.loc[(orders['order_number'] == order_number)
                                      & (orders['quantity'] == quantity)
                                      & (orders['ship_out_date'] == ship_out_date)
                                      & (orders['reference'] == reference)]
            if filtered_row.empty:
                order_numbers.append(order_number)
                planes_entrega_list.append(planes_entrega_filtered['Documento de Ventas'][index])
                clients.append(planes_entrega_filtered['Nombre del Cliente'][index])
                references.append(reference)
                sap_codes.append(planes_entrega_filtered['Cliente'][index])
                ship_out_dates.append(ship_out_date)
                datetime.datetime.strptime(ship_out_date, '%Y-%m-%d %H:%M:%S')
                arrival_dates.append(arrival_date)
                quantities.append(int(float(quantity)))
                confidences.append(confidences[0])
                actions.append('DELETE')
            else:
                pass
    # Crear columna de periodo congelado (9 semanas)
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
    order_changes = order_changes.sort_values(by=['reference', 'ship_out_date', 'action'],
                                              ascending=[True, True, False])

    return order_changes
