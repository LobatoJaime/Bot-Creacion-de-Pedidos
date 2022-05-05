import tkinter as tk
from tkinter import ttk, messagebox, dialog
import pandas as pd
import numpy as np
from Packages.constants import codigo_sap_clientes_root


class ClientSettings:
    """Ventana de tkinter donde se manejan los clientes
    registrados"""

    def __init__(self, window_frame: tk.Frame):
        self.window_frame = window_frame
        self.widget_frame = tk.Frame(self.window_frame)
        # Mostrar tabla de clientes ya creados
        self.clients_table = ClientsTable(self.widget_frame)
        self.clients_table.place(relx=0.005, rely=0, relheight=.9, relwidth=.245)
        self.clients_df = self.clients_table.get_df()
        print(self.clients_df.to_string())
        # Boton de agregar cliente
        add_label_frame = ttk.Labelframe(self.widget_frame, text='Agregar Cliente')
        add_label_frame.place(relx=.27, rely=0.01)
        name = ttk.Label(add_label_frame, text='Nombre')
        name.grid(row=0, column=0, padx=4, pady=4)
        self.name_entry = ttk.Entry(add_label_frame)
        self.name_entry.grid(row=0, column=1, padx=4, pady=4)
        code = ttk.Label(add_label_frame, text='Codigo SAP')
        code.grid(row=1, column=0, padx=4, pady=4)
        self.code_entry = ttk.Entry(add_label_frame)
        self.code_entry.grid(row=1, column=1, padx=4, pady=4)
        accept_button = ttk.Button(add_label_frame, text='Agregar Cliente', command=lambda: self.add_client_clicked())
        accept_button.grid(row=2, column=0, columnspan=2, padx=4, pady=4)
        # Boton de eliminar cliente
        del_label_frame = ttk.Labelframe(self.widget_frame, text='Eliminar Cliente')
        del_label_frame.place(relx=.27, rely=0.2)
        name2 = ttk.Label(del_label_frame, text='Nombre')
        name2.grid(row=0, column=0, padx=4, pady=4)
        clients_list = self.clients_df['Customer'].to_list()
        self.name_box = ttk.Combobox(del_label_frame, values=clients_list, state='readonly')
        self.name_box.set('Selecciona un cliente')
        self.name_box.grid(row=0, column=1, padx=4, pady=4)
        self.name_box.bind("<<ComboboxSelected>>", lambda event: [self.name_box.selection_clear()])
        delete_button = ttk.Button(del_label_frame, text='Eliminar Cliente', style='danger.TButton',
                                   command=lambda: [self.del_client_clicked()])
        delete_button.grid(row=2, column=0, columnspan=2, padx=4, pady=4)

    def place(self, relx=None, rely=None, relwidth=None, relheight=None):
        self.widget_frame.place(rely=rely, relx=relx, relheight=relheight, relwidth=relwidth)

    def add_client_clicked(self):
        name = self.name_entry.get()
        sap_code = self.code_entry.get()
        if name in self.clients_df['Customer'].to_list():
            messagebox.showwarning(title='Error', message='Ya existe un cliente con ese nombre')
            return
        if sap_code in self.clients_df['sap_code'].to_list():
            messagebox.showwarning(title='Error', message='Ya existe un cliente con ese codigo de SAP')
            return
        self.clients_df.loc[len(self.clients_df)] = [name, sap_code]
        self.clients_df = self.clients_df.sort_values(by='Customer')
        self.clients_df.to_excel(codigo_sap_clientes_root, index=False)
        self.clients_table.frame.destroy()
        self.clients_table = ClientsTable(self.widget_frame)
        self.clients_table.place(relx=0.005, rely=0, relheight=.9)
        self.name_box['values'] = self.clients_df['Customer'].to_list()
        self.name_box.set('Selecciona un cliente')
        self.name_entry.delete(0, tk.END)
        self.code_entry.delete(0, tk.END)

    def del_client_clicked(self):
        confirm_changes = messagebox.askyesno('Confirmar Cambios', 'Estas seguro que quieres eliminar el cliente?')
        if not confirm_changes:
            return
        name = self.name_box.get()
        self.clients_df.drop(self.clients_df.index[self.clients_df['Customer'] == name], inplace=True)
        self.clients_df.reset_index()
        self.clients_df = self.clients_df.sort_values(by='Customer')
        self.clients_df.to_excel(codigo_sap_clientes_root, index=False)
        self.clients_table.frame.destroy()
        self.clients_table = ClientsTable(self.widget_frame)
        self.clients_table.place(relx=0.005, rely=0, relheight=.9)
        self.name_box['values'] = self.clients_df['Customer'].to_list()
        self.name_box.set('Selecciona un cliente')
        self.name_entry.delete(0, tk.END)
        self.code_entry.delete(0, tk.END)


class ClientsTable:
    def __init__(self, parent_window: tk.Frame):
        file_root = codigo_sap_clientes_root
        data = pd.read_excel(file_root)
        clients_table = pd.DataFrame(data, dtype=str)
        self.df = clients_table
        self.headers = list(clients_table)
        self.frame = ttk.Frame(parent_window)
        self.frame.rowconfigure(0, weight=1)
        self.frame.columnconfigure(0, weight=1)
        self.entries = []
        self.tree = ttk.Treeview(self.frame, columns=self.headers, show='headings', selectmode='none')
        for value in self.headers:
            self.tree.heading(value, text=value)
        for index in clients_table.index:
            client_name = clients_table['Customer'][index]
            sap_code = clients_table['sap_code'][index]
            self.tree.insert('', tk.END, values=(client_name, sap_code))
        self.tree.grid(row=0, column=0, sticky='ns')
        # add a scrollbar
        scrollbar = ttk.Scrollbar(self.frame, orient=tk.VERTICAL, command=self.tree.yview)
        self.tree.configure(yscroll=scrollbar.set)
        scrollbar.grid(row=0, column=1, sticky='ns', rowspan=2)
        scrollbarX = ttk.Scrollbar(self.frame, orient=tk.HORIZONTAL, command=self.tree.xview)
        self.tree.configure(xscroll=scrollbarX.set)
        scrollbarX.grid(row=1, column=0, sticky='ew')

    def place(self, relx=None, rely=None, relwidth=None, relheight=None):
        self.frame.place(rely=rely, relx=relx, relheight=relheight, relwidth=relwidth)

    def get_df(self) -> pd.DataFrame:
        return self.df
