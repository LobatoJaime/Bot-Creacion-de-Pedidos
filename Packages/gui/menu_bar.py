import shutil
import tkinter as tk
import traceback
from tkinter import ttk, messagebox
from ttkbootstrap import Style
import pandas as pd
import numpy as np
from multiprocessing import Process, Queue, freeze_support
import datetime


from Bot.send_email import send_email
from Packages.apply_to_sap.check_order_exists import check_order_exists
from Packages.format_data.format_data import FormatData
from Packages.get_planes_entrega import get_planes_entrega
from Packages.process_invoice.calculate_ship_out_date import calculate_ship_out_date
from Packages.process_invoice.change_client_name import change_client_name
from Packages.process_invoice.get_client_number import get_client_number
from Packages.script_download_planes_entrega_from_sap import download_planes_entrega_from_sap
from .create_order_window.create_order_loading_window import CreateOrderLoadingWindow
from .ask_authorization_window.ask_authorization_loading_window import AskAuthorizationLoadingWindow
from ..apply_to_sap.check_sap_changes import check_sap_changes
from ..apply_to_sap.create_new_order_changes import create_new_order_changes
from ..apply_to_sap.create_order import create_order
from ..apply_to_sap.edit_changes_table import edit_changes_table
from ..apply_to_sap.edit_existing_order import edit_existing_order
from .apply_changes_loading_window import ApplyChangesLoadingWindow
from ..save_deleted_order_changes import save_deleted_order_changes, save_deleted_order_changes_approved
from ..save_order_to_history import save_order_to_history
from ..script_download_new_planes_entrega_from_sap import script_download_new_planes_entrega_from_sap
from ..validate_data.validate_data import validate_data
from ..create_comparison_table_excel import create_comparison_table_excel, create_comparison_table_excel_approved
from ..find_newest_dir import find_newest_dir, find_newest_dir_approved
from ..constants import changes_history_folder, usuarios_root, authorize_order_folder, tracking_history_folder
from ..get_user_info import get_user_info
from ..send_authorization import send_authorization_email
from ..tracking import add_tracking
import os


