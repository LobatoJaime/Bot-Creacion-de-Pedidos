import tkinter as tk
from .menu_bar import MenuBar


class ProcessCompleteWindow:
    """Pantalla donde esta el mensaje de proceso completado"""

    def __init__(self, root: tk.Tk, gui):
        self.root = root
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.window_frame.tkraise()
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        self.success = tk.Label(self.window_frame, text='Proceso completado exitosamente',
                                font=('Arial', 24))
        self.success.place(rely=.5, relx=.3)

    def show(self):
        self.window_frame.tkraise()
