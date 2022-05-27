import tkinter as tk
from tkinter import ttk
import pandas as pd
import ttkbootstrap
from ...constants import settings_xlsx_path
from ...get_settings import get_settings
from tkinter import messagebox


class GeneralSettings:
    """Objeto donde se pueden ver los ajustes generales de la
    aplicación"""

    def __init__(self, master: tk.Frame):
        self.master = master
        self.widget_frame = tk.Frame(self.master)
        # self.widget_frame.columnconfigure(0, weight=1)
        # self.widget_frame.rowconfigure(0, weight=1)

        # descargar ajustes actuales
        settings = get_settings()
        self.days_for_shipping_date = int(settings['days_for_shipping_date'][0])
        self.day_of_week_for_shipping_date = settings['day_of_week_shipping_date'][0]
        # titulo
        title = ttk.Label(self.widget_frame, text='Ajustes Generales', font=("Helvetica", 18))
        title.grid(row=0, column=0, sticky='nw', pady=5, padx=5)
        # numero de dias para shipping date
        label1 = ttk.Label(self.widget_frame, text='Número de días necesarios para shipping date:')
        label1.grid(row=1, column=0, sticky='w', padx=5)
        self.setting1 = ttk.Entry(self.widget_frame, width=10)
        self.setting1.grid(row=1, column=1, sticky='w', pady=5)
        self.setting1.insert(tk.END, self.days_for_shipping_date)
        self.setting1.bind("<KeyRelease>", lambda event: [self.update_week_shipping_date(event), self.update_save_button()])
        label2 = ttk.Label(self.widget_frame, text='⟶ Número de semanas para shipping date:')
        label2.grid(row=1, column=2, sticky='w', padx=5)
        self.setting2 = ttk.Label(self.widget_frame, text=self.days_for_shipping_date / 7,
                                  width=5, style='secondary.Inverse.TLabel', foreground='black', borderwidth=5,
                                  relief='groove', background='#ecf0f1')
        self.setting2.grid(row=1, column=3, sticky='w', padx=5)
        # dia de la semana para shipping date
        label3 = ttk.Label(self.widget_frame, text='Día de la semana para enviar el pedido:')
        label3.grid(row=2, column=0, sticky='w', padx=5)
        weekdays = ('lunes', 'martes', 'jueves', 'viernes', 'sábado', 'domingo')
        self.setting3 = ttk.Combobox(self.widget_frame, values=weekdays, state='readonly')
        self.setting3.grid(row=2, column=1, sticky='w')
        self.setting3.set(self.day_of_week_for_shipping_date)
        self.setting3.bind("<<ComboboxSelected>>", lambda event: [self.setting3.selection_clear(),
                                                                  self.update_save_button()])
        # boton de guardar cambios
        self.save_button = ttk.Button(self.widget_frame, text='Guardar Cambios', command=self.save_settings)
        self.save_button.place(relx=1, rely=.95, x=-180)
        self.new_changes = False

    def place(self, relx=None, rely=None, relwidth=None, relheight=None):
        self.widget_frame.place(rely=rely, relx=relx, relheight=relheight, relwidth=relwidth)

    def update_week_shipping_date(self, event):
        """Actualiza el número de semanas de shipping week
        cuando se cambia el número de dias"""
        value = self.setting1.get()
        try:
            value = int(value)
        except ValueError:
            value = 0
        self.setting2.config(text=value / 7)

    def update_save_button(self):
        current_day = self.setting3.get()
        try:
            current_number_of_days = int(self.setting1.get())
        except ValueError:
            current_number_of_days = 0
        if current_number_of_days != self.days_for_shipping_date or current_day != self.day_of_week_for_shipping_date:
            self.save_button.config(style='success.TButton')
            self.new_changes = True
        else:
            self.new_changes = False
            self.save_button.config(style='primary.TButton')

    def save_settings(self):
        if not self.new_changes:
            return
        current_number_of_days = self.setting1.get()
        current_day = self.setting3.get()
        # chequear formato de los campos
        try:
            current_number_of_days = int(current_number_of_days)
        except ValueError:
            messagebox.showerror('Error', 'Error al guardar los ajustes, asegurate usar números enteros para los dias')
            return
        settings = get_settings()
        settings['days_for_shipping_date'][0] = current_number_of_days
        settings['day_of_week_shipping_date'][0] = current_day
        settings.to_excel(settings_xlsx_path)
        settings = get_settings()
        self.days_for_shipping_date = int(settings['days_for_shipping_date'][0])
        self.day_of_week_for_shipping_date = settings['day_of_week_shipping_date'][0]
        self.update_save_button()
        messagebox.showinfo('Info', 'Cambios guardados de manera exitosa')