class MenuBar:
    def __init__(self, parent_window: tk.Frame, gui):
        self.frame = ttk.Frame(parent_window, style='primary.TFrame')
        self.gui = gui
        self.upload_order_window_names = (
            'create_order', 'create_order_loading_screen', 'edit_order', 'edit_order_2', 'select_client')
        button_width = 30

        # importar archivo Excel
        df = pd.read_excel(usuarios_root)

        tipo_usuario = ""
        user = ""

        for idx, row in df.iterrows():
            if row['Usuario'].upper() == get_user_info()[1].upper():
                tipo_usuario = "A"
                user = row['Usuario'].upper()

            if row['Usuario Aprobador'].upper() == get_user_info()[1].upper():
                tipo_usuario = "B"
                user = row['Usuario'].upper()

            if row['Usuario Aprobador 2'].upper() == get_user_info()[1].upper():
                tipo_usuario = "B"
                user = row['Usuario'].upper()

        if tipo_usuario == "A":

            # main_menu_button = ttk.Button(self.frame, text='Subir Nuevo Pedido',
            #                               command=lambda: [self.new_order_pressed()])
            # main_menu_button.grid(column=0, row=0, pady=0)
            settings_button = ttk.Button(self.frame, text='Ajustes',
                                         command=lambda: [self.settings_pressed()])
            settings_button.grid(column=6, row=0, pady=0)
            history_button = ttk.Button(self.frame, text='Historial de Cambios',
                                        command=lambda: [self.changes_history_pressed()])
            history_button.grid(column=2, row=0, pady=0)
            orders_history_button = ttk.Button(self.frame, text='Historial de Ordenes',
                                               command=lambda: [self.orders_history_pressed()])
            orders_history_button.grid(column=3, row=0, pady=0)
            installation_button = ttk.Button(self.frame, text='Guia de instalacion',
                                             command=lambda: [self.installation_guide_pressed()])
            installation_button.grid(column=5, row=0, pady=0)
            ask_auth_button = ttk.Button(self.frame, text='Solicitar',
                                             command=lambda: [self.ask_authorization_pressed()])
            ask_auth_button.grid(column=0, row=0, pady=0)
            tracking_button = ttk.Button(self.frame, text='Seguimiento',
                                             command=lambda: [self.tracking_history_pressed()])
            tracking_button.grid(column=4, row=0, pady=0)

            tracking_button = ttk.Button(self.frame, text='Aprobados',
                                         command=lambda: [self.approved_orders_pressed()])
            tracking_button.grid(column=1, row=0, pady=0)

            self.next_button = ttk.Button(self.frame, text='Siguiente paso', style='success.TButton',
                                          command=lambda: [self.import_important_vars(),
                                                           self.next_pressed(), self.save_important_vars()])
            self.next_button.grid(column=8, row=0, sticky='E')

            for col_number in range(7):
                self.frame.columnconfigure(col_number, weight=1)
            self.import_important_vars()

        if tipo_usuario == "B":
            if not os.path.isdir(os.path.join(authorize_order_folder, user.upper())):
                os.mkdir(os.path.join(authorize_order_folder, user.upper()))

            authorize_button = ttk.Button(self.frame, text='Autorizaciones',
                                             command=lambda: [self.authorize_pressed()])
            authorize_button.grid(column=0, row=0, pady=0)
            # self.gui.authorize_order_window.show()
            self.gui.active_window = 'authorize_order'

    def authorize_pressed(self):
        self.gui.authorize_order_window.show()
        self.gui.active_window = 'authorize_order'

    def new_order_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Crear un nuevo pedido?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.create_order_window.show()
        self.gui.active_window = 'create_order'

    def tracking_history_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Crear un nuevo pedido?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.tracking_window.show()
        self.gui.active_window = 'tracking_window'
        self.gui.tracking_window.menu_bar.next_button.destroy()

    def approved_orders_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Crear un nuevo pedido?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.approved_orders.show()
        self.gui.active_window = 'approved_orders'
        self.gui.approved_orders.menu_bar.next_button.destroy()

    def ask_authorization_pressed(self):
        if self.gui.active_window in self.upload_order_window_names:
            confirm_changes = messagebox.askyesno("Warning", 'Crear un nuevo pedido?\n'
                                                             'Perderas el progreso del pedido actual',
                                                  icon='info')
            if not confirm_changes:
                return
        self.gui.ask_authorization_window.show()
        self.gui.active_window = 'ask_authorization'

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
            self.order_exists: str = result[1]  # 'True', 'False' o 'Mixed|Rxxxxxx'
            self.planes_entrega: pd.DataFrame = result[2]
            self.gui.error_found = result[3]
            self.gui.error_message = result[4]
            thread.terminate()
            thread.kill()
            print('Orden Existe: ', self.order_exists)
            if self.gui.error_found:  # Significa que hubo un error con el script
                if 'comparison_table.xlsx' not in os.listdir(find_newest_dir(changes_history_folder)):
                    shutil.rmtree(find_newest_dir(changes_history_folder))
                return
            # thread.join()
            self.gui.root.focus_force()
            if self.order_exists == 'True' or 'Mixed' in self.order_exists:
                self.order_changes = check_sap_changes(self.orders, self.planes_entrega)
                self.gui.active_window = 'edit_order'
            if self.order_exists == 'False':
                self.gui.active_window = 'select_client'
                self.gui.select_client_window.show()
                return
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
                print("ROWS DELETE")
                print(self.rows_to_delete)
                print("DELTETE_ROWS_LOG")
                print(self.deleted_rows_log)
                print("BACKUP ORDER")
                print(self.backup_order_changes)
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
                if self.order_exists == 'False':
                    client = self.order_changes['client'][self.order_changes.index[0]]
                    self.orders['client'] = client
                save_order_to_history(self.orders, self.uploaded_file_root)
                self.error_queue = Queue()
                thread = Process(target=run_in_bg_save_sap_changes, args=(self.order_changes, self.error_queue),
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
            from .process_complete_window.process_complete_window import ProcessCompleteWindow
            process_complete_window = ProcessCompleteWindow(self.gui.root, self.gui)
            process_complete_window.show()
            # self.gui.process_complete_window.show()
            process_complete_window.menu_bar.next_button.destroy()

        # PEDIR APROBACIÓN
        # --------------------------------------------------------------------------------------------------------------
        if self.gui.active_window == 'ask_authorization':
            confirm_changes = messagebox.askyesno("Warning", 'Estas seguro que deseas continuar?\n'
                                                             'Comprueba que hayas escrito todos los campos de '
                                                             'manera correcta',
                                                  icon='info')
            if not confirm_changes:
                return
            self.uploaded_file_root: str = self.gui.ask_authorization_window.file_uploaded_text['text']
            orders: pd.DataFrame = self.gui.ask_authorization_window.create_order_table.read_table()
            data_ok, err_msg = validate_data(orders)
            if not data_ok:
                messagebox.showerror(title='Datos Incorrectos', message=err_msg)
                return
            if self.uploaded_file_root != 'Ningun archivo seleccionado':
                self.orders: pd.DataFrame = self.gui.ask_authorization_window.create_order_table.read_table()
                print(self.orders.to_string())
                self.gui.active_window = 'ask_authorization_loading_screen'
            else:
                messagebox.showwarning("Warning", 'Error, no se puede subir el pedido\n'
                                                  'Es obligatorio adjuntar la orden para poder proceder '
                                                  'con el proceso',
                                       icon='warning')

        if self.gui.active_window == 'ask_authorization_loading_screen':
            self.queue = Queue()
            thread = Process(target=check_sap_database_in_bg, args=(self.orders, self.queue), daemon=True)
            thread.start()
            print('empezando loop ')
            # gui.draw_order_window2(thread, self.queue)
            create_order_loading_window = AskAuthorizationLoadingWindow(self.gui.root, self.gui, thread, self.queue)
            create_order_loading_window.show()
            print('loop terminado')
            result: list = self.queue.get()
            self.orders: pd.DataFrame = result[0]
            self.order_exists: str = result[1]  # 'True', 'False' o 'Mixed|Rxxxxxx'
            self.planes_entrega: pd.DataFrame = result[2]
            self.gui.error_found = result[3]
            self.gui.error_message = result[4]
            thread.terminate()
            thread.kill()
            print('Orden Existe: ', self.order_exists)
            if self.gui.error_found:  # Significa que hubo un error con el script
                if 'comparison_table.xlsx' not in os.listdir(find_newest_dir(changes_history_folder)):
                    shutil.rmtree(find_newest_dir(changes_history_folder))
                return
            # thread.join()
            self.gui.root.focus_force()
            if self.order_exists == 'True' or 'Mixed' in self.order_exists:
                self.order_changes = check_sap_changes(self.orders, self.planes_entrega)
                self.gui.active_window = 'edit_authorization_order'
            if self.order_exists == 'False':
                self.gui.active_window = 'select_authorization_client'
                self.gui.select_client_window.show()
                return

        if self.gui.active_window == 'select_authorization_client':
            self.gui.select_client_window.show()
            sap_code = None
            client_name = None
            try:
                client_name, sap_code = self.gui.select_client_window.select_client_table.get_sap_code()
            except IndexError:
                pass
            if sap_code is not None:
                self.order_changes = create_new_order_changes(self.orders, sap_code, client_name)
                self.gui.active_window = 'edit_authorization_order'

        if self.gui.active_window == 'edit_authorization_order':
            self.gui.edit_order_window.orders = self.order_changes
            self.gui.edit_order_window.show()
            self.gui.active_window = 'edit_authorization_order_2'
            self.save_important_vars()
            print(self.order_changes.to_string())
            return

        if self.gui.active_window == 'edit_authorization_order_2':

            email1 = ""
            user1 = ""

            # importar archivo Excel
            df = pd.read_excel(usuarios_root)

            for idx, row in df.iterrows():
                if row['Usuario'].upper() == get_user_info()[1].upper():
                    email1 = row["Email Aprobador"]
                    user1 = row["Usuario Aprobador"]

            gerente1 = messagebox.askyesno("Warning", 'Enviar aprobacion a \n' + str(email1), icon='info')

            if gerente1:
                self.rows_to_delete: list = self.gui.edit_order_window.edit_order_table.rows_to_delete
                self.deleted_rows_log: pd.DataFrame = self.gui.edit_order_window.edit_order_table.deleted_rows_log
                self.backup_order_changes = self.order_changes
                self.order_changes = edit_changes_table(self.order_changes, self.rows_to_delete)
                print(self.order_changes.to_string())

                now_time_dt = datetime.datetime.now()
                now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')

                path_user = os.path.join(authorize_order_folder, user1.upper())

                if not os.path.isdir(path_user):
                    os.mkdir(path_user)

                sub_folder_name = '{}_{}_{}'.format(self.order_changes['client'][self.order_changes.index[0]],
                                                    self.order_changes['order_number'][self.order_changes.index[0]],
                                                    self.order_changes['reference'][self.order_changes.index[0]])

                auth_folder = os.path.join(path_user, sub_folder_name)

                if not os.path.isdir(auth_folder):
                    os.mkdir(auth_folder)

                if len(self.rows_to_delete) > 0:
                    nombre_archivo_rows = os.path.join(auth_folder, str(now_time) + "-rows.txt")
                    with open(nombre_archivo_rows, "w") as archivo:
                        for r in self.rows_to_delete:
                            archivo.write(str(r) + "+")
                    archivo.close()

                else:
                    nombre_archivo_rows = os.path.join(auth_folder, str(now_time) + "-rows.txt")
                    with open(nombre_archivo_rows, "w") as archivo:
                        archivo.write("+")
                    archivo.close()

                self.order_changes.to_excel(os.path.join(auth_folder, str(now_time) + ".xlsx"), index=False)
                self.backup_order_changes.to_excel(os.path.join(auth_folder, str(now_time) + "-backup" + ".xlsx"), index=False)
                self.orders.to_excel(os.path.join(auth_folder, str(now_time) + "-orders" + ".xlsx"), index=False)
                self.deleted_rows_log.to_excel(os.path.join(auth_folder, str(now_time) + "-delete" + ".xlsx"), index=False)
                self.order_changes.to_excel(os.path.join(tracking_history_folder, str(now_time) + ".xlsx"), index=False)
                po_file_name = '{}.pdf'.format(now_time)
                shutil.copy(self.uploaded_file_root, os.path.join(auth_folder, po_file_name))
                shutil.copy(self.uploaded_file_root, os.path.join(tracking_history_folder, po_file_name))

                nombre_archivo = os.path.join(auth_folder, str(now_time) + ".txt")
                with open(nombre_archivo, "w") as archivo:
                    archivo.write(str(self.order_exists))
                archivo.close()

                send_authorization_email(user=get_user_info(),
                                         client=self.order_changes['client'][self.order_changes.index[0]],
                                         order_number=self.order_changes['order_number'][self.order_changes.index[0]],
                                         reference=self.order_changes['reference'][self.order_changes.index[0]],
                                         usuario_aprobador=str(user1),
                                         email_aprobador=str(email1))

                add_tracking(id=now_time,
                             order='{}_{}_{}'.format(self.order_changes['client'][self.order_changes.index[0]],
                                                     self.order_changes['order_number'][self.order_changes.index[0]],
                                                     self.order_changes['reference'][self.order_changes.index[0]]),
                             state="Solicitud",
                             author='{}/{}'.format(get_user_info()[0], get_user_info()[1]),
                             date=now_time,
                             orderpdf=os.path.join(tracking_history_folder, po_file_name),
                             comparisonexcel=os.path.join(tracking_history_folder, str(now_time) + ".xlsx"))

                self.gui.active_window = 'process_authorization_complete'

            else:
                email2 = ""
                user2 = ""

                # importar archivo Excel
                df = pd.read_excel(usuarios_root)

                for idx, row in df.iterrows():
                    if row['Usuario'].upper() == get_user_info()[1].upper():
                        email2 = row["Email Aprobador 2"]
                        user2 = row["Usuario Aprobador 2"]

                gerente2 = messagebox.askyesno("Warning", 'Enviar aprobacion a \n' + str(email2), icon='info')

                if gerente2:
                    self.rows_to_delete: list = self.gui.edit_order_window.edit_order_table.rows_to_delete
                    self.deleted_rows_log: pd.DataFrame = self.gui.edit_order_window.edit_order_table.deleted_rows_log
                    self.backup_order_changes = self.order_changes
                    self.order_changes = edit_changes_table(self.order_changes, self.rows_to_delete)
                    print(self.order_changes.to_string())

                    now_time_dt = datetime.datetime.now()
                    now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')

                    path_user = os.path.join(authorize_order_folder, user2.upper())

                    if not os.path.isdir(path_user):
                        os.mkdir(path_user)

                    sub_folder_name = '{}_{}_{}'.format(self.order_changes['client'][self.order_changes.index[0]],
                                                        self.order_changes['order_number'][self.order_changes.index[0]],
                                                        self.order_changes['reference'][self.order_changes.index[0]])

                    auth_folder = os.path.join(path_user, sub_folder_name)

                    if not os.path.isdir(auth_folder):
                        os.mkdir(auth_folder)

                    if len(self.rows_to_delete) > 0:
                        nombre_archivo_rows = os.path.join(auth_folder, str(now_time) + "-rows.txt")
                        with open(nombre_archivo_rows, "w") as archivo:
                            for r in self.rows_to_delete:
                                archivo.write(str(r) + "+")
                        archivo.close()

                    else:
                        nombre_archivo_rows = os.path.join(auth_folder, str(now_time) + "-rows.txt")
                        with open(nombre_archivo_rows, "w") as archivo:
                            archivo.write("+")
                        archivo.close()

                    self.order_changes.to_excel(os.path.join(auth_folder, str(now_time) + ".xlsx"), index=False)
                    self.backup_order_changes.to_excel(os.path.join(auth_folder, str(now_time) + "-backup" + ".xlsx"),
                                                       index=False)
                    self.orders.to_excel(os.path.join(auth_folder, str(now_time) + "-orders" + ".xlsx"), index=False)
                    self.deleted_rows_log.to_excel(os.path.join(auth_folder, str(now_time) + "-delete" + ".xlsx"),
                                                   index=False)
                    self.order_changes.to_excel(os.path.join(tracking_history_folder, str(now_time) + ".xlsx"),
                                                index=False)
                    po_file_name = '{}.pdf'.format(now_time)
                    shutil.copy(self.uploaded_file_root, os.path.join(auth_folder, po_file_name))
                    shutil.copy(self.uploaded_file_root, os.path.join(tracking_history_folder, po_file_name))

                    nombre_archivo = os.path.join(auth_folder, str(now_time) + ".txt")
                    with open(nombre_archivo, "w") as archivo:
                        archivo.write(str(self.order_exists))
                    archivo.close()

                    send_authorization_email(user=get_user_info(),
                                             client=self.order_changes['client'][self.order_changes.index[0]],
                                             order_number=self.order_changes['order_number'][
                                                 self.order_changes.index[0]],
                                             reference=self.order_changes['reference'][self.order_changes.index[0]],
                                             usuario_aprobador=str(user2),
                                             email_aprobador=str(email2))

                    add_tracking(id=now_time,
                                 order='{}_{}_{}'.format(self.order_changes['client'][self.order_changes.index[0]],
                                                         self.order_changes['order_number'][
                                                             self.order_changes.index[0]],
                                                         self.order_changes['reference'][self.order_changes.index[0]]),
                                 state="Solicitud",
                                 author='{}/{}'.format(get_user_info()[0], get_user_info()[1]),
                                 date=now_time,
                                 orderpdf=os.path.join(tracking_history_folder, po_file_name),
                                 comparisonexcel=os.path.join(tracking_history_folder, str(now_time) + ".xlsx"))

                    self.gui.active_window = 'process_authorization_complete'

        if self.gui.active_window == 'process_authorization_complete':
            from .process_complete_window.process_complete_authorization_window import ProcessCompleteAuthorizationWindow
            process_complete_authorization_window = ProcessCompleteAuthorizationWindow(self.gui.root, self.gui)
            process_complete_authorization_window.show()

    def run_sap(self, order_ch, order_ex, order, pdf_file, delete_rows_log, rows_delete, backup_order, client_name):
        """Function only runs sap changes"""
        self.deleted_rows_log = delete_rows_log
        self.backup_order_changes = backup_order
        self.rows_to_delete = rows_delete
        self.error_queue = Queue()
        thread = Process(target=run_in_bg_sap_changes, args=(order_ch, order_ex,
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
        if order_ex == 'False':
            client = order_ch['client'][order_ch.index[0]]
            order['client'] = client
        save_order_to_history(order, pdf_file)
        self.error_queue = Queue()
        thread = Process(target=run_in_bg_save_sap_changes, args=(order_ch, self.error_queue),
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

        self.gui.root.focus_force()
        save_deleted_order_changes_approved(self.backup_order_changes, self.rows_to_delete,
                                   self.deleted_rows_log)
        folder = find_newest_dir_approved(changes_history_folder, client_name)
        create_comparison_table_excel_approved(folder_root=folder)
        from .process_complete_window.process_complete_window import ProcessCompleteWindow
        process_complete_window = ProcessCompleteWindow(self.gui.root, self.gui)
        process_complete_window.show()
        # self.gui.process_complete_window.show()
        process_complete_window.menu_bar.next_button.destroy()

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


def run_in_bg_sap_changes(order_changes: pd.DataFrame, order_exists: str, error_queue: Queue):
    """Funcion que se va a correr en el un procesador separado para que
        la interfaz no se congele mientras se corre el script para aplicar los cambios
        necesarios"""
    try:
        if order_exists == 'True':
            edit_existing_order(order_changes)
        elif order_exists == 'False':
            create_order(order_changes)
        elif 'Mixed' in order_exists:
            references_to_create = order_exists.split('|')[1:]
            create_order(order_changes, references_to_create)
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
