import tkinter as tk
from tkinter import ttk, filedialog
from ttkbootstrap import Style
import pandas as pd
import numpy as np
import datetime as dt


class ShowDeleteInfoPopUp:
    """Clase donde se escribe un log de porque se borro/rechazo la entrada
    y se pueden adjuntar archivos para respaldar las deciciones"""

    def __init__(self, root: tk.Tk, message: str, file_root: str):
        self.pop_up = tk.Toplevel(root)
        self.pop_up.title('Informacion')
        self.pop_up.protocol("WM_DELETE_WINDOW", self.close_app)
        # style = Style(theme='flatly', master=self.pop_up)
        self.pop_up.geometry('400x300')
        x = root.winfo_x()
        y = root.winfo_y()
        self.pop_up.geometry('+{}+{}'.format(x+300, y+200))
        self.pop_up.rowconfigure(0, weight=1)
        self.pop_up.columnconfigure(0, weight=1)

        label_frame = ttk.Labelframe(self.pop_up, text='Informacion del pedido')
        label_frame.grid(row=0, column=0, sticky='nwse', padx=20, pady=20)

        label_frame.rowconfigure(0, weight=1)
        label_frame.columnconfigure(0, weight=1)
        label_frame.columnconfigure(1, weight=1)

        # text box
        self.entry = tk.Text(label_frame, height=200)
        self.entry.grid(row=0, column=0, sticky='we', padx=20, pady=10, columnspan=2)
        self.entry.insert(tk.INSERT, message)
        self.entry.configure(state='disabled')

        # show attachment button
        if file_root != str(np.NaN):
            self.button = ttk.Button(label_frame, text='Mostrar Archivo',
                                     command=lambda: [self.open_file(file_root)])
            self.button.grid(row=1, column=0, columnspan=2, pady=10)

    def close_app(self):
        """Funcion para poder cerrar la aplicacion debidamente"""
        self.pop_up.destroy()

    def open_file(self, file_root):
        import os
        try:
            os.startfile(file_root)
        except FileNotFoundError:
            from tkinter import messagebox
            messagebox.showwarning('Error', 'El archivo no pudo ser encontrando')
            self.pop_up.focus()