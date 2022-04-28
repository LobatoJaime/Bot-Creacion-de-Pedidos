import shutil
import tkinter as tk
import traceback
from tkinter import ttk, messagebox
from ttkbootstrap import Style
import pandas as pd
import numpy as np
from multiprocessing import Process, Queue, freeze_support

from Packages.apply_to_sap.check_order_exists import check_order_exists
from Packages.format_data.format_data import FormatData
from Packages.get_planes_entrega import get_planes_entrega
from Packages.process_invoice.calculate_ship_out_date import calculate_ship_out_date
from Packages.process_invoice.change_client_name import change_client_name
from Packages.process_invoice.get_client_number import get_client_number
from Packages.script_download_planes_entrega_from_sap import download_planes_entrega_from_sap
from .create_order_window.create_order_loading_window import CreateOrderLoadingWindow
from ..apply_to_sap.check_sap_changes import check_sap_changes
from ..apply_to_sap.create_new_order_changes import create_new_order_changes
from ..apply_to_sap.create_order import create_order
from ..apply_to_sap.edit_changes_table import edit_changes_table
from ..apply_to_sap.edit_existing_order import edit_existing_order
from .apply_changes_loading_window import ApplyChangesLoadingWindow
from ..save_deleted_order_changes import save_deleted_order_changes
from ..save_order_to_history import save_order_to_history
from ..script_download_new_planes_entrega_from_sap import script_download_new_planes_entrega_from_sap
from ..validate_data.validate_data import validate_data
from ..create_comparison_table_excel import create_comparison_table_excel
from ..find_newest_dir import find_newest_dir
from ..constants import changes_history_folder, orders_history_folder
import os


