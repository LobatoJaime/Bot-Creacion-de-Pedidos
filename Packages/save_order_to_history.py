import pandas as pd
import os
from .constants import orders_history_folder, authorize_order_folder, usuarios_root
import datetime
import shutil
from .authorization import authorize_order
from .send_authorization import send_authorization_email
from .get_user_info import get_user_info


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
    pdf_save_path = os.path.join(sub_folder_save_path, po_file_name)

    # importar archivo Excel
    df = pd.read_excel(usuarios_root)

    aprobador_folder = None
    aprobador_email = None

    for idx, row in df.iterrows():
        if row['Usuario'].upper() == get_user_info()[1].upper():
            aprobador_folder = row['Usuario Aprobador'].upper()
            aprobador_email = row['Email Aprobador'].upper()

    if aprobador_folder is not None:
        sub_folder_auth_save_path = os.path.join(authorize_order_folder, aprobador_folder)

        if not os.path.isdir(sub_folder_auth_save_path):
            os.mkdir(sub_folder_auth_save_path)

        sub_folder_auth_save_path = os.path.join(sub_folder_auth_save_path, sub_folder_name)
        excel_auth_save_path = os.path.join(sub_folder_auth_save_path, excel_file_name)

        if not os.path.isdir(sub_folder_auth_save_path):
            os.mkdir(sub_folder_auth_save_path)

        orders.to_excel(excel_auth_save_path)
        po_file_name = '{}.pdf'.format(now_time)
        shutil.copy(uploaded_file_root, os.path.join(sub_folder_auth_save_path, po_file_name))
        pdf_save_auth_path = os.path.join(sub_folder_auth_save_path, po_file_name)

        print("Creando aprobacion")
        authorize_order(sub_folder_save_path, now_time)
        print("Enviando aprobacion")
        send_authorization_email(user=get_user_info(),
                                 client=str(client),
                                 order_number=str(order_number),
                                 receivers=[aprobador_email])



