import tkinter as tk
from ..menu_bar import MenuBar
from Packages.gui.changes_history_window.changes_history_table import ChangesHistoryTable
from ..color_guide_widget import ColorGuideWidget


class ChangesHistoryWindow:
    def __init__(self, root: tk.Tk, gui):
        self.root = root
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        # Barra de menu
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        # Tabla de historial de cambios
        self.history_changes_table = ChangesHistoryTable(self.window_frame, self.root)
        self.history_changes_table.list_frame.place(rely=0.05, relx=0, relheight=0.92, relwidth=.31)
        # Leyenda
        color_guide = ColorGuideWidget(self.window_frame, title_font=None, text_font=None)
        color_guide.place(rely=.3, relx=.77, relwidth=.2)

    def show(self):
        try:
            self.history_changes_table.sub_tree.destroy()
            self.history_changes_table.table_frame.destroy()
        except AttributeError:
            pass
        self.history_changes_table.list_frame.destroy()
        self.history_changes_table = None
        self.window_frame.tkraise()
        self.history_changes_table = ChangesHistoryTable(self.window_frame, self.root)
        self.history_changes_table.list_frame.place(rely=0.05, relx=0, relheight=0.92, relwidth=.31)

