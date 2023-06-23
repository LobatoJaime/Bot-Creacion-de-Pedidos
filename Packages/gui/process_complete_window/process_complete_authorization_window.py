import time
import tkinter as tk
from ..loading_screen import LoadingScreen
from ..menu_bar import MenuBar


class ProcessCompleteAuthorizationWindow:
    """Pantalla donde esta el mensaje de proceso completado"""

    def __init__(self, root: tk.Tk, gui):
        self.root = root
        self.start = True
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        text = tk.Label(self.window_frame, text="Solicitud Realizada con Exito", font=('Arial', 40))
        text.place(rely=.4, relx=.25)

    def show(self):
        self.window_frame.tkraise()