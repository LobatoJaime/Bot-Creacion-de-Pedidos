import tkinter as tk
from tkinter import ttk, filedialog
from ttkbootstrap import Style
import pandas as pd
import numpy as np
import datetime as dt


class DeleteEntryPopUp:
    """Clase donde se escribe un log de porque se borro/rechazo la entrada
    y se pueden adjuntar archivos para respaldar las deciciones"""

    def __init__(self, root: tk.Tk):
        # Valores que se devuelven
        self.delete = False
        self.message = ''
        self.file_root = ''
        self.pop_up_open = True
        self.pop_up = tk.Toplevel(root)
        self.pop_up.title('Borrar cambio')
        self.pop_up.protocol("WM_DELETE_WINDOW", self.close_app)
        self.pop_up.bind('<Return>', self.delete_entry)
        # style = Style(theme='flatly', master=self.pop_up)
        self.pop_up.geometry('400x300')
        x = root.winfo_x()
        y = root.winfo_y()
        self.pop_up.geometry('+{}+{}'.format(x + 300, y + 200))
        self.pop_up.rowconfigure(0, weight=1)
        self.pop_up.columnconfigure(0, weight=1)

        label_frame = ttk.Labelframe(self.pop_up, text='Escribe la razon por la cual se rechaza el pedido:')
        label_frame.grid(row=0, column=0, sticky='nwse', padx=20, pady=20)

        label_frame.rowconfigure(0, weight=1)
        label_frame.columnconfigure(0, weight=1)
        label_frame.columnconfigure(1, weight=1)

        # text box
        self.entry = tk.Text(label_frame, height=200)
        self.entry.grid(row=0, column=0, sticky='we', padx=20, pady=10, columnspan=2)

        # boton de aceptar
        accept_button = ttk.Button(label_frame, text='Borrar entrada', style='danger.TButton',
                                   command=self.delete_entry)
        accept_button.grid(row=2, column=0, pady=10, sticky='n')
        # boton de subir archivo
        upload_file = ttk.Button(label_frame, text='Subir Archivo', command=self.select_file)
        upload_file.grid(row=2, column=1, pady=10, sticky='n')

        # titulo de archivo seleccionado
        self.label = ttk.Label(label_frame, text='Archivo: {}'.format(self.file_root))
        self.label.grid(row=1, column=0, columnspan=2, sticky='')

        # self.pop_up.mainloop()

    def close_app(self):
        """Funcion para poder cerrar la aplicacion debidamente"""
        self.delete = False
        self.message = ''
        self.file_root = ''
        self.pop_up_open = False
        self.pop_up.destroy()

    def select_file(self):
        self.file_root = filedialog.askopenfilename(initialdir='Descargas')
        self.label.configure(text='Archivo: {}'.format(self.file_root))
        self.pop_up.focus()

    def delete_entry(self):
        self.delete = True
        self.message = self.entry.get(1.0, "end-1c")
        self.pop_up_open = False
        self.pop_up.destroy()


