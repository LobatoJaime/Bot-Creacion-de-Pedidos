from Packages.constants import changes_history_folder
import tkinter as tk
from tkinter import ttk, messagebox
import pandas as pd
import os
import shutil
import numpy as np
from Packages.gui.changes_history_window.show_delete_info_pop_up import ShowDeleteInfoPopUp
from ttkbootstrap.widgets.calendar import DateEntry
# from ttkbootstrap.calendar import DateEntry
import datetime as dt


class ChangesHistoryTable:
    """Clase donde se crea el objeto visual
    que permite ver los cambios realizados"""

    def __init__(self, parent_window: tk.Frame, root: tk.Tk):
        self.parent_window = parent_window
        self.root = root
        # Hacer lista de los cambios hechos
        self.list_frame = ttk.Frame(parent_window, height=190)
        self.list_frame.rowconfigure(0, weight=1)
        folders_names = os.listdir(changes_history_folder)
        folders_names = sorted(folders_names,
                               key=lambda x: os.path.getmtime(os.path.join(changes_history_folder, x)), reverse=True)
        folders_names.remove('desktop.ini')
        headers = ['Cliente', 'Numero de Orden', 'Fecha']
        self.tree = ttk.Treeview(self.list_frame, columns=headers,
                                 show='headings')
        for value in headers:
            self.tree.heading(value, text=value, anchor='w')
        self.order_numbers = []
        self.client_names = []
        self.dates = []
        for folder in folders_names:
            folder_splitted = folder.split('_', 2)
            client_name = folder_splitted[0]
            order_number = folder_splitted[1]
            self.order_numbers.append(order_number)
            date = folder_splitted[2]
            if client_name not in self.client_names:
                self.client_names.append(client_name)
            if date not in self.dates:
                self.dates.append(date)
            self.tree.insert('', tk.END, values=(client_name, order_number, date))
        self.tree.grid(row=0, column=0, sticky='ns')
        # add a scrollbar
        scrollbar = ttk.Scrollbar(self.list_frame, orient=tk.VERTICAL, command=self.tree.yview)
        self.tree.configure(yscroll=scrollbar.set)
        scrollbar.grid(row=0, column=1, sticky='ns')
        self.tree.bind("<Double-1>", self.value_clicked)
        self.tree.bind("<Button-3>", self.on_right_click)
        # -----------------Filtros---------------------------------------------
        self.rows_id_back_up = self.tree.get_children()
        self.client_names.append('Ver todos')
        self.dates.append('Ver todos')
        self.filter_box = ttk.Labelframe(self.parent_window, text='Ajustes de Filtros', padding=10)
        self.filter_box.place(relx=0.77, rely=0.05, relwidth=.2)
        client_title = ttk.Label(self.filter_box, text='Cliente:').grid(row=0, column=0, sticky='w')
        self.client_filter = ttk.Combobox(self.filter_box, values=self.client_names, state='readonly')
        self.client_filter.bind("<<ComboboxSelected>>", lambda event: self.filter_clicked(event))
        self.client_filter.grid(row=1, column=0, sticky='w')
        self.client_filter.set('Ver todos')
        lower_date_title = ttk.Label(self.filter_box, text='Desde:').grid(row=2, column=0, sticky='w')
        self.lower_date_filter = DateEntry(self.filter_box, startdate=dt.datetime(2022, 1, 1))
        self.lower_date_filter.grid(row=3, column=0, sticky='w')
        higher_date_title = ttk.Label(self.filter_box, text='Hasta:').grid(row=4, column=0, sticky='w')
        self.higher_date_filter = DateEntry(self.filter_box)
        self.higher_date_filter.grid(row=5, column=0, sticky='w')
        self.filter_box.bind("<Enter>", self.filter_clicked)
        self.filter_box.bind("<Leave>", self.filter_clicked)
        self.list_frame.bind("<Enter>", self.filter_clicked)
        self.list_frame.bind("<Leave>", self.filter_clicked)
        self.parent_window.bind("<Enter>", self.filter_clicked)
        self.parent_window.bind("<Leave>", self.filter_clicked)

    def value_clicked(self, event):
        try:
            self.table_frame.destroy()
        except AttributeError:
            pass
        current_item = self.tree.focus()
        clicked_row = self.tree.item(current_item)
        selection_client = clicked_row['values'][0]
        selection_order_number = clicked_row['values'][1]
        for order_number in self.order_numbers:
            try:
                if int(order_number) == selection_order_number:
                    selection_order_number = order_number
            except ValueError:
                pass
        selection_date = clicked_row['values'][2]
        folder_name = '{}_{}_{}'.format(selection_client, selection_order_number, selection_date)
        folder_root = os.path.join(changes_history_folder, folder_name)

        # leer planes de entrega viejos
        old_file_root = os.path.join(folder_root, 'old_planes_entrega.xlsx')
        data_old = pd.read_excel(old_file_root)
        planes_entrega_old = pd.DataFrame(data=data_old, dtype=str)
        # Eliminar los envios de cantidad pendiente == 0
        for index in planes_entrega_old.index:
            pending_qty = planes_entrega_old['Cantidad Pendiente'][index]
            if pending_qty in (0, 0.0, '0', '0.0'):
                planes_entrega_old = planes_entrega_old.drop(index=index)
        planes_entrega_old = planes_entrega_old.reset_index()


        # leer planes de entrega nuevos
        new_file_root = os.path.join(folder_root, 'new_planes_entrega.xlsx')
        data_new = pd.read_excel(new_file_root)
        planes_entrega_new = pd.DataFrame(data=data_new, dtype=str)
        planes_entrega_new = planes_entrega_new[planes_entrega_new['Cantidad Pendiente'] != '0.0']
        # Eliminar los envios de cantidad pendiente == 0
        for index in planes_entrega_new.index:
            pending_qty = planes_entrega_new['Cantidad Pendiente'][index]
            if pending_qty in (0, 0.0, '0', '0.0'):
                planes_entrega_new = planes_entrega_new.drop(index=index)
        planes_entrega_new = planes_entrega_new.reset_index()

        # hacer comparacion de tablas -------------------------------------------------------
        ship_out_dates = []
        references = []
        old_quantities = []
        new_quantities = []
        status_list = []
        messages = []
        file_roots = []

        for index in planes_entrega_new.index:
            new_row = planes_entrega_new.iloc[index]
            # comprobar si la fecha ya existe para esa referencia
            reference = new_row['Referencia']
            ship_out_date = new_row['Fecha reparto']
            quantity = new_row['Cantidad de Pedido']
            filtered_row = planes_entrega_old.loc[
                (planes_entrega_old['Referencia'] == reference) &
                (planes_entrega_old['Fecha reparto'] == ship_out_date)]

            if filtered_row.empty:
                ship_out_dates.append(ship_out_date)
                references.append(reference)
                old_quantities.append(0)
                new_quantities.append(quantity)
            else:
                ship_out_dates.append(ship_out_date)
                references.append(reference)
                old_quantities.append(filtered_row['Cantidad de Pedido'][filtered_row.index[0]])
                new_quantities.append(quantity)
            status_list.append('ACCEPTED')
            messages.append(np.NaN)
            file_roots.append(np.NaN)
        for index in planes_entrega_old.index:
            old_row = planes_entrega_old.iloc[index]
            # comprobar si la fecha ya existe para esa referencia
            reference = old_row['Referencia']
            ship_out_date = old_row['Fecha reparto']
            quantity = old_row['Cantidad de Pedido']
            filtered_row = planes_entrega_new.loc[
                (planes_entrega_new['Referencia'] == reference) &
                (planes_entrega_new['Fecha reparto'] == ship_out_date)]

            if filtered_row.empty:
                ship_out_dates.append(ship_out_date)
                references.append(reference)
                old_quantities.append(quantity)
                new_quantities.append(0)
            else:
                ship_out_dates.append(ship_out_date)
                references.append(reference)
                old_quantities.append(quantity)
                new_quantities.append(filtered_row['Cantidad de Pedido'][filtered_row.index[0]])
            status_list.append('ACCEPTED')
            messages.append(np.NaN)
            file_roots.append(np.NaN)
        # old_quantities = [int(float(i)) for i in old_quantities]
        # new_quantities = [int(float(i)) for i in new_quantities]
        # ------------------------------------------------------------------------------------------------------
        # leer tabla de campos borrados
        try:
            data = pd.read_excel(os.path.join(folder_root, 'deleted_order_changes.xlsx'))
            deleted_order_changes = pd.DataFrame(data, dtype=str)
        except FileNotFoundError:
            deleted_order_changes = pd.DataFrame()
        if not deleted_order_changes.empty:
            for index in deleted_order_changes.index:
                action = deleted_order_changes['action'][index]
                ship_out_date = deleted_order_changes['ship_out_date'][index]
                reference = deleted_order_changes['reference'][index]
                quantity = deleted_order_changes['quantity'][index]
                message = deleted_order_changes['message'][index]
                file_root = deleted_order_changes['file_root'][index]
                if quantity not in [0, '0', 0.0]:
                    if action != 'NONE':
                        if action == 'CREATE':
                            old_quantities.append(0)
                            new_quantities.append(quantity)
                        elif action == 'DELETE':
                            old_quantities.append(quantity)
                            new_quantities.append(0)
                        ship_out_dates.append(ship_out_date)  # MAYBE DOESNT WORK
                        references.append(reference)
                        status_list.append('REJECTED')
                        messages.append(message)
                        file_roots.append(file_root)

        old_quantities = [int(float(i)) for i in old_quantities]
        new_quantities = [int(float(i)) for i in new_quantities]

        # ship_out_dates = [dt.datetime.strptime(ship_out_date, '%Y-%m-%d').strftime('%d.%m.%Y') for ship_out_date in ship_out_dates]

        data_comparison = {'ship_out_date': ship_out_dates,
                           'reference': references,
                           'old_quantity': old_quantities,
                           'new_quantity': new_quantities,
                           'status': status_list,
                           'message': messages,
                           'file_root': file_roots}
        self.comparison_table = pd.DataFrame(data_comparison)
        self.comparison_table = self.comparison_table.drop_duplicates()
        self.comparison_table = self.comparison_table.sort_values(by='ship_out_date')
        self.comparison_table['ship_out_date'] = pd.to_datetime(self.comparison_table.ship_out_date)
        self.comparison_table['ship_out_date'] = self.comparison_table['ship_out_date'].dt.strftime('%d.%m.%Y')

        print(self.comparison_table.to_string())
        self.table_frame = ttk.Frame(self.parent_window)
        self.table_frame.rowconfigure(0, weight=1)
        headers = ['Fecha de reparto', 'Referencia', 'Cantidad vieja', 'Cantidad nueva']
        self.sub_tree = ttk.Treeview(self.table_frame, columns=headers,
                                     show='headings', selectmode='none')
        for value in headers:
            self.sub_tree.heading(value, text=value, anchor='w')

        for index in self.comparison_table.index:
            ship_out_date = self.comparison_table['ship_out_date'][index]
            reference = self.comparison_table['reference'][index]
            old_quantity = self.comparison_table['old_quantity'][index]
            new_quantity = self.comparison_table['new_quantity'][index]
            status = self.comparison_table['status'][index]
            tag = 'none'
            if status == 'REJECTED':
                tag = 'rejected'
            elif old_quantity in [0, '0']:
                tag = 'add'
            elif new_quantity in [0, '0']:
                tag = 'del'
            elif old_quantity != new_quantity:
                tag = 'change'
            self.sub_tree.insert('', tk.END, values=(ship_out_date, reference,
                                                     old_quantity, new_quantity), tags=(tag,))
        self.sub_tree.grid(row=0, column=0, sticky='ns')
        self.sub_tree.tag_configure('add', background='#79ffb2')
        self.sub_tree.tag_configure('del', background='#ff8080')
        self.sub_tree.tag_configure('change', background='#ffc143')
        self.sub_tree.tag_configure('rejected', background='#95a5a6', foreground='white')
        # add a scrollbar
        scrollbar = ttk.Scrollbar(self.table_frame, orient=tk.VERTICAL, command=self.sub_tree.yview)
        self.sub_tree.configure(yscroll=scrollbar.set)
        scrollbar.grid(row=0, column=1, sticky='ns')
        self.table_frame.place(rely=0.05, relx=0.325, relheight=0.92)
        self.sub_tree.bind("<Double-1>", self.sub_value_clicked)

    def get_client_name(self, folder_name: str, order_number) -> str:
        # leer planes de entrega nuevos
        folder_root = os.path.join(changes_history_folder, folder_name)
        new_file_root = os.path.join(folder_root, 'new_planes_entrega.xlsx')
        data_new = pd.read_excel(new_file_root)
        planes_entrega_new = pd.DataFrame(data=data_new, dtype=str)
        print(order_number)
        filtered_row = planes_entrega_new.loc[planes_entrega_new['Número pedido cliente'] == order_number]
        print(filtered_row)
        client_name = filtered_row['Nombre del Cliente'][filtered_row.index[0]]
        return client_name

    def on_right_click(self, event):
        current_item = self.tree.identify_row(event.y)
        self.tree.selection_set(current_item)
        clicked_row = self.tree.item(current_item)
        selection_client = clicked_row['values'][0]
        selection_order_number = clicked_row['values'][1]
        selection_date = clicked_row['values'][2]
        folder_name = '{}_{}_{}'.format(selection_client, selection_order_number, selection_date)
        folder_root = os.path.join(changes_history_folder, folder_name)
        menu = tk.Menu(self.list_frame, tearoff=0)
        menu.add_command(label="Eliminar Archivo", command=lambda: [self.delete_history(folder_root, current_item)])
        menu.tk_popup(event.x_root, event.y_root)
        menu.grab_release()

    def delete_history(self, folder_root, current_item):
        confirm_changes = messagebox.askyesno("Warning", 'Estas seguro que deseas borrar este archivo?\n'
                                                         'Esta accion no se puede revertir',
                                              icon='info')
        if confirm_changes:
            print(folder_root)
            shutil.rmtree(folder_root)
            self.tree.delete(current_item)

    def sub_value_clicked(self, event):
        """Accion al seleccionar una entrada que fue borrada"""
        current_item = self.sub_tree.focus()
        clicked_row = self.sub_tree.item(current_item)
        ship_out_date = clicked_row['values'][0]
        reference = clicked_row['values'][1]
        old_quantity = clicked_row['values'][2]
        new_quantity = clicked_row['values'][3]
        tag = clicked_row['tags'][0]
        if tag == 'rejected':
            selected_row: pd.DataFrame = self.comparison_table.loc[
                (self.comparison_table['ship_out_date'] == ship_out_date) &
                (self.comparison_table['reference'] == reference) &
                (self.comparison_table['old_quantity'] == old_quantity) &
                (self.comparison_table['new_quantity'] == new_quantity)]
            message = selected_row['message'][selected_row.index[0]]
            file_root = selected_row['file_root'][selected_row.index[0]]

            try:
                self.pop_up.pop_up.destroy()
            except AttributeError:
                pass
            self.pop_up = ShowDeleteInfoPopUp(self.root, message, file_root)

    def filter_clicked(self, event):
        selected_client_name = self.client_filter.get()
        upper_date = self.higher_date_filter.entry.get()
        upper_date_dt = dt.datetime.strptime(upper_date, '%Y-%m-%d')
        lower_date = self.lower_date_filter.entry.get()
        lower_date_dt = dt.datetime.strptime(lower_date, '%Y-%m-%d')
        for iid in self.rows_id_back_up:
            # restaurar todas las filas
            self.tree.reattach(iid, '', 'end')
            # filtrar el valor deseado
            item = self.tree.item(iid)
            client_name = item['values'][0]
            date = item['values'][2]
            date_dt = dt.datetime.strptime(date, '%d-%m-%Y_%Hh-%Mm')
            if selected_client_name != 'Ver todos':
                if client_name != selected_client_name:
                    self.tree.detach(iid)
            if lower_date_dt <= date_dt <= upper_date_dt+dt.timedelta(days=1):
                pass
            else:
                self.tree.detach(iid)
