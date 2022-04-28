from multiprocessing import Process, Queue, freeze_support
from tkinter import messagebox
import sys
import pandas as pd

# -----------para poder empaquetarla sin errores----------------
import tkinter as tk
from tkinter import ttk, messagebox
from ttkbootstrap import Style
import pandas as pd
import ctypes
import importlib.resources
from PIL import ImageTk, ImageDraw, ImageFont
import ttkbootstrap
import ttkbootstrap.widgets.calendar
from ttkbootstrap.widgets.calendar import DateEntry
import pymssql
# --------------------------------------------------------------
from Packages.apply_to_sap.check_order_exists import check_order_exists
from Packages.apply_to_sap.check_sap_changes import check_sap_changes
from Packages.apply_to_sap.create_new_order_changes import create_new_order_changes
from Packages.apply_to_sap.create_order import create_order
from Packages.apply_to_sap.edit_changes_table import edit_changes_table
from Packages.apply_to_sap.edit_existing_order import edit_existing_order
from Packages.format_data.format_data import FormatData
from Packages.get_planes_entrega import get_planes_entrega
from Packages.gui.gui import Gui
from Packages.process_invoice.calculate_ship_out_date import calculate_ship_out_date
from Packages.process_invoice.change_client_name import change_client_name
from Packages.process_invoice.get_client_number import get_client_number
from Packages.save_deleted_order_changes import save_deleted_order_changes
from Packages.save_order_to_history import save_order_to_history
from Packages.script_download_new_planes_entrega_from_sap import script_download_new_planes_entrega_from_sap
from Packages.script_download_planes_entrega_from_sap import download_planes_entrega_from_sap
from Packages.close_splash_screen import close_splash_screen
from Packages.close_excel import close_excel
import traceback


class App:
    def __init__(self):
        """Clase principal donde se ejecuta la aplicacion"""
        pd.options.mode.chained_assignment = None  # Para poder editar tablas en pandas mas facil
        freeze_support()  # Ajuste necesario del modulo multiprocessing
        self.gui = Gui()
        self.gui.run(self.gui)
        while self.gui.app_running:  # Loop principal de la applicacion
            self.gui.update()
            if self.gui.error_found: # Error inesperado en la aplicacion
                self.gui.close_app()
                raise Exception(self.gui.error_message)


if __name__ == '__main__':
    close_splash_screen()
    try:
        app = App()
    except Exception as e:
        traceback.print_exc()
        error = traceback.format_exc()
        msg = messagebox.showerror('Error',
                                   'La aplicacion ha encontrado un error y se tiene que cerrar inmediatamente\n\n'
                                   'Informacion del error:\n'
                                   '{}'.format(error))
