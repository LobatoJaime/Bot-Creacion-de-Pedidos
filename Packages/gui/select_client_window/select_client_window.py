import tkinter as tk
from ..menu_bar import MenuBar
from Packages.gui.select_client_window.select_client_table import SelectClientTable


class SelectClientWindow:
    """Pantalla donde se selecciona el cliente en caso de
    que sea un pedido nuevo"""

    def __init__(self, root: tk.Tk, gui):
        self.root = root
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.window_frame.tkraise()
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        self.select_client_table = SelectClientTable(self.window_frame)
        self.select_client_table.frame.place(rely=0.05, relx=0)

    def show(self):
        self.window_frame.tkraise()
