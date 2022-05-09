import time
import tkinter as tk
from ..menu_bar import MenuBar
from .changes_table import ChangesTable
from ...find_newest_dir import find_newest_dir
import pandas as pd
import os
from ...constants import changes_history_folder
import numpy as np
from ..color_guide_widget import ColorGuideWidget


class ProcessCompleteWindow:
    """Pantalla donde esta el mensaje de proceso completado"""

    def __init__(self, root: tk.Tk, gui):
        self.root = root
        self.gui = gui
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.window_frame.tkraise()
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        # Changes table
        self.changes_table = ChangesTable(self.window_frame)
        self.changes_table.tree_frame.place(rely=.1, relx=.27, relheight=0.6, relwidth=.42)
        # Warnings
        gray_color = '#CCCCCC'
        self.warnings_frame = tk.Frame(self.window_frame, background=gray_color)
        self.warnings_frame.place(rely=.75, relx=0.01, relwidth=1 - 0.01 * 2, relheight=1-.75-0.01*2)
        self.warnings_title = tk.Label(self.warnings_frame, text='Avisos', font=("Arial", 18), bg=gray_color)
        self.warnings_title.grid(row=0, column=0, sticky='w')
        newest_folder = find_newest_dir(changes_history_folder)
        data = pd.read_excel(os.path.join(newest_folder, 'comparison_table.xlsx'))
        self.comparison_table = pd.DataFrame(data, dtype=str)
        avisos = []
        try:
            price = (self.comparison_table['price'][self.comparison_table.index[0]])
            if price in ('0', 0, ' ', '', np.NaN, str(np.NaN), 0.0, '0.0'):
                avisos.append('Precio de la referencia = 0 EUR')
        except KeyError:
            pass
        if len(avisos) > 0:
            for i, aviso in enumerate(avisos):
                print(i, aviso)
                warning = tk.Label(self.warnings_frame, text='- {}'.format(aviso), font=("Arial", 12), bg=gray_color)
                warning.grid(row=i+1, column=0, sticky='w')
        else:
            warning = tk.Label(self.warnings_frame, text='- No hay avisos.', font=("Arial", 12), bg=gray_color)
            warning.grid(row=1, column=0, sticky='w')
        # Leyenda
        color_guide = ColorGuideWidget(self.window_frame)
        color_guide.place(rely=.22, relx=.725, relwidth=.2)

    def show(self):
        # Changes table
        self.changes_table = ChangesTable(self.window_frame)
        self.changes_table.place(rely=.2, relx=.27, relheight=0.5)
        # Warnings
        gray_color = '#CCCCCC'
        self.warnings_frame = tk.Frame(self.window_frame, background=gray_color)
        self.warnings_frame.place(rely=.75, relx=0.01, relwidth=1 - 0.01 * 2, relheight=1 - .75 - 0.01 * 2)
        self.warnings_title = tk.Label(self.warnings_frame, text='Avisos', font=("Arial", 18), bg=gray_color)
        self.warnings_title.grid(row=0, column=0, sticky='w')
        newest_folder = find_newest_dir(changes_history_folder)
        data = pd.read_excel(os.path.join(newest_folder, 'comparison_table.xlsx'))
        self.comparison_table = pd.DataFrame(data, dtype=str)
        avisos = []
        try:
            price = (self.comparison_table['price'][self.comparison_table.index[0]])
            if price in ('0', 0, ' ', '', np.NaN, str(np.NaN), 0.0, '0.0'):
                avisos.append('Precio de la referencia = 0 EUR')
        except KeyError:
            pass
        if len(avisos) > 0:
            for i, aviso in enumerate(avisos):
                print(i, aviso)
                warning = tk.Label(self.warnings_frame, text='- {}'.format(aviso), font=("Arial", 12), bg=gray_color)
                warning.grid(row=i + 1, column=0, sticky='w')
        else:
            warning = tk.Label(self.warnings_frame, text='- No hay avisos.', font=("Arial", 12), bg=gray_color)
            warning.grid(row=1, column=0, sticky='w')
        # Leyenda
        color_guide = ColorGuideWidget(self.window_frame)
        color_guide.place(rely=.22, relx=.725, relwidth=.2)
        # Mostrar el frame
        self.window_frame.tkraise()
