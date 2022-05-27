import tkinter as tk
from ..menu_bar import MenuBar
from .select_setting_bar import SelectSettingsBar


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
        self.message_frame = tk.Frame(self.window_frame)
        self.message_frame.place(rely=.05, relx=.125, relwidth=1, relheight=1)
        self.msg = tk.Label(self.message_frame, text='Ajustes de la aplicacion\n'
                                                    'Selecciona un ajuste de la barra lateral',
                            font=('Arial', 18), justify='left')
        self.msg.place(relx=0, rely=0)
        # Barra para seleccionar el ajuste
        self.setting_bar = SelectSettingsBar(self.window_frame)
        self.setting_bar.place(relx=0, rely=.0325, relheight=1-0.0325, relwidth=.12)

    def show(self):
        self.window_frame.tkraise()
