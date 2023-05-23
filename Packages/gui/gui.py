import pandas as pd
import tkinter as tk
from ttkbootstrap import Style
from _tkinter import TclError
from .create_order_window.create_order_window import CreateOrderWindow
from ..constants import resources_folder, usuarios_root
from .changes_history_window.changes_history_window import ChangesHistoryWindow
from .orders_history_window.orders_history_window import OrdersHistoryWindow
from .authorize_order_window.authorize_order_window import AuthorizeOrderWindow
from .edit_order_window.edit_order_window import EditOrderWindow
from .select_client_window.select_client_window import SelectClientWindow
from ..gui.process_complete_window.process_complete_window import ProcessCompleteWindow
from .settings_window.settings_window import SettingsWindow
from .installation_guide_window import InstallationGuideWindow
import ctypes
import os


class Gui:
    def __init__(self):
        """Ajustes iniciales de la app"""
        # ---------------------MAIN SETTINGS----------------------
        ctypes.windll.shcore.SetProcessDpiAwareness(1)  # Aumenta la resolucion de la interfaz
        self.app_running = True
        self.root = tk.Tk()
        self.root.title('Automatizacion Subida de Pedidos SAP')
        self.root.iconbitmap(os.path.join(resources_folder, 'application.ico'))
        self.root.protocol("WM_DELETE_WINDOW", self.close_app)
        style = Style(theme='flatly', master=self.root)
        # ---------INVENTANDO--------
        # font_size = 10
        # widget_names = ('TButton', 'TLabel', 'TCheckbutton', 'TCombobox', 'TEntry', 'TLabelFrame', 'TMenubutton',
        #                 'TNotebook', 'TPanedwindow', 'Horizontal.TProgressbar', 'TRadiobutton', 'Horizontal.TScrollbar',
        #                 'Vertical.TScrollbar', 'Treeview')
        # for widget_name in widget_names:
        #     style.configure(widget_name, font=('Helvetica', font_size))
        # ---------------------------
        self.root.resizable(True, True)
        screen_width = self.root.winfo_screenwidth()
        screen_height = self.root.winfo_screenheight()
        window_width = screen_width
        window_height = screen_height
        self.root.state('zoomed')
        x_cordinate = int((screen_width / 2) - (window_width / 2))
        y_cordinate = int((screen_height / 2) - (window_height / 2))
        self.root.geometry("{}x{}+{}+{}".format(window_width,
                                                window_height, x_cordinate,
                                                y_cordinate))
        self.gui = None
        self.create_order_window, self.changes_history_window, self.orders_history_window = None, None, None
        self.edit_order_window = None
        self.select_client_window = None
        self.process_complete_window = None
        self.settings_window = None
        self.installation_guide_window = None
        self.authorize_order_window = None
        self.active_window = 'create_order'
        # --------------------VARIABLES-------------------------
        self.uploaded_file_root = None
        self.orders = None
        self.order_exists = None
        self.planes_entrega = None
        self.order_changes = None
        self.backup_order_changes = None
        self.rows_to_delete = None
        self.deleted_rows_log = None
        self.error_found = False
        self.error_message = None

    def run(self, gui):
        """Funcion donde se crean los objetos de cada ventana"""
        self.gui = gui
        # Crear las ventanas
        self.create_order_window = CreateOrderWindow(self.root, self.gui)
        self.changes_history_window = ChangesHistoryWindow(self.root, self.gui)
        self.orders_history_window = OrdersHistoryWindow(self.root, self.gui)
        self.edit_order_window = EditOrderWindow(self.root, self.gui)
        self.select_client_window = SelectClientWindow(self.root, self.gui)
        self.authorize_order_window = AuthorizeOrderWindow(self.root, self.gui)
        # self.process_complete_window = ProcessCompleteWindow(self.root, self.gui)
        self.settings_window = SettingsWindow(self.root, self.gui)
        self.installation_guide_window = InstallationGuideWindow(self.root, self.gui)

        # importar archivo Excel
        df = pd.read_excel(usuarios_root)

        tipo_usuario = ""

        for idx, row in df.iterrows():
            if row['Usuario'].upper() == os.getlogin().upper():
                tipo_usuario = "A"

            if row['Usuario Aprobador'].upper() == os.getlogin().upper():
                tipo_usuario = "B"

        if tipo_usuario == "A":
            # Empezar en la pantalla de crear pedido
            self.create_order_window.show()

        if tipo_usuario == "B":
            # Empezar en la pantalla de crear pedido
            self.authorize_order_window.show()
            self.active_window = "authorize_order"


    def update(self):
        """Funcion que actualiza la parte visual de la GUI"""
        self.root.update_idletasks()
        self.root.update()
        try:
            self.create_order_window.create_order_table.update_cells()
        except TclError:
            pass

    def close_app(self):
        """Funcion para poder cerrar la aplicacion debidamente"""
        self.app_running = False
        self.root.destroy()
