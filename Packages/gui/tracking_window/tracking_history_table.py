from Packages.constants import authorize_order_folder, tracking_root, tracking_history_folder
import tkinter as tk
from tkinter import ttk, messagebox
import pandas as pd
import os
import datetime as dt
import shutil


class TrackingHistoryTable:
    """Clase donde se crea el objeto visual para
    visualizar todas las ordenes que han sido subidas
    por cliente y nro de orden"""

    def __init__(self, parent_window: tk.Frame):
        self.parent_window = parent_window
        self.client_names = []
        self.reference_names = []
        # Hacer lista de los cambios hechos
        self.list_frame = ttk.Frame(parent_window)
        self.list_frame.rowconfigure(0, weight=1)
        self.list_frame.columnconfigure(0, weight=1)

        self.tracking_info = pd.read_excel(tracking_root)

        headers = ["Identificador", "Cliente", "Orden", "Referencia", "Estado", "Autor"]

        self.tree = ttk.Treeview(self.list_frame, columns=headers, show='headings')

        for value in headers:
            self.tree.heading(value, text=value, anchor='w')
            self.tree.column(value, anchor='w')
        self.tree.column(headers[0], width=60)
        self.tree.column(headers[1], width=100)
        self.tree.column(headers[2], width=60)
        self.tree.column(headers[3], width=60)
        self.tree.column(headers[4], width=60)
        self.tree.column(headers[5], width=80)

        for i in range(len(self.tracking_info)-1, -1, -1):
            cliente = self.tracking_info.loc[i, "Pedido"].split("_")[0]
            orden = self.tracking_info.loc[i, "Pedido"].split("_")[1]
            referencia = self.tracking_info.loc[i, "Pedido"].split("_")[2]

            if cliente not in self.client_names:
                self.client_names.append(cliente)

            if referencia not in self.reference_names:
                self.reference_names.append(referencia)

            self.tree.insert('', tk.END, values=(self.tracking_info.loc[i, "Identificador"],
                                                 cliente,
                                                 orden,
                                                 referencia,
                                                 self.tracking_info.loc[i, "Estado"],
                                                 self.tracking_info.loc[i, "Autor"]))

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
        self.filter_box.rowconfigure(2, weight=1)
        self.filter_box.rowconfigure(3, weight=1)
        self.filter_box.rowconfigure(4, weight=1)
        self.filter_box.columnconfigure(0, weight=1)
        self.filter_box.columnconfigure(1, weight=1)
        client_title = ttk.Label(self.filter_box, text='Cliente:').grid(row=0, column=0, sticky='w')
        self.client_names.sort()
        self.client_filter = ttk.Combobox(self.filter_box, values=self.client_names, state='readonly')
        self.client_filter.bind("<<ComboboxSelected>>", lambda event: self.filter_clicked_client())
        self.client_filter.grid(row=1, column=0, sticky='w')
        self.client_filter.set('Ver todos')

        aux = ttk.Label(self.filter_box, text="").grid(row=2, column=0, sticky='w')

        self.reference_names.append('Ver todos')
        ref_title = ttk.Label(self.filter_box, text='Referencia:').grid(row=3, column=0, sticky='w')
        self.client_names.sort()
        self.ref_filter = ttk.Combobox(self.filter_box, values=self.reference_names, state='readonly')
        self.ref_filter.bind("<<ComboboxSelected>>", lambda event: self.filter_clicked_reference())
        self.ref_filter.grid(row=4, column=0, sticky='w')
        self.ref_filter.set('Ver todos')

    def value_clicked(self, event):

        def open_file(file_root):
            try:
                os.startfile(file_root)
            except FileNotFoundError:
                pass

        try:
            self.history_tree_frame.destroy()
            self.history_tree.destroy()
            self.sub_tree.destroy()
        except AttributeError:
            pass
        current_item = self.tree.focus()
        self.main_item_clicked = self.tree.focus()
        clicked_row = self.tree.item(current_item)
        selection_client = clicked_row['values'][1]
        selection_order_number = clicked_row['values'][2]
        selection_reference = clicked_row['values'][3]
        identificador = clicked_row['values'][0]
        estado = clicked_row['values'][4]

        self.selected_client = selection_client
        self.selected_order_number = selection_order_number
        self.selected_reference = selection_reference
        self.identificador = identificador


        info_box = ttk.Labelframe(self.parent_window, text='Informacion de Ordenes', padding=10)
        info_box.place(relx=0.83, rely=0.25, relwidth=.15)
        info_box.rowconfigure(0, weight=1)
        info_box.rowconfigure(1, weight=1)
        info_box.rowconfigure(2, weight=1)
        info_box.rowconfigure(3, weight=1)
        info_box.rowconfigure(4, weight=1)
        info_box.rowconfigure(5, weight=1)
        info_box.rowconfigure(6, weight=1)
        info_box.rowconfigure(7, weight=1)
        info_box.rowconfigure(8, weight=1)
        info_box.rowconfigure(9, weight=1)

        info_box.columnconfigure(0, weight=1)
        info_box.columnconfigure(1, weight=1)

        aux = ttk.Label(info_box, text=selection_client).grid(row=1, column=0, sticky='w')
        aux = ttk.Label(info_box, text=selection_order_number).grid(row=2, column=0, sticky='w')
        aux = ttk.Label(info_box, text=selection_reference).grid(row=3, column=0, sticky='w')
        aux = ttk.Label(info_box, text="").grid(row=4, column=0, sticky='w')
        aux = ttk.Label(info_box, text=estado).grid(row=5, column=0, sticky='w')
        aux = ttk.Label(info_box, text="").grid(row=6, column=0, sticky='w')

        pdf_view_button = ttk.Button(info_box, text='Ver PDF',
                                     command=lambda: [open_file(os.path.join(tracking_history_folder, identificador + ".pdf"))])
        pdf_view_button.grid(column=0, row=7, pady=0)

        aux = ttk.Label(info_box, text="").grid(row=8, column=0, sticky='w')

        excel_view_button = ttk.Button(info_box, text='Ver Excel',
                                     command=lambda: [
                                         open_file(os.path.join(tracking_history_folder, identificador + ".xlsx"))])
        excel_view_button.grid(column=0, row=9, pady=0)

    def filter_clicked_client(self):
        selected_client_name = self.client_filter.get()
        for iid in self.rows_id_back_up:
            self.tree.reattach(iid, '', 'end')
            # filtrar el valor deseado
            item = self.tree.item(iid)
            client_name = item['values'][1]
            if selected_client_name != 'Ver todos':
                if client_name != selected_client_name:
                    self.tree.detach(iid)

    def filter_clicked_reference(self):
        selected_client_name = self.ref_filter.get()
        for iid in self.rows_id_back_up:
            self.tree.reattach(iid, '', 'end')
            # filtrar el valor deseado
            item = self.tree.item(iid)
            client_name = item['values'][3]
            if selected_client_name != 'Ver todos':
                if client_name != selected_client_name:
                    self.tree.detach(iid)
