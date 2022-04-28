from Packages.constants import resources_folder, changes_history_folder
import os
import pandas as pd
import numpy as np
from .get_user_info import get_user_info


def create_comparison_table_excel(folder_root: str):
    """Funcion que compara el plan de entregas antes de realizar
    los cambios con el plan de entregas despues de ejectuar el script y crea una tabla
    comparativa entre ambos en la carpeta del historial"""
    files = os.listdir(folder_root)

    # leer planes de entrega viejos
    old_file_root = os.path.join(folder_root, 'old_planes_entrega.xlsx')
    data_old = pd.read_excel(old_file_root)
    planes_entrega_old = pd.DataFrame(data=data_old, dtype=str)
    # Eliminar los envios de cantidad pendiente == 0
    for index in planes_entrega_old.index:
        pending_qty = planes_entrega_old['Cantidad Pendiente'][index]
        if pending_qty in (0, 0.0, '0', '0.0'):
            planes_entrega_old = planes_entrega_old.drop(index=index)
    planes_entrega_old = planes_entrega_old.reset_index()

    # leer planes de entrega nuevos
    new_file_root = os.path.join(folder_root, 'new_planes_entrega.xlsx')
    data_new = pd.read_excel(new_file_root)
    planes_entrega_new = pd.DataFrame(data=data_new, dtype=str)
    planes_entrega_new = planes_entrega_new[planes_entrega_new['Cantidad Pendiente'] != '0.0']
    # Eliminar los envios de cantidad pendiente == 0
    for index in planes_entrega_new.index:
        pending_qty = planes_entrega_new['Cantidad Pendiente'][index]
        if pending_qty in (0, 0.0, '0', '0.0'):
            planes_entrega_new = planes_entrega_new.drop(index=index)
    planes_entrega_new = planes_entrega_new.reset_index()

    # hacer comparacion de tablas -------------------------------------------------------
    ship_out_dates = []
    references = []
    old_quantities = []
    new_quantities = []
    status_list = []
    messages = []
    file_roots = []
    prices = []

    for index in planes_entrega_new.index:
        new_row = planes_entrega_new.iloc[index]
        # comprobar si la fecha ya existe para esa referencia
        reference = new_row['Referencia']
        ship_out_date = new_row['Fecha reparto']
        quantity = new_row['Cantidad de Pedido']
        filtered_row = planes_entrega_old.loc[
            (planes_entrega_old['Referencia'] == reference) &
            (planes_entrega_old['Fecha reparto'] == ship_out_date)]

        if filtered_row.empty:
            ship_out_dates.append(ship_out_date)
            references.append(reference)
            old_quantities.append(0)
            new_quantities.append(quantity)
        else:
            ship_out_dates.append(ship_out_date)
            references.append(reference)
            old_quantities.append(filtered_row['Cantidad de Pedido'][filtered_row.index[0]])
            new_quantities.append(quantity)
        status_list.append('ACCEPTED')
        messages.append(np.NaN)
        file_roots.append(np.NaN)
        price = planes_entrega_new['Prc. Neto'][planes_entrega_new.index[0]]
        if price not in ('0', 0, ' ', '', np.NaN, str(np.NaN)):
            price = price
        else:
            price = 0
    for index in planes_entrega_old.index:
        old_row = planes_entrega_old.iloc[index]
        # comprobar si la fecha ya existe para esa referencia
        reference = old_row['Referencia']
        ship_out_date = old_row['Fecha reparto']
        quantity = old_row['Cantidad de Pedido']
        filtered_row = planes_entrega_new.loc[
            (planes_entrega_new['Referencia'] == reference) &
            (planes_entrega_new['Fecha reparto'] == ship_out_date)]

        if filtered_row.empty:
            ship_out_dates.append(ship_out_date)
            references.append(reference)
            old_quantities.append(quantity)
            new_quantities.append(0)
        else:
            ship_out_dates.append(ship_out_date)
            references.append(reference)
            old_quantities.append(quantity)
            new_quantities.append(filtered_row['Cantidad de Pedido'][filtered_row.index[0]])
        status_list.append('ACCEPTED')
        messages.append(np.NaN)
        file_roots.append(np.NaN)

    try:
        data = pd.read_excel(os.path.join(folder_root, 'deleted_order_changes.xlsx'))
        deleted_order_changes = pd.DataFrame(data, dtype=str)
    except FileNotFoundError:
        deleted_order_changes = pd.DataFrame()
    if not deleted_order_changes.empty:
        for index in deleted_order_changes.index:
            action = deleted_order_changes['action'][index]
            ship_out_date = deleted_order_changes['ship_out_date'][index]
            reference = deleted_order_changes['reference'][index]
            quantity = deleted_order_changes['quantity'][index]
            message = deleted_order_changes['message'][index]
            file_root = deleted_order_changes['file_root'][index]
            if quantity not in [0, '0', 0.0]:
                if action not in ('NONE', 'IN TRANSIT'):
                    if action == 'CREATE':
                        old_quantities.append(0)
                        new_quantities.append(quantity)
                    elif action == 'DELETE':
                        old_quantities.append(quantity)
                        new_quantities.append(0)
                    ship_out_dates.append(ship_out_date)  # MAYBE DOESNT WORK
                    references.append(reference)
                    status_list.append('REJECTED')
                    messages.append(message)
                    file_roots.append(file_root)

    old_quantities = [int(float(i)) for i in old_quantities]
    new_quantities = [int(float(i)) for i in new_quantities]

    # ship_out_dates = [dt.datetime.strptime(ship_out_date, '%Y-%m-%d').strftime('%d.%m.%Y') for ship_out_date in ship_out_dates]
    prices = [price]*len(references)
    user = get_user_info()
    user_info = '{}/{}'.format(user[0], user[1])
    user_info = [user_info]*len(references)
    data_comparison = {'ship_out_date': ship_out_dates,
                       'reference': references,
                       'old_quantity': old_quantities,
                       'new_quantity': new_quantities,
                       'status': status_list,
                       'message': messages,
                       'file_root': file_roots,
                       'price': prices,
                       'user_info': user_info}
    comparison_table = pd.DataFrame(data_comparison)
    comparison_table = comparison_table.drop_duplicates()
    comparison_table = comparison_table.sort_values(by='ship_out_date')
    comparison_table['ship_out_date'] = pd.to_datetime(comparison_table.ship_out_date)
    comparison_table['ship_out_date'] = comparison_table['ship_out_date'].dt.strftime('%d.%m.%Y')

    tags = []
    for index in comparison_table.index:
        ship_out_date = comparison_table['ship_out_date'][index]
        reference = comparison_table['reference'][index]
        old_quantity = comparison_table['old_quantity'][index]
        new_quantity = comparison_table['new_quantity'][index]
        status = comparison_table['status'][index]
        tag = 'none'
        if status == 'REJECTED':
            tag = 'rejected'
        elif old_quantity in [0, '0']:
            tag = 'add'
        elif new_quantity in [0, '0']:
            tag = 'del'
        elif old_quantity != new_quantity:
            tag = 'change'
        tags.append(tag)
    comparison_table = comparison_table.assign(tags=tags)

    print(comparison_table.to_string())
    filename = 'comparison_table.xlsx'
    comparison_table.to_excel(os.path.join(folder_root, filename))
    try:
        os.remove(os.path.join(folder_root, 'old_planes_entrega.xlsx'))
        os.remove(os.path.join(folder_root, 'new_planes_entrega.xlsx'))
        os.remove(os.path.join(folder_root, 'deleted_order_changes.xlsx'))
    except FileNotFoundError:
        pass