class MenuBar:
    def __init__(self, parent_window: tk.Frame, gui):
        self.frame = ttk.Frame(parent_window, style='primary.TFrame')
        self.gui = gui
        self.upload_order_window_names = (
            'create_order', 'create_order_loading_screen', 'edit_order', 'edit_order_2', 'select_client')
        main_menu_button = ttk.Button(self.frame, text='Subir Nuevo Pedido', width=30,
                                      command=lambda: [self.new_order_pressed()])
        main_menu_button.grid(column=0, row=0, pady=0)
        settings_button = ttk.Button(self.frame, text='Ajustes', width=30,
                                     command=lambda: [self.settings_pressed()])
        settings_button.grid(column=1, row=0, pady=0)
        history_button = ttk.Button(self.frame, text='Historial de Cambios', width=30,
                                    command=lambda: [self.changes_history_pressed()])
        history_button.grid(column=2, row=0, pady=0)
        orders_history_button = ttk.Button(self.frame, text='Historial de Ordenes', width=30,
                                           command=lambda: [self.orders_history_pressed()])
        orders_history_button.grid(column=3, row=0, pady=0)
        installation_button = ttk.Button(self.frame, text='Guia de instalacion', width=30,
                                         command=lambda: [self.installation_guide_pressed()])
        installation_button.grid(column=4, row=0, pady=0)
        self.next_button = ttk.Button(self.frame, text='Siguiente paso', style='success.TButton',
                                      command=lambda: [self.import_important_vars(),
                                                       self.next_pressed(), self.save_important_vars()])
        self.next_button.grid(column=5, row=0, sticky='E')
        self.frame.columnconfigure(5, weight=1)
        self.import_important_vars()

    def new_order_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Crear un nuevo pedido?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.create_order_window.show()
        self.gui.active_window = 'create_order'

    def changes_history_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Abandonar pagina?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.active_window = 'changes_history'
        self.gui.changes_history_window.show()
        self.gui.changes_history_window.menu_bar.next_button.destroy()

    def orders_history_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Abandonar pagina?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.active_window = 'orders_history'
        self.gui.orders_history_window.show()
        self.gui.orders_history_window.menu_bar.next_button.destroy()

    def settings_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Abandonar pagina?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.active_window = 'settings'
        self.gui.settings_window.show()
        self.gui.settings_window.menu_bar.next_button.destroy()

    def installation_guide_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Abandonar pagina?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.active_window = 'installation_guide'
        self.gui.installation_guide_window.show()
        self.gui.installation_guide_window.menu_bar.next_button.destroy()

    def next_pressed(self):
        if self.gui.active_window == 'create_order':
            confirm_changes = messagebox.askyesno("Warning", 'Estas seguro que deseas continuar?\n'
                                                             'Comprueba que hayas escrito todos los campos de '
                                                             'manera correcta',
                                                  icon='info')
            if not confirm_changes:
                return
            self.uploaded_file_root: str = self.gui.create_order_window.file_uploaded_text['text']
            orders: pd.DataFrame = self.gui.create_order_window.create_order_table.read_table()
            data_ok, err_msg = validate_data(orders)
            if not data_ok:
                messagebox.showerror(title='Datos Incorrectos', message=err_msg)
                return
            if self.uploaded_file_root != 'Ningun archivo seleccionado':
                self.orders: pd.DataFrame = self.gui.create_order_window.create_order_table.read_table()
                print(self.orders.to_string())
                self.gui.active_window = 'create_order_loading_screen'
            else:
                messagebox.showwarning("Warning", 'Error, no se puede subir el pedido\n'
                                                  'Es obligatorio adjuntar la orden para poder proceder '
                                                  'con el proceso',
                                       icon='warning')
        if self.gui.active_window == 'create_order_loading_screen':
            self.queue = Queue()
            thread = Process(target=check_sap_database_in_bg, args=(self.orders, self.queue), daemon=True)
            thread.start()
            print('empezando loop ')
            # gui.draw_order_window2(thread, self.queue)
            create_order_loading_window = CreateOrderLoadingWindow(self.gui.root, self.gui, thread, self.queue)
            create_order_loading_window.show()
            print('loop terminado')
            result: list = self.queue.get()
            self.orders: pd.DataFrame = result[0]
            self.order_exists: bool = result[1]
            self.planes_entrega: pd.DataFrame = result[2]
            self.gui.error_found = result[3]
            self.gui.error_message = result[4]
            thread.terminate()
            thread.kill()
            if self.gui.error_found:  # Significa que hubo un error con el script
                if 'comparison_table.xlsx' not in os.listdir(find_newest_dir(changes_history_folder)):
                    shutil.rmtree(find_newest_dir(changes_history_folder))
                return
            # thread.join()
            self.gui.root.focus_force()
            if self.order_exists:
                self.order_changes = check_sap_changes(self.orders, self.planes_entrega)
                self.gui.active_window = 'edit_order'
            elif not self.order_exists:
                self.gui.active_window = 'select_client'
        if self.gui.active_window == 'select_client':
            self.gui.select_client_window.show()
            sap_code = None
            client_name = None
            try:
                client_name, sap_code = self.gui.select_client_window.select_client_table.get_sap_code()
            except IndexError:
                pass
            if sap_code is not None:
                self.order_changes = create_new_order_changes(self.orders, sap_code, client_name)
                self.gui.active_window = 'edit_order'
        if self.gui.active_window == 'edit_order':
            self.gui.edit_order_window.orders = self.order_changes
            self.gui.edit_order_window.show()
            self.gui.active_window = 'edit_order_2'
            self.save_important_vars()
            print(self.order_changes.to_string())
            return
        if self.gui.active_window == 'edit_order_2':
            confirm_changes = messagebox.askyesno("Warning", 'Estas seguro que deseas continuar?\n'
                                                             'Subir los pedidos a SAP es un proceso destructivo '
                                                             'y no se puede revertir. Asegurate de que la tabla '
                                                             'tiene la informacion correcta',
                                                  icon='info')
            if confirm_changes:
                self.rows_to_delete: list = self.gui.edit_order_window.edit_order_table.rows_to_delete
                self.deleted_rows_log: pd.DataFrame = self.gui.edit_order_window.edit_order_table.deleted_rows_log
                self.backup_order_changes = self.order_changes
                self.order_changes = edit_changes_table(self.order_changes, self.rows_to_delete)
                print(self.order_changes.to_string())
                self.error_queue = Queue()
                thread = Process(target=run_in_bg_sap_changes, args=(self.order_changes, self.order_exists,
                                                                     self.error_queue), daemon=True)
                thread.start()
                apply_changes_loading_window = ApplyChangesLoadingWindow(self.gui.root, self.gui, thread)
                apply_changes_loading_window.show()  # Queda esperando aqui a que se apliquen los cambios a SAP
                errors_queue: list = self.error_queue.get()
                self.gui.error_found = errors_queue[0]
                self.gui.error_message = errors_queue[1]
                if self.gui.error_found:  # Significa que hubo un error con el script
                    if 'comparison_table.xlsx' not in os.listdir(find_newest_dir(changes_history_folder)):
                        shutil.rmtree(find_newest_dir(changes_history_folder))
                    return
                self.gui.root.focus_force()
                if not self.order_exists:
                    client = self.order_changes['client'][self.order_changes.index[0]]
                    self.orders['client'] = client
                save_order_to_history(self.orders, self.uploaded_file_root)
                self.error_queue = Queue()
                thread = Process(target=run_in_bg_save_sap_changes, args=(self.order_changes,self.error_queue),
                                 daemon=True)
                thread.start()
                apply_changes_loading_window = ApplyChangesLoadingWindow(self.gui.root, self.gui, thread)
                apply_changes_loading_window.show()
                errors_queue: list = self.error_queue.get()
                self.gui.error_found = errors_queue[0]
                self.gui.error_message = errors_queue[1]
                if self.gui.error_found:  # Significa que hubo un error con el script
                    if 'comparison_table.xlsx' not in os.listdir(find_newest_dir(changes_history_folder)):
                        shutil.rmtree(find_newest_dir(changes_history_folder))
                    return
                self.gui.active_window = 'process_complete'
        if self.gui.active_window == 'process_complete':
            self.gui.root.focus_force()
            save_deleted_order_changes(self.backup_order_changes, self.rows_to_delete,
                                       self.deleted_rows_log)
            folder = find_newest_dir(changes_history_folder)
            create_comparison_table_excel(folder_root=folder)
            self.gui.process_complete_window.show()
            self.gui.process_complete_window.menu_bar.next_button.destroy()

    def save_important_vars(self):
        self.gui.uploaded_file_root = self.uploaded_file_root
        self.gui.orders = self.orders
        self.gui.order_exists = self.order_exists
        self.gui.planes_entrega = self.planes_entrega
        self.gui.order_changes = self.order_changes
        self.gui.backup_order_changes = self.backup_order_changes
        self.gui.rows_to_delete = self.rows_to_delete
        self.gui.deleted_rows_log = self.deleted_rows_log

    def import_important_vars(self):
        self.uploaded_file_root = self.gui.uploaded_file_root
        self.orders = self.gui.orders
        self.order_exists = self.gui.order_exists
        self.planes_entrega = self.gui.planes_entrega
        self.order_changes = self.gui.order_changes
        self.backup_order_changes = self.gui.backup_order_changes
        self.rows_to_delete = self.gui.rows_to_delete
        self.deleted_rows_log = self.gui.deleted_rows_log


