import datetime
from ..constants import changes_history_folder, resources_folder, planes_entrega_folder
import os
import shutil


def save_old_plan_entrega(order_number: str, client: str):
    """Funcion utilizada para guardar el plan de entrega
    çprevio a los cambios realizados por la aplicacion"""
    now_time_dt = datetime.datetime.now()
    now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')
    folder_name = '{}_{}_{}'.format(client, order_number, now_time)
    save_folder_root = os.path.join(changes_history_folder, folder_name)
    os.mkdir(save_folder_root)
    filename = "planes_entrega_{}.xlsx".format(order_number)
    old_file_root = os.path.join(planes_entrega_folder, filename)
    shutil.copy(old_file_root, os.path.join(save_folder_root, 'old_planes_entrega.xlsx'))
    os.remove(os.path.join(planes_entrega_folder, filename))



