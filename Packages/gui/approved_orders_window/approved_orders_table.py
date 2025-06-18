from Packages.constants import approved_order_folder
import tkinter as tk
from tkinter import ttk, messagebox
import pandas as pd
import os
import datetime as dt
from ...get_user_info import get_user_info
import shutil
from multiprocessing import Process, Queue
from ...save_order_to_history import save_order_to_history
from ..apply_changes_loading_window import ApplyChangesLoadingWindow



class ApprovedOrdersTable:
    """Clase donde se crea el objeto visual para
    visualizar todas las ordenes que han sido subidas
    por cliente y nro de orden"""

    def __init__(self, parent_window: tk.Frame, menu_bar):
        self.parent_window = parent_window
        self.client_names = []
        self.menu_bar = menu_bar
        # Hacer lista de los cambios hechos
        self.list_frame = ttk.Frame(parent_window)
        self.list_frame.rowconfigure(0, weight=1)
        self.list_frame.columnconfigure(0, weight=1)
        self.approved_order_folder_user = os.path.join(approved_order_folder, get_user_info()[1].upper())

        if not os.path.isdir(self.approved_order_folder_user):
            os.mkdir(self.approved_order_folder_user)

        folders_names = os.listdir(self.approved_order_folder_user)

        folders_names = sorted(folders_names,
                               key=lambda x: os.path.getmtime(os.path.join(self.approved_order_folder_user, x)), reverse=True)
        headers = ['Cliente', 'Numero de Orden', 'Referencia']
        self.tree = ttk.Treeview(self.list_frame, columns=headers,
                                 show='headings')
        for value in headers:
            self.tree.heading(value, text=value, anchor='w')
            self.tree.column(value, anchor='w')
        self.tree.column(headers[2], width=100)
        self.order_numbers = []
        for folder in folders_names:
            folder_splitted = folder.split('_')
            client_name = folder_splitted[0]
            if client_name not in self.client_names:
                self.client_names.append(client_name)
            order_number = folder_splitted[1]
            reference = folder_splitted[2]
            self.order_numbers.append(order_number)
            self.tree.insert('', 'end', values=(client_name, order_number, reference))
        self.tree.grid(row=0, column=0, sticky='nsew')
        # add a scrollbar
        scrollbar = ttk.Scrollbar(self.list_frame, orient=tk.VERTICAL, command=self.tree.yview)
        self.tree.configure(yscroll=scrollbar.set)
        scrollbar.grid(row=0, column=1, sticky='ns')
        scrollbarX = ttk.Scrollbar(self.list_frame, orient=tk.HORIZONTAL, command=self.tree.xview)
        self.tree.configure(xscroll=scrollbarX.set)
        scrollbarX.grid(row=1, column=0, sticky='ew')
        self.tree.bind("<Double-1>", self.value_clicked)
        # -----------------Filtros---------------------------------------------
        self.rows_id_back_up = self.tree.get_children()
        self.client_names.append('Ver todos')
        self.filter_box = ttk.Labelframe(self.parent_window, text='Ajustes de Filtros', padding=10)
        self.filter_box.place(relx=0.83, rely=0.05, relwidth=.15)
        self.filter_box.rowconfigure(0, weight=1)
        self.filter_box.rowconfigure(1, weight=1)
        self.filter_box.columnconfigure(0, weight=1)
        self.filter_box.columnconfigure(1, weight=1)
        client_title = ttk.Label(self.filter_box, text='Cliente:').grid(row=0, column=0, sticky='w')
        self.client_names.sort()
        self.client_filter = ttk.Combobox(self.filter_box, values=self.client_names, state='readonly')
        self.client_filter.bind("<<ComboboxSelected>>", lambda event: self.filter_clicked())
        self.client_filter.grid(row=1, column=0, sticky='w')
        self.client_filter.set('Ver todos')

    def value_clicked(self, event):
        try:
            self.history_tree_frame.destroy()
            self.history_tree.destroy()
            self.sub_tree.destroy()
        except AttributeError:
            pass
        current_item = self.tree.focus()
        self.main_item_clicked = self.tree.focus()
        clicked_row = self.tree.item(current_item)
        selection_client = clicked_row['values'][0]
        selection_order_number = clicked_row['values'][1]
        selection_reference = clicked_row['values'][2]
        for order_number in self.order_numbers:
            try:
                if int(order_number) == selection_order_number:
                    selection_order_number = order_number
            except ValueError:
                pass
        self.selected_client = selection_client
        self.selected_order_number = selection_order_number
        self.selected_reference = selection_reference
        folder_name = '{}_{}_{}'.format(selection_client, selection_order_number, selection_reference)
        self.folder_root = os.path.join(self.approved_order_folder_user, folder_name)
        all_file_names = os.listdir(self.folder_root)
        all_file_names = sorted(all_file_names,
                                key=lambda x: os.path.getmtime(os.path.join(self.folder_root, x)), reverse=True)
        file_names = []
        # Mostrar solo los excels
        for file in all_file_names:
            if '.pdf' not in file and '.txt' not in file and '-orders' not in file and '-delete' not in file and '-backup' not in file:
                file_names.append(file)

        # Crear sublista
        self.sub_list_frame = ttk.Frame(self.parent_window)
        self.sub_list_frame.rowconfigure(0, weight=1)
        self.sub_list_frame.columnconfigure(0, weight=1)
        headers = ['Fecha de pedido']
        self.sub_tree = ttk.Treeview(self.sub_list_frame, columns=headers,
                                     show='headings')

        for value in headers:
            self.sub_tree.heading(value, text=value, anchor='w')
        self.upload_dates = []
        self.row_tags = {}
        tag = 0
        for file_name in file_names:
            upload_date = file_name.split('.')[0]
            self.upload_dates.append(upload_date)
            self.sub_tree.insert('', tk.END, values=upload_date, tags=(str(tag),))
            self.row_tags[upload_date] = str(tag)
            tag = tag + 1
        self.sub_tree.grid(row=0, column=0, sticky='ns')
        # add a scrollbar
        scrollbar = ttk.Scrollbar(self.sub_list_frame, orient=tk.VERTICAL, command=self.sub_tree.yview)
        self.sub_tree.configure(yscroll=scrollbar.set)
        scrollbar.grid(row=0, column=1, sticky='ns')
        scrollbarX = ttk.Scrollbar(self.sub_list_frame, orient=tk.HORIZONTAL, command=self.sub_tree.xview)
        self.sub_tree.configure(xscroll=scrollbarX.set)
        scrollbarX.grid(row=1, column=0, sticky='ew')
        self.sub_tree.bind("<Double-1>", self.sub_value_clicked)
        self.sub_list_frame.place(rely=0.05, relx=0.27, relheight=0.92, relwidth=.1)
        self.sub_tree.configure(selectmode='none')
        # Hacer diccionario para ver a que elementos se les ha hecho click
        self.clicked_values = {}
        for upload_date in self.upload_dates:
            self.clicked_values[upload_date] = False

    def sub_value_clicked(self, event):
        def open_pdf(file_root):
            try:
                os.startfile(file_root)
            except FileNotFoundError:
                pass

        def upload_SAP(folder_path, client):
            confirm_changes = messagebox.askyesno("Warning", 'Desea subir los cambios a SAP?\n',
                                                  icon='info')
            if not confirm_changes:
                return

            all_file_names = os.listdir(folder_path)

            excel_name = None
            txt_name = None
            excel_orders_name = None
            pdf_name = None
            excel_delete_rows_name = None
            txt_rows_name = None
            excel_backup_name = None

            # Mostrar solo los excels
            for file in all_file_names:
                if '.xlsx' in file and "orders" not in file:
                    excel_name = file

                if '.xlsx' in file and "orders" in file:
                    excel_orders_name = file

                if '.xlsx' in file and "delete" in file:
                    excel_delete_rows_name = file

                if '.xlsx' in file and "backup" in file:
                    excel_backup_name = file

                if '.txt' in file and "rows" not in file:
                    txt_name = file

                if '.txt' in file and "rows" in file:
                    txt_rows_name = file

                if '.pdf' in file:
                    pdf_name = file

            if excel_name is not None and txt_name is not None and excel_orders_name is not None and pdf_name is not None and excel_delete_rows_name is not None and txt_rows_name is not None and excel_backup_name is not None:
                self.order_changes = pd.read_excel(os.path.join(folder_path, excel_name), dtype={'order_number': str}).reset_index(drop=True)
                self.orders = pd.read_excel(os.path.join(folder_path, excel_orders_name), dtype={'order_number': str}).reset_index(drop=True)
                self.delete_rows_log = pd.read_excel(os.path.join(folder_path, excel_delete_rows_name))
                self.backup_order = pd.read_excel(os.path.join(folder_path, excel_backup_name))

                with open(os.path.join(folder_path, txt_name)) as f:
                    self.order_exists = f.readline()

                self.rows_delete = []

                with open(os.path.join(folder_path, txt_rows_name)) as f:
                    row_list = f.readline().split("+")
                    print(row_list)
                    for l in row_list:
                        if l != '':
                            self.rows_delete.append(int(l))

                print("ORDER CHANGES")
                print(self.order_changes)
                print("ORDER EXISTS")
                print(self.order_exists)
                print("ORDERS")
                print(self.orders)
                print("DELETE LOG")
                print(self.delete_rows_log)
                print("ROWS DELETE")
                print(self.rows_delete)

                self.menu_bar.run_sap(self.order_changes, self.order_exists, self.orders, os.path.join(folder_path, pdf_name), self.delete_rows_log, self.rows_delete, self.backup_order, client)

            else:
                messagebox.showinfo(title='Error', message='No se encuentran los archivos necesarios para realizar la subida.')

        current_item = self.sub_tree.focus()
        clicked_row = self.sub_tree.item(current_item)
        upload_date = clicked_row['values'][0]
        if not self.clicked_values[upload_date]:
            # resaltar color
            tag = self.row_tags[upload_date]
            self.sub_tree.tag_configure(tag, background='#79ffb2')
            self.clicked_values[upload_date] = True
        else:
            # quitar resaltado
            tag = self.row_tags[upload_date]
            self.sub_tree.tag_configure(tag, background='#ECF0F1')
            self.clicked_values[upload_date] = False

        # Crear dataframe de la tabla a mostrar
        client = self.selected_client
        order_number = self.selected_order_number
        reference = self.selected_reference
        folder_path = os.path.join(self.approved_order_folder_user, '{}_{}_{}'.format(client, order_number, reference))
        file_paths = []
        for upload_date in self.clicked_values:
            if self.clicked_values[upload_date]:
                path = os.path.join(folder_path, '{}.xlsx'.format(upload_date))
                file_paths.append(path)
        orders_history = pd.DataFrame(columns=['upload_date', 'order_number', 'client', 'reference', 'sap_code',
                                               'quantity', 'ship_out_date', 'arrival_date', 'confidence'])
        all_upload_dates = []

        for file_path in file_paths:
            upload_date = file_path.split('\\', )[-1].split('.')[0]
            client_folder = file_path.split('\\', )[-2]
            all_upload_dates.append(upload_date)
            data = pd.read_excel(file_path, dtype=str)
            order_dataframe = pd.DataFrame(data, dtype=str)
            upload_dates = []
            for i in range(order_dataframe.shape[0]):
                upload_dates.append(upload_date)
            order_dataframe.insert(0, 'upload_date', upload_dates)
            orders_history = orders_history._append(order_dataframe, ignore_index=True)

            if len(file_paths) == 1:

                info_box = ttk.Labelframe(self.parent_window, text='Informacion de Ordenes', padding=10)
                info_box.place(relx=0.83, rely=0.2, relwidth=.15)
                info_box.rowconfigure(0, weight=1)
                info_box.rowconfigure(1, weight=1)
                info_box.rowconfigure(2, weight=1)
                info_box.rowconfigure(3, weight=1)
                info_box.rowconfigure(4, weight=1)
                info_box.rowconfigure(5, weight=1)
                info_box.rowconfigure(6, weight=1)
                info_box.rowconfigure(8, weight=1)

                info_box.columnconfigure(0, weight=1)
                info_box.columnconfigure(1, weight=1)

                aux = ttk.Label(info_box, text=client_folder).grid(row=1, column=0, sticky='w')
                aux = ttk.Label(info_box, text="").grid(row=2, column=0, sticky='w')
                aux = ttk.Label(info_box, text=upload_date).grid(row=3, column=0, sticky='w')
                aux = ttk.Label(info_box, text="").grid(row=4, column=0, sticky='w')
                aux = ttk.Label(info_box, text="").grid(row=8, column=0, sticky='w')

                pdf_button = ttk.Button(info_box, text='Ver PDF', command=lambda: [open_pdf(file_path.replace("xlsx", "pdf"))])
                pdf_button.grid(column=0, row=5, pady=0)

                label_aprobacion = ttk.Label(info_box, text="").grid(row=6, column=0, sticky='w')

                now_time_dt = dt.datetime.now()
                now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')

                firm_button = ttk.Button(info_box, text='Subir a SAP', command=lambda: [upload_SAP(folder_path, client)])
                firm_button.grid(column=0, row=7, pady=0)

        for index in orders_history.index:
            ship_out_date_raw = orders_history['ship_out_date'][index].split(' ')[0]
            try:
                ship_out_date_dt = dt.datetime.strptime(ship_out_date_raw, '%Y-%m-%d')
            except ValueError:
                ship_out_date_dt = dt.datetime.strptime(ship_out_date_raw, '%d/%m/%Y')
            ship_out_date = ship_out_date_dt.strftime('%d/%m/%Y')
            orders_history['ship_out_date'][index] = ship_out_date

        print(orders_history.to_string())

        if orders_history.empty:
            self.history_tree_frame.destroy()
            self.history_tree.destroy()
            return

        # Mostrar tabla en la gui
        try:
            self.history_tree_frame.destroy()
            self.history_tree.destroy()
        except AttributeError:
            pass
        self.history_tree_frame = ttk.Frame(self.parent_window, height=190, width=200)
        self.history_tree_frame.rowconfigure(0, weight=1)
        self.history_tree_frame.columnconfigure(0, weight=1)
        headers = ['Numero de Orden', 'Cliente', 'Codigo SAP', 'Referencia',
                   'Cantidad', 'Fecha Reparto', 'Fecha de llegada', "Periodo congelado", "Accion"]
        self.history_tree = ttk.Treeview(self.history_tree_frame, columns=headers, show='headings')
        col_n = 0
        for value in headers:
            self.history_tree.heading(value, text=value, anchor='w')
            self.history_tree.column(value, stretch=False, width=150)
            col_n = col_n + 1

        # para alternar colores en la tabla si hay mas de un pedido
        tags_dict = {}
        i = 0
        for upload_date in all_upload_dates:
            if i // 2 == i / 2:
                tags_dict[upload_date] = 0
            else:
                tags_dict[upload_date] = 1
            i = i + 1

        for index in orders_history.index:
            order_number = str(orders_history['order_number'][index])
            client = orders_history['client'][index]
            sap_code = orders_history['sap_code'][index]
            reference = orders_history['reference'][index]
            quantity = orders_history['quantity'][index]
            ship_out_date = orders_history['ship_out_date'][index]
            arrival_date = orders_history['arrival_date'][index]
            congelado_value = orders_history['en_periodo_congelado'][index]
            action_value = orders_history['action'][index]
            values = (order_number, client, sap_code,
                      reference, quantity, ship_out_date, arrival_date, congelado_value, action_value)
            tag = tags_dict[upload_date]
            self.history_tree.insert('', tk.END, values=values, tags=(tag,))
            self.history_tree.grid(row=0, column=0, sticky='ns')

        # add a vertical scrollbar
        scrollbar = ttk.Scrollbar(self.history_tree_frame, orient=tk.VERTICAL, command=self.history_tree.yview)
        self.history_tree.configure(yscroll=scrollbar.set)
        scrollbar.grid(row=0, column=1, sticky='ns')

        # add horizontal scrollbar
        scrollbar_x = ttk.Scrollbar(self.history_tree_frame, orient=tk.HORIZONTAL, command=self.history_tree.xview)
        self.history_tree.configure(xscroll=scrollbar_x.set)
        scrollbar_x.grid(row=1, column=0, sticky='wes', columnspan=2)

        self.history_tree_frame.place(rely=0.05, relx=0.37, relheight=0.92, relwidth=(1 - .56))
        self.history_tree.configure(selectmode='none')
        self.history_tree.tag_configure(tagname=1, background='lightgrey')

    def filter_clicked(self):
        try:
            self.sub_list_frame.destroy()
            self.history_tree_frame.destroy()
        except AttributeError:
            pass
        selected_client_name = self.client_filter.get()
        for iid in self.rows_id_back_up:
            self.tree.reattach(iid, '', 'end')
            # filtrar el valor deseado
            item = self.tree.item(iid)
            client_name = item['values'][0]
            if selected_client_name != 'Ver todos':
                if client_name != selected_client_name:
                    self.tree.detach(iid)

