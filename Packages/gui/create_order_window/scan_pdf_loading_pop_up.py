import tkinter as tk
from tkinter import ttk
from multiprocessing import Queue, Process
from ttkbootstrap.widgets import Meter
import pandas as pd


class LoadingPopUp(tk.Toplevel):
    """Pop up de carga que se muestra mientras
    se esta escaneando el pdf con la AI"""

    def __init__(self, master, queue: Queue, gui, process: Process):
        super().__init__()
        self.master = master
        self.process = process
        self.run = True
        self.queue = queue
        self.focus_set()
        self.title('Escaneando Pedido')
        self.protocol("WM_DELETE_WINDOW", self.close_app)
        self.geometry('300x350')
        # x = master.winfo_x()
        # y = master.winfo_y()
        # self.geometry('+{}+{}'.format(x + 300, y + 200))
        master.eval(f'tk::PlaceWindow {str(self)} center')
        self.wm_resizable(False, False)
        value = 0
        self.columnconfigure(0, weight=1)
        self.rowconfigure(0, weight=1)
        self.wheel = Meter(master=self, amountused=value, labeltext='Escaneando \nArchivo...\n\n', meterstyle='primary.TLabel',
                      padding=20, showvalue=False, metersize=250, labelstyle='primary.TLabel')
        self.wheel.grid(row=0, column=0, sticky='nswe')
        self.stop_button = ttk.Button(self, text='Cancelar proceso', command=self.close_app, style='primary.TButton')
        self.stop_button.grid(row=1, column=0, sticky='ewns')
        while self.run:
            value = value + 1
            self.wheel.amountused = value
            if value >= 99:
                value = 0
            gui.update()
            if not queue.empty():
                self.run = False
                self.close_app()

    def close_app(self):
        self.wheel = None
        self.destroy()
        self.process.terminate()
        self.run = False
        self.queue.put(False)
        print('Escaneado terminado')
