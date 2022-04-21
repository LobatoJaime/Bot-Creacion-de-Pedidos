import tkinter as tk
from tkinter import ttk


class ColorGuideWidget:
    """Leyenda de colores para el historial de cambios"""

    def __init__(self, window_frame: tk.Frame, title_font=("Arial", 16), text_font=("Arial", 12)):
        self.window_frame = window_frame
        if title_font is not None:
            self.widget_frame = tk.LabelFrame(window_frame, text='Leyenda', font=title_font)
        else:
            self.widget_frame = ttk.LabelFrame(window_frame, text='Leyenda')
        for i in range(0, 5):
            if i == 0:
                fg = '#79ffb2'
                description = 'Pedido Nuevo'
            elif i == 1:
                fg = '#ff8080'
                description = 'Pedido Eliminado'
            elif i == 2:
                fg = '#ffc143'
                description = 'Pedido Cambiado'
            elif i == 3:
                fg = '#95a5a6'
                description = 'Cambios Rechazados'
            else:
                fg = 'Light Gray'
                description = 'Sin Cambios'
            text = tk.Label(self.widget_frame, text='⬤', fg=fg, font=text_font)
            text.grid(row=i, column=0, padx=4)
            text2 = tk.Label(self.widget_frame, text=description, font=text_font)
            text2.grid(row=i, column=1, sticky='w', pady=5)

    def place(self, relx=None, rely=None, relwidth=None, relheight=None):
        self.widget_frame.place(rely=rely, relx=relx, relheight=relheight, relwidth=relwidth)
