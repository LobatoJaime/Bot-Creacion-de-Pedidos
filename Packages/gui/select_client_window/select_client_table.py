import tkinter as tk
from tkinter import ttk
from ttkbootstrap import Style
import pandas as pd
import numpy as np
import datetime as dt
from Packages.constants import codigo_sap_clientes_root


class SelectClientTable:
    """Clase donde se selecciona el codigo sap del cliente a traves de su nombre"""

    def __init__(self, parent_window: tk.Frame):
        file_root = codigo_sap_clientes_root
        data = pd.read_excel(file_root)
        clients_table = pd.DataFrame(data, dtype=str)
        self.headers = list(clients_table)
        self.frame = ttk.Frame(parent_window, height=190)
        self.frame.rowconfigure(0, weight=1)
        self.frame.columnconfigure(0, weight=1)
        self.frame.grid_propagate(False)
        self.entries = []
        self.tree = ttk.Treeview(self.frame, columns=self.headers, show='headings')
        for value in self.headers:
            self.tree.heading(value, text=value)
            # self.tree.column(value, minwidth=400, width=400, stretch=False)
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

    def get_sap_code(self):
        current_item = self.tree.focus()
        clicked_row = self.tree.item(current_item)
        client_name = clicked_row['values'][0]
        sap_code = clicked_row['values'][1]
        return client_name, sap_code
