import tkinter as tk
from tkinter import ttk
from multiprocessing import Queue, Process
from ttkbootstrap.widgets import Meter
import pandas as pd
from ...constants import local_app_folder, tesseract_folder_online_path, poppler_online_folder_path
import os
import win32com.client as com


class DownLoadingPopUp(tk.Frame):
    """Objeto de carga que se muestra mientras
    se estan descargando los recursos de la AI"""

    def __init__(self, master, queue: Queue, gui, process: Process):
        super().__init__()
        self.master = master
        self.process = process
        self.run = True
        self.queue = queue
        self.focus_set()
        self.value = 0
        self.frame = tk.Frame(self)
        self.frame.columnconfigure(0, weight=1)
        self.frame.rowconfigure(0, weight=1)
        self.frame.place(relx=.4, rely=.2)
        self.wheel = Meter(master=self.frame, amountused=self.value, labeltext='Instalando \nArchivos...\n\n',
                           meterstyle='primary.TLabel',
                           padding=20, showvalue=False, metersize=250, labelstyle='primary.TLabel')
        self.wheel.grid(row=0, column=0, sticky='nswe')
        self.stop_button = ttk.Button(self.frame, text='Cancelar Instalación', command=self.close_app,
                                      style='primary.TButton')
        self.stop_button.grid(row=1, column=0, sticky='ewns')
        self.place(rely=0.05, relx=0, relwidth=1 - 0.3, relheight=.95)
        while self.run:
            self.update_percentage()
            self.wheel.amountused = self.value
            if self.value >= 99:
                self.value = 0
            gui.update()
            if not queue.empty():
                self.run = False
                self.close_app()

    def close_app(self):
        self.wheel = None
        self.destroy()
        self.process.terminate()
        self.run = False
        self.queue.put([None, None])
        print('Proceso finalizado')

    def update_percentage(self):
        if not os.path.isdir(local_app_folder):
            self.value = 0
            return
        size_1 = get_size(poppler_online_folder_path)
        size_2 = get_size(tesseract_folder_online_path)
        total_size = size_1 + size_2
        current_size = get_size(local_app_folder)
        self.value = (current_size / total_size) * 100


def get_size(folder_path):
    fso = com.Dispatch("Scripting.FileSystemObject")
    folder = fso.GetFolder(folder_path)
    MB = 1024 * 1024.0
    return folder.Size / MB
