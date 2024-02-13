import time

import pandas as pd
from .edit_order_script import add_order_script
from .delete_order_script import delete_oder_script
from Packages.connect_to_sap import connect_to_sap
from .save_old_plan_entrega import save_old_plan_entrega
import datetime
import os
from ..constants import changes_history_folder, resources_folder
import shutil
from ..get_user_info import get_user_info
import traceback


def edit_existing_order(order_changes: pd.DataFrame):
    """Funcion en la cual se realiza la conexion a SAP y donde se edita los pedidos
    existentes, se toma en cuenta el periodo congelado para crear pedidos"""
    order_number = str(order_changes.at[0, 'order_number'])
    client = order_changes['client'][order_changes.index[0]]
    # now_time_dt = datetime.datetime.now()
    # now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')
    # folder_name = '{}_{}_{}'.format(client, order_number, now_time)
    # save_folder_root = os.path.join(changes_history_folder, folder_name)
    # os.mkdir(save_folder_root)
    # old_file_root = os.path.join(resources_folder, 'planes_entrega.xlsx')
    # shutil.copy(old_file_root, os.path.join(save_folder_root, 'old_planes_entrega.xlsx'))
    save_old_plan_entrega(order_number, client)
    session = connect_to_sap()
    for index in order_changes.index:
        action = str(order_changes['action'][index])
        plan_entrega = str(order_changes['plan_entrega'][index])
        ship_out_date_dt = (order_changes['ship_out_date'][index])
        ship_out_date = ship_out_date_dt.strftime('%d.%m.%Y')
        quantity = str(order_changes['quantity'][index])
        en_periodo_congelado = str(order_changes['en_periodo_congelado'][index])
        try:
            if action == 'CREATE' and quantity not in ['0', 0, '', ' ']:
                add_order_script(session, plan_entrega, ship_out_date, quantity)
            elif action == 'DELETE':
                delete_oder_script(session, plan_entrega, ship_out_date)
        except Exception as e:
            print('Error inesperado al subir el pedido, intentandolo de nuevo...')
            time.sleep(5)
            initial_error = traceback.format_exc()
            try:
                if action == 'CREATE' and quantity not in ['0', 0, '', ' ']:
                    add_order_script(session, plan_entrega, ship_out_date, quantity)
                elif action == 'DELETE':
                    delete_oder_script(session, plan_entrega, ship_out_date)
            except Exception as ee:
                bar_error_text = session.FindById("wnd[0]/sbar").text
                login = get_user_info()[1]
                print(bar_error_text)
                if login in bar_error_text:
                    raise Exception(initial_error)
                else:
                    raise Exception('El pedido ya esta abierto por otro usuario\n'
                                    'Informacion de SAP: {}'.format(bar_error_text))



