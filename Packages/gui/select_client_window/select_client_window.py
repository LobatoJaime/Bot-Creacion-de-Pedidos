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
        # Titulo
        title = tk.Label(self.window_frame, text='Selecciona el cliente:', font=("Arial", 24))
        title.place(rely=.05, relx=.01)
        # Descripcion
        description = tk.Label(self.window_frame, text='El pedido que se esta subiendo es una orden de entrega nueva, '
                                                       'por lo cual es necesario indicar el nombre del cliente.\n'
                                                       'Si el cliente no existe ve a ajustes y agregalo primero. ',
                               font=("Arial", 12), justify='left')
        description.place(rely=.13, relx=.01)
        # Tabla de clientes
        self.select_client_table = SelectClientTable(self.window_frame)
        self.select_client_table.frame.place(rely=0.2, relx=0.01, relheight=.6)

    def show(self):
        self.window_frame.tkraise()
