import os
import shutil
import traceback

import pandas as pd

from AI_Engine.main import main as create_order_ai
from Packages.apply_to_sap.check_order_exists import check_order_exists
from Packages.apply_to_sap.check_sap_changes import check_sap_changes
from Packages.apply_to_sap.create_new_order_changes import create_new_order_changes
from Packages.apply_to_sap.create_order import create_order
from Packages.apply_to_sap.edit_existing_order import edit_existing_order
from Packages.constants import local_poppler_path, local_tesseract_exe_path, changes_history_folder
from Packages.create_comparison_table_excel import create_comparison_table_excel
from Packages.find_newest_dir import find_newest_dir
from Packages.format_data.format_data import FormatData
from Packages.get_planes_entrega import get_planes_entrega
from Packages.process_invoice.calculate_ship_out_date import calculate_ship_out_date
from Packages.process_invoice.change_client_name import change_client_name
from Packages.process_invoice.get_client_number import get_client_number
from Packages.save_deleted_order_changes import save_deleted_order_changes
from Packages.save_order_to_history import save_order_to_history
from Packages.script_download_new_planes_entrega_from_sap import script_download_new_planes_entrega_from_sap
from Packages.script_download_planes_entrega_from_sap import download_planes_entrega_from_sap
from Packages.validate_data.validate_data import validate_data


class UploadOrder:
    def __init__(self, uploaded_file_root: str, client_name: str):
        """Funcion que sube el pdf a SAP a traves de la AI, devuelve un error en caso de que
        no se pueda subir"""
        self.deleted_rows_log = pd.DataFrame()
        self.rows_to_delete = []
        self.backup_order_changes = None
        self.error_found = False
        self.order_changes = None
        self.en_periodo_congelado = None
        self.uploaded_file_root = uploaded_file_root
        self.client_name = client_name
        self.orders = None
        self.order_status = ['success', 'script_error', 'not_uploaded']

    def start(self):
        # Leer pdf
        self.create_order()

        # Descargar plan de entregas
        self.download_planes_entrega()
        print('Orden Existe: ', self.order_exists)

        # Comprobar si hubo errores con la application
        if self.error_found:  # Significa que hubo un error con el script
            if 'comparison_table.xlsx' not in os.listdir(find_newest_dir(changes_history_folder)):
                shutil.rmtree(find_newest_dir(changes_history_folder))
            return self.order_status[1]

        # Comprobar si el pedido es nuevo o no
        if self.order_exists == 'True' or 'Mixed' in self.order_exists:
            self.order_changes = check_sap_changes(self.orders, self.planes_entrega)
        if self.order_exists == 'False':
            # self.get_client_info()
            # self.order_changes = create_new_order_changes(self.orders, sap_code, client_name)
            return self.order_status[2]  # Luego cambiar para que acepte creacion de pedidos
        print(self.order_changes.to_string())
        self.backup_order_changes = self.order_changes

        # comprobar si la orden tiene cambios en periodo cong
        self.check_changes_in_periodo_congelado()
        if self.en_periodo_congelado:
            return self.order_status[2]
        
        # Aplicar cambios a SAP
        self.apply_changes_to_sap()
        if self.error_found:
            if 'comparison_table.xlsx' not in os.listdir(find_newest_dir(changes_history_folder)):
                shutil.rmtree(find_newest_dir(changes_history_folder))
            return self.order_status[1]
        if self.order_exists == 'False':
            client = self.order_changes['client'][self.order_changes.index[0]]
            self.orders['client'] = client
        save_order_to_history(self.orders, self.uploaded_file_root)
        
        self.download_new_planes_entrega()
        if self.error_found:
            if 'comparison_table.xlsx' not in os.listdir(find_newest_dir(changes_history_folder)):
                shutil.rmtree(find_newest_dir(changes_history_folder))
            return self.order_status[1]
        
        # Guardar cambios en la app
        self.save_changes()

    def create_order(self):
        self.orders: pd.DataFrame = create_order_ai(proveedor=self.client_name, pedidos_path=self.uploaded_file_root,
                                                    is_img_shown=False,
                                                    poppler_path=local_poppler_path,
                                                    tesseract_exe_path=local_tesseract_exe_path)
        data_ok, err_msg = validate_data(self.orders)
        if not data_ok:
            print(err_msg)
            return

    def download_planes_entrega(self):
        self.error_found = False
        self.error_message = None
        try:
            order_number = str(self.orders['order_number'][self.orders.index[0]])
            download_planes_entrega_from_sap(order_number)
            planes_entrega = get_planes_entrega()
            # Formatear cada campo de la tabla para poder subirlo a SAP
            format_data = FormatData(self.orders)
            self.orders = format_data.format_all()
            # Calcular la fecha de envio de ship_out_date
            self.orders = calculate_ship_out_date(self.orders)
            self.orders = get_client_number(self.orders, planes_entrega)
            self.orders = change_client_name(self.orders, planes_entrega)
            print(self.orders.to_string())
            # orders, planes_entrega = self.process_invoice()
            self.order_exists = check_order_exists(self.orders, planes_entrega)
            self.planes_entrega = planes_entrega
        except Exception as e:
            self.error_found = True
            self.error_message = traceback.format_exc()
            self.orders, self.order_exists, self.planes_entrega = None, None, None
        return

    def check_changes_in_periodo_congelado(self):
        for index in self.order_changes.index:
            en_periodo_congelado = self.order_changes['en_periodo_congelado']
            action = self.order_changes['action'][index]

            if en_periodo_congelado is True and action not in ('IN TRANSIT', 'NONE'):
                self.en_periodo_congelado = True

    def apply_changes_to_sap(self):
        try:
            if self.order_exists == 'True':
                edit_existing_order(self.order_changes)
            elif self.order_exists == 'False':
                create_order(self.order_changes)
            elif 'Mixed' in self.order_exists:
                references_to_create = self.order_exists.split('|')[1:]
                create_order(self.order_changes, references_to_create)
        except Exception as e:
            print('Ha ocurrido un error al ejecutar el script:')
            traceback.print_exc()
            self.error_found = True
        return
    
    def download_new_planes_entrega(self):
        try:
            # descargar el nuevo plan de entregas
            order_number = str(self.order_changes['order_number'][self.order_changes.index[0]])
            script_download_new_planes_entrega_from_sap(order_number)
        except Exception as e:
            traceback.print_exc()
            self.error_found = True
        return 
    
    def save_changes(self):
        save_deleted_order_changes(self.backup_order_changes, self.rows_to_delete,
                                   self.deleted_rows_log)
        folder = find_newest_dir(changes_history_folder)
        create_comparison_table_excel(folder_root=folder)

    def get_client_info(self):
        # ESPERAR A QUE HAGAN LOS CAMBIOS EN LA AI
        pass
