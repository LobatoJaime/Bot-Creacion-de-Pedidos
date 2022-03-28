import tkinter as tk
from .menu_bar import MenuBar


class SettingsWindow:
    """Clase donde se muestran todos los ajustes configurables de la app"""

    def __init__(self, root: tk.Tk, gui):
        self.root = root
        self.gui = gui
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.window_frame.tkraise()
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        self.msg = tk.Label(self.window_frame, text='Ajustes de la aplicacion (WIP)',
                            font=('Arial', 24))
        self.msg.place(rely=.5, relx=.3)

    def show(self):
        self.window_frame.tkraise()
