import pandas as pd
from .constants import changes_history_folder
import os
from .find_newest_dir import find_newest_dir
import shutil


def save_deleted_order_changes_approved(order_changes: pd.DataFrame, indexes_to_delete: list, deleted_rows_log: pd.DataFrame):
    """Funcion que guarda de en la carpeta de historial un excel con los cambios que fueron rechazados"""
    # crear tabla
    if not indexes_to_delete:
        headers = list(order_changes.columns)
        deleted_order_changes = pd.DataFrame(columns=headers)
    elif indexes_to_delete:
        indexes_to_drop = []
        for index in order_changes.index:
            if index not in indexes_to_delete:
                indexes_to_drop.append(index)
        deleted_order_changes = order_changes.drop(labels=indexes_to_drop)

    # anexar las columnas del log de columnas eliminadas al la tabla de cambios
    deleted_order_changes.insert(len(deleted_order_changes.columns), 'message', ' ')
    deleted_order_changes.insert(len(deleted_order_changes.columns), 'file_root', ' ')
    print("EMPTY", deleted_rows_log.empty)
    if not deleted_rows_log.empty:
        for index in deleted_order_changes.index:
            print("INDEX", index)
            row = deleted_rows_log.loc[index]
            print("ROW", row)
            message = row['message']
            file_root = row['file_root']
            file_root = save_file(file_root)
            deleted_order_changes['message'][index] = message
            deleted_order_changes['file_root'][index] = file_root

    # guardar tabla en la carpeta de historial
    print("SAVEDELETEDORDERCHANGES")
    print(deleted_order_changes.to_string())
    file_name = 'deleted_order_changes.xlsx'
    save_folder = find_newest_dir(changes_history_folder)
    deleted_order_changes.to_excel(os.path.join(save_folder, file_name), index=False)

def save_deleted_order_changes(order_changes: pd.DataFrame, indexes_to_delete: list, deleted_rows_log: pd.DataFrame):
    """Funcion que guarda de en la carpeta de historial un excel con los cambios que fueron rechazados"""
    # crear tabla
    if not indexes_to_delete:
        headers = list(order_changes.columns)
        deleted_order_changes = pd.DataFrame(columns=headers)
    elif indexes_to_delete:
        indexes_to_drop = []
        for index in order_changes.index:
            if index not in indexes_to_delete:
                indexes_to_drop.append(index)
        deleted_order_changes = order_changes.drop(labels=indexes_to_drop)

    # anexar las columnas del log de columnas eliminadas al la tabla de cambios
    deleted_order_changes.insert(len(deleted_order_changes.columns), 'message', ' ')
    deleted_order_changes.insert(len(deleted_order_changes.columns), 'file_root', ' ')
    print("EMPTY", deleted_rows_log.empty)
    if not deleted_rows_log.empty:
        for index in deleted_order_changes.index:
            print("INDEX", index)
            row = deleted_rows_log.loc[deleted_rows_log['rows_to_delete'] == str(index)]
            print("ROW", row)
            message = row['message'][row.index[0]]
            file_root = row['file_root'][row.index[0]]
            file_root = save_file(file_root)
            deleted_order_changes['message'][index] = message
            deleted_order_changes['file_root'][index] = file_root

    # guardar tabla en la carpeta de historial
    print(deleted_order_changes.to_string())
    file_name = 'deleted_order_changes.xlsx'
    save_folder = find_newest_dir(changes_history_folder)
    deleted_order_changes.to_excel(os.path.join(save_folder, file_name))

def save_file(file_root: str):
    """Funcion que guarda el archivo anexado en la
    carpeta de historial y actualiza el campo file root"""
    if type(file_root) == str:
        destiny_dir = find_newest_dir(changes_history_folder)
        file_name = file_root.split('/')[-1]
        new_file_root = os.path.join(destiny_dir, file_name)
        shutil.copy(file_root, new_file_root)
        return new_file_root
    else:
        return file_root
