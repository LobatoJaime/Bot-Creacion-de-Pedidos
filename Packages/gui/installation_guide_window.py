import tkinter as tk
from tkinter import ttk
from .menu_bar import MenuBar
from PIL import ImageTk, Image


class InstallationGuideWindow:
    def __init__(self, root: tk.Tk, gui):
        """Pantalla donde se ven y editan los cambios que la app
            propone"""
        self.root = root
        self.gui = gui
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.window_frame.tkraise()
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        # -------------------------Titulo---------------------------
        title = ttk.Label(self.window_frame, text='Guia de Instalación', font=('Arial', 30))
        title.place(relx=0, rely=.1)
        # -------------------------Texto 1---------------------------
        data1 = 'Antes de empezar a utilizar la aplicación es muy importante tener los siguientes ' \
                'ajustes seleccionados en la aplicacion de SAP\n\n' \
                '- Paso 1: Ir a los ajustes de SAP'
        text1 = ttk.Label(self.window_frame, text=data1, font=('Arial', 15))
        text1.place(relx=0, rely=.2)
        # img_path = ''
        # img1 = ImageTk.PhotoImage(Image.open('path'))
        # image_label = ttk.Label(self.window_frame, image=img1)
        # image_label.place(relx=0, rely=.25)
        # -------------------------Texto 2---------------------------

    def show(self):
        self.window_frame.tkraise()
