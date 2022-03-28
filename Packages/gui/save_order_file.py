import tkinter as tk
from tkinter import filedialog, ttk, messagebox
from ..constants import downloads_folder


def save_order_file(file_uploaded_text: ttk.Label):
    """Funcion utilizada para subir el pdf del archivo
    que se esta subiendo a la app"""
    file_root = filedialog.askopenfilename(initialdir=downloads_folder)
    if file_root == '':
        file_uploaded_text.configure(text='Ningun archivo seleccionado')
    else:
        file_name = file_root.split('\\')[-1]
        extension = file_name.split('.')[-1]
        print(extension)
        if extension == 'pdf':
            file_uploaded_text.configure(text=file_root)
        else:
            messagebox.showwarning(title='Error', message='Error\n'
                                                          'Comprueba que el formato del archivo sea .pdf')
            file_uploaded_text.configure(text='Ningun archivo seleccionado')
