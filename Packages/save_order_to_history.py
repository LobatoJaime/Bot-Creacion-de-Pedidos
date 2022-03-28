import pandas as pd
import os
from .constants import orders_history_folder
import datetime
import shutil


def save_order_to_history(orders: pd.DataFrame, uploaded_file_root: str):
    """Funcion en donde se guarda la orden que se ha subido al historial
    y donde tambien se guarda el .pdf del pedido"""
    now_time_dt = datetime.datetime.now()
    now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')
    client = orders['client'][orders.index[0]]
    order_number = orders['order_number'][orders.index[0]]
    reference = orders['reference'][orders.index[0]]
    excel_file_name = '{}.xlsx'.format(now_time)
    sub_folder_name = '{}_{}_{}'.format(client, order_number, reference)
    sub_folder_save_path = os.path.join(orders_history_folder, sub_folder_name)
    excel_save_path = os.path.join(sub_folder_save_path, excel_file_name)
    if not os.path.isdir(sub_folder_save_path):
        os.mkdir(sub_folder_save_path)

    orders.to_excel(excel_save_path)
    po_file_name = '{}.pdf'.format(now_time)
    shutil.copy(uploaded_file_root, os.path.join(sub_folder_save_path, po_file_name))
