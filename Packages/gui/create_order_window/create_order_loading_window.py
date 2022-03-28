import tkinter as tk
# from ..menu_bar import MenuBar
from Packages.gui.loading_screen import LoadingScreen


class CreateOrderLoadingWindow:
    """Primera pantalla de carga para cuando se estan
    revisando los cambios que se tienen que hacer en SAP"""

    def __init__(self, root: tk.Tk, gui, thread, queue=None):
        self.window_frame = tk.Frame(root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.window_frame.tkraise()
        # self.menu_bar = MenuBar(self.window_frame, gui)
        # self.menu_bar.frame.place(relwidth=1)
        self.loading_widget = LoadingScreen(root, self.window_frame, thread,
                                            prompt='Cargando...', queue=queue)

    def show(self):
        self.window_frame.tkraise()
