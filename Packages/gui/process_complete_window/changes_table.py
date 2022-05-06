import tkinter as tk
from tkinter import ttk
import pandas as pd
import numpy as np
from Packages.constants import changes_history_folder
from Packages.find_newest_dir import find_newest_dir
import os


class ChangesTable:
    """Clase donde se dibuja el cuadro con los cambios realizados"""

    def __init__(self, window_frame: tk.Frame):
        self.window_frame = window_frame
        # leer archivo
        newest_folder = find_newest_dir(changes_history_folder)
        print('Carpeta usada para el process complete window...')
        print(newest_folder)
        data = pd.read_excel(os.path.join(newest_folder, 'comparison_table.xlsx'))
        self.comparison_table = pd.DataFrame(data, dtype=str)
        headers = ['Fecha de reparto', 'Referencia', 'Cantidad vieja', 'Cantidad nueva']
        # hacer tabla
        self.tree_frame = tk.Frame(window_frame)
        self.tree_frame.rowconfigure(2, weight=1)
        self.tree_frame.columnconfigure(0, weight=1)
        tree = ttk.Treeview(self.tree_frame, columns=headers,
                            show='headings', selectmode='none')
        for value in headers:
            tree.heading(value, text=value, anchor='w')

        for index in self.comparison_table.index:
            ship_out_date = self.comparison_table['ship_out_date'][index]
            reference = self.comparison_table['reference'][index]
            old_quantity = self.comparison_table['old_quantity'][index]
            new_quantity = self.comparison_table['new_quantity'][index]
            status = self.comparison_table['status'][index]
            tag = self.comparison_table['tags'][index]
            tree.insert('', tk.END, values=(ship_out_date, reference,
                                                     old_quantity, new_quantity), tags=(tag,))
        tree.grid(row=2, column=0, sticky='nsew')
        tree.tag_configure('add', background='#79ffb2')
        tree.tag_configure('del', background='#ff8080')
        tree.tag_configure('change', background='#ffc143')
        tree.tag_configure('rejected', background='#95a5a6', foreground='white')
        # add a scrollbar
        scrollbar = ttk.Scrollbar(self.tree_frame, orient=tk.VERTICAL, command=tree.yview)
        tree.configure(yscroll=scrollbar.set)
        scrollbar.grid(row=2, column=1, sticky='ns', rowspan=2)
        scrollbarX = ttk.Scrollbar(self.tree_frame, orient=tk.HORIZONTAL, command=tree.xview)
        tree.configure(xscroll=scrollbarX.set)
        scrollbarX.grid(row=3, column=0, sticky='ew')
        # Title success
        self.success = tk.Label(self.tree_frame, text='Proceso Finalizado',
                                font=('Arial Bold', 24))
        self.success.grid(row=0, column=0, columnspan=2, pady=10)
        # title
        title = ttk.Label(self.tree_frame, text='Cambios Realizados', font=("Arial", 18))
        title.grid(row=1, column=0, columnspan=2)

    def place(self, relx=None, rely=None, relwidth=None, relheight=None):
        self.tree_frame.grid_propagate(False)
        self.tree_frame.place(rely=rely, relx=relx, relheight=relheight, relwidth=relwidth)