# ------------- FUNCIONES QUE SE EJECUTAN CON MULTIPROCESSING ------------
def check_sap_database_in_bg(orders: pd.DataFrame, queue: Queue):
    """Funcion que se va a correr en el un procesador separado para que
    la interfaz no se congele mientras se corre el script para chequear los cambios
    necesarios"""
    error_found = False
    error_message = None
    try:
        order_number = str(orders['order_number'][orders.index[0]])
        download_planes_entrega_from_sap(order_number)
        planes_entrega = get_planes_entrega()
        # Formatear cada campo de la tabla para poder subirlo a SAP
        format_data = FormatData(orders)
        orders = format_data.format_all()
        # Calcular la fecha de envio de ship_out_date
        orders = calculate_ship_out_date(orders)
        orders = get_client_number(orders, planes_entrega)
        orders = change_client_name(orders, planes_entrega)
        print(orders.to_string())
        # orders, planes_entrega = self.process_invoice()
        order_exists = check_order_exists(orders, planes_entrega)
        result = [orders, order_exists, planes_entrega, error_found, error_message]
        queue.put(result)
    except Exception as e:
        error_found = True
        error_message = traceback.format_exc()
        result = [None, None, None, error_found, error_message]
        queue.put(result)
    return


def run_in_bg_sap_changes(order_changes: pd.DataFrame, order_exists: bool, error_queue: Queue):
    """Funcion que se va a correr en el un procesador separado para que
        la interfaz no se congele mientras se corre el script para aplicar los cambios
        necesarios"""
    try:
        if order_exists:
            edit_existing_order(order_changes)
        else:
            create_order(order_changes)
        error_queue.put([False, None])
    except Exception as e:
        print('Ha ocurrido un error al ejecutar el script:')
        error = traceback.format_exc()
        error_queue.put([True, error])
    return


def run_in_bg_save_sap_changes(order_changes: pd.DataFrame, error_queue: Queue):
    try:
        """Funcion que se va a correr en el un procesador separado para que
                la interfaz no se congele mientras se corre el script para descargar
                el nuevo plan de entregas"""
        order_number = str(order_changes['order_number'][order_changes.index[0]])
        script_download_new_planes_entrega_from_sap(order_number)
        error_queue.put([False, None])
    except Exception as e:
        error = traceback.format_exc()
        error_queue.put([True, error])
    return

# ------------------------------------------------------------------------
