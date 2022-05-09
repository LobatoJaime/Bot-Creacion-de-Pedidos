import tkinter as tk
from tkinter import ttk
import pandas as pd
import numpy as np
from Packages.gui.edit_order_window.delete_entry_pop_up import DeleteEntryPopUp


class EditOrderTable:
    """Clase para la tabla incial donde se escribe la orden manualmente"""

    def __init__(self, parent_window: tk.Frame, orders: pd.DataFrame, root: tk.Tk):
        self.parent_window = parent_window
        self.orders = orders
        orders.pop('confidence')
        self.headers = list(orders)
        self.frame = ttk.Frame(parent_window)
        self.frame.rowconfigure(0, weight=1)
        for col in range(len(self.headers)):
            self.frame.columnconfigure(col, weight=1)
            entry = ttk.Label(self.frame, width=18, text=self.headers[col], style='primary.Inverse.TLabel')
            entry.grid(row=0, column=col, sticky='ew', padx=1)
        self.entries = []
        row_n = 0
        for index in orders.index:
            row = []
            en_periodo_congelado = orders['en_periodo_congelado'][index]
            for col in range(len(orders.columns)):
                self.frame.rowconfigure(row_n+1, weight=1)
                column_title = orders.columns[col]
                text = orders[orders.columns[col]][index]
                if col == 6:
                    text = text.strftime('%d.%m.%Y')
                if en_periodo_congelado in ['True', True]:
                    entry = ttk.Label(self.frame, width=18, text=text, style='warning.Inverse.TLabel', padding=5)
                else:
                    entry = ttk.Label(self.frame, width=18, text=text, padding=5)
                # entry.insert(0, text)
                entry.grid(row=row_n + 1, column=col)
                row.append(entry)
            row_n = row_n + 1
            self.entries.append(row)

        col = len(orders.columns) + 1
        self.buttons = []
        row_n = 0
        for index in orders.index:
            # boton de borrar
            button = ttk.Button(self.frame, text='X', style='danger.TButton',
                                command=lambda ind=index, row_number=row_n: [self.delete_entry_pop_up(ind, row_number)])
            button.grid(row=row_n + 1, column=col, padx=5)
            self.buttons.append(button)
            row_n = row_n + 1
        self.rows_to_delete = []
        self.row_n = None

        # hacer log vacio
        self.deleted_rows_log = pd.DataFrame()
        self.messages = []
        self.file_roots = []
        self.root = root

    def delete_row(self, index: int, row_number: int):
        self.rows_to_delete.append(index)
        for col in range(len(self.headers)):
            self.entries[row_number][col].grid_forget()
        self.buttons[row_number].grid_forget()
        self.rows_to_delete.sort()

    def delete_entry_pop_up(self, ind: int, row_number: int):
        pop_up = DeleteEntryPopUp(self.root)
        while pop_up.pop_up_open:
            self.root.update()
        if pop_up.delete:
            self.delete_row(ind, row_number)
            file_root = pop_up.file_root
            message = pop_up.message
            if file_root == '':
                file_root = np.NaN
            if message == '':
                message = np.NaN
            self.messages.append(message)
            self.file_roots.append(file_root)
        data = {'rows_to_delete': self.rows_to_delete,
                'message': self.messages,
                'file_root': self.file_roots}
        self.deleted_rows_log = pd.DataFrame(data, dtype=str)
