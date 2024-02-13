import pandas as pd
import os
from .constants import orders_history_folder, tracking_history_folder
import datetime
import shutil
from .authorization import authorize_order
from .get_user_info import get_user_info
from .tracking import add_tracking


def save_order_to_history(orders: pd.DataFrame, uploaded_file_root: str):
    """Funcion en donde se guarda la orden que se ha subido al historial
    y donde tambien se guarda el .pdf del pedido"""
    now_time_dt = datetime.datetime.now()
    now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')
    client = orders['client'][orders.index[0]]
    order_number = str(orders['order_number'][orders.index[0]])
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
    pdf_save_path = os.path.join(sub_folder_save_path, po_file_name)

    authorize_order(sub_folder_save_path, now_time, client, order_number, reference)

    shutil.copy(uploaded_file_root, os.path.join(tracking_history_folder, po_file_name))
    excel_track_path = os.path.join(tracking_history_folder, excel_file_name)
    orders.to_excel(excel_track_path)

    add_tracking(id=now_time,
                 order=sub_folder_name,
                 state="Subido SAP",
                 author='{}/{}'.format(get_user_info()[0], get_user_info()[1]),
                 date=now_time,
                 orderpdf=os.path.join(tracking_history_folder, po_file_name),
                 comparisonexcel=os.path.join(tracking_history_folder, excel_file_name))

    file_dates = []

    for file in os.listdir(sub_folder_save_path):
        filename = os.fsdecode(file)

        name_ext = filename.split(".")

        if len(name_ext[0]) > len(now_time):
            file_dates.append(name_ext[0].split("+")[0])
        else:
            file_dates.append(name_ext[0])

    for file in os.listdir(sub_folder_save_path):
        filename = os.fsdecode(file)

        if filename.endswith(".txt") and "aprobacionsol" in filename:
            if file_dates.count(filename.split("+")[0]) == 1:
                print("FILE")
                print(filename)
                new_name = now_time + "+" + filename.split("+")[1] + "+" + filename.split("+")[2] + "+" + filename.split("+")[3]
                shutil.copy(os.path.join(sub_folder_save_path, filename), os.path.join(sub_folder_save_path, new_name))

                os.remove(os.path.join(sub_folder_save_path, filename))
