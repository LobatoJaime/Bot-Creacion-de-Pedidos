import tkinter as tk
from ..menu_bar import MenuBar
from .approved_orders_table import ApprovedOrdersTable


class ApprovedOrdersWindow:
    def __init__(self, root: tk.Tk, gui):
        self.root = root
        self.gui = gui
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        self.history_changes_table = ApprovedOrdersTable(self.window_frame, self.menu_bar)
        self.history_changes_table.list_frame.place(rely=0.05, relx=0, relheight=0.92, relwidth=.27)

    def show(self):
        self.window_frame.destroy()
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.menu_bar = MenuBar(self.window_frame, self.gui)
        self.menu_bar.frame.place(relwidth=1)
        self.history_changes_table.list_frame.destroy()
        self.history_changes_table = None
        self.window_frame.tkraise()
        self.history_changes_table = ApprovedOrdersTable(self.window_frame, self.menu_bar)
        self.history_changes_table.list_frame.place(rely=0.05, relx=0, relheight=0.92, relwidth=.27)
