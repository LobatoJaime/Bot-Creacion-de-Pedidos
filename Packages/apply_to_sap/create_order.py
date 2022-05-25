import pandas as pd
from .create_order_script import create_order_script
from .edit_order_script import add_order_script
from .delete_order_script import delete_oder_script
from ..connect_to_sap import connect_to_sap
from ..get_planes_entrega import get_planes_entrega
from ..script_download_planes_entrega_from_sap import download_planes_entrega_from_sap
from ..constants import changes_history_folder, resources_folder
from .save_old_plan_entrega import save_old_plan_entrega
import os
import datetime
import shutil
import time, traceback
from ..get_user_info import get_user_info


def create_order(order_changes: pd.DataFrame, references_to_create=None):
    """Funcion en la cual se realiza la conexion a SAP y donde se crea el pedido"""
    # Copiar planes de entrega al historial antes de descargar el nuevo
    order_number = order_changes['order_number'][order_changes.index[0]]
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
    references_created = []
    if references_to_create is None:
        references_to_create = set(order_changes['reference'].to_list())
    else:
        references_to_create = references_to_create

    for index in order_changes.index:
        action = str(order_changes['action'][index])
        order_number = str(order_changes['order_number'][index])
        ship_out_date_dt = (order_changes['ship_out_date'][index])
        ship_out_date = ship_out_date_dt.strftime('%d.%m.%Y')
        quantity = str(order_changes['quantity'][index])
        en_periodo_congelado = str(order_changes['en_periodo_congelado'][index])
        reference = str(order_changes['reference'][index])
        sap_code = str(order_changes['sap_code'][index])
        if reference not in references_created and reference in references_to_create:
            create_order_script(session, order_number, ship_out_date,
                                quantity, sap_code, reference)
            # Obtener numero de plan de entrega
            print('Descargado planes de entrega nuevos')
            download_planes_entrega_from_sap(order_number)
            planes_entrega = get_planes_entrega()
            filtered_row = planes_entrega[planes_entrega['Referencia'] == reference]
            plan_entrega = filtered_row['Documento de Ventas'][filtered_row.index[0]]
            order_changes.loc[order_changes['reference'] == reference, 'plan_entrega'] = plan_entrega
            references_created.append(reference)
        else:
            plan_entrega = order_changes['plan_entrega'][index]
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
