import tkinter as tk
from tkinter import ttk
from .client_settings import ClientSettings
from .general_settings import GeneralSettings
from .authorize_settings import AuthorizeSettings


class SelectSettingsBar:
    """Widget donde se selecciona la categoria del ajuste
    que se quiere editar"""

    def __init__(self, window_frame: tk.Frame):
        self.window_frame = window_frame
        self.widget_frame = tk.Frame(self.window_frame, background="black")
        self.widget_frame.columnconfigure(0, weight=1)
        self.widget_frame.rowconfigure(0, weight=1)
        headers = ['Ajustes']
        settings = ['General', 'Clientes', 'Aprobaciones']
        self.listbox = tk.Listbox(self.widget_frame, bd=0, font=("Helvetica", 12))
        for i, setting in enumerate(settings):
            self.listbox.insert(i, setting)
        self.listbox.grid(row=0, column=0, sticky='nsew')
        self.listbox.bind("<Double-Button-1>", self.on_selection)
        self.selection = str
        self.right_widgets_window = tk.Frame(self.window_frame)
        self.right_widgets_window.place(relx=0.113, rely=.0332, relheight=1 - 0.0332, relwidth=1 - .113)

    def place(self, relx=None, rely=None, relwidth=None, relheight=None):
        self.widget_frame.place(rely=rely, relx=relx, relheight=relheight, relwidth=relwidth)

    def on_selection(self, event):
        for i in self.listbox.curselection():
            self.selection = self.listbox.get(i)
        if self.selection == 'Clientes':
            self.client_settings = ClientSettings(self.right_widgets_window)
            self.client_settings.place(relx=0, rely=0, relheight=1, relwidth=1)
        elif self.selection == 'General':
            self.general_settings = GeneralSettings(self.right_widgets_window)
            self.general_settings.place(relx=0, rely=0, relheight=1, relwidth=1)
        elif self.selection == 'Aprobaciones':
            self.authorize_settings = AuthorizeSettings(self.right_widgets_window)
            self.authorize_settings.place(relx=0, rely=0, relheight=1, relwidth=1)