import tkinter as tk
from ..menu_bar import MenuBar
from Packages.gui.edit_order_window.edit_order_table import EditOrderTable


class EditOrderWindow:
    """Pantalla donde se ven y editan los cambios que la app
    propone"""

    def __init__(self, root: tk.Tk, gui, orders=None):
        self.root = root
        self.gui = gui
        self.orders = orders

    def show(self):
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.menu_bar = MenuBar(self.window_frame, self.gui)
        self.menu_bar.frame.place(relwidth=1)
        self.edit_order_table = EditOrderTable(self.window_frame, self.orders, self.root)
        self.edit_order_table.frame.place(rely=0.05, relx=0)
        self.window_frame.tkraise()
