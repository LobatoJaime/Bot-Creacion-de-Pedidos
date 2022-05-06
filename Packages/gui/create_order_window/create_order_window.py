import tkinter as tk
from tkinter import ttk
from Packages.gui.create_order_window.create_order_table import CreateOrderTable
from ..menu_bar import MenuBar
from ..save_order_file import save_order_file
from ...constants import ai_supported_clients


class CreateOrderWindow:
    """Clase donde se crea la pantalla
    para crear un nuevo pedido"""

    def __init__(self, root: tk.Tk, gui):
        self.root = root
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        # Barra de menu
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        # Tabla para crear pedido
        self.create_order_table = CreateOrderTable(self.window_frame, orders=None,
                                                   headers=['order_number', 'client', 'reference', 'quantity',
                                                            'ship_out_date',
                                                            'arrival_date', 'confidence'])
        self.root.bind('<Return>', self.create_order_table.on_enter)
        self.root.bind('<Right>', self.create_order_table.move_right)
        self.root.bind('<Left>', self.create_order_table.move_left)
        self.root.bind('<Down>', self.create_order_table.move_down)
        self.root.bind('<Up>', self.create_order_table.move_up)
        self.create_order_table.frame.place(rely=0.05, relx=0, relwidth=1-0.3)
        # Cuadro de ajustes
        self.settings_label_frame = ttk.Labelframe(self.window_frame, text='Ajustes')
        self.settings_label_frame.place(rely=0.05, relx=0.72, relwidth=0.25)
        # Boton de guardar pedido
        self.save_button = ttk.Button(self.settings_label_frame, text='Guardar Tabla', style='info.TButton',
                                      command=lambda: [self.create_order_table.save_table()])
        self.save_button.grid(row=0, column=0, sticky='w', pady=6, padx=15)
        # Boton de importar pedido
        self.import_button = ttk.Button(self.settings_label_frame, text='Importar Tabla', style='info.TButton',
                                        command=lambda: [self.create_order_table.import_table()])
        self.import_button.grid(row=1, column=0, sticky='w', pady=6, padx=15)
        # Boton para borrar pedido
        self.clear_button = ttk.Button(self.settings_label_frame, text='Clear All', style='secondary.TButton',
                                       command=lambda: [self.create_order_table.clear_table()])
        self.clear_button.grid(row=2, column=0, sticky='w', pady=6, padx=15)
        # Boton para adjuntar pdf
        self.upload_file_button = ttk.Button(self.settings_label_frame, text='Adjuntar Orden', style='info.TButton',
                                             command=lambda: [save_order_file(self.file_uploaded_text)])
        self.upload_file_button.grid(row=3, column=0, sticky='w', pady=6, padx=15)
        # Texto con la ruta del archivo adjuntado
        self.file_uploaded_text = ttk.Label(self.settings_label_frame, text='Ningun archivo seleccionado')
        self.file_uploaded_text.grid(row=4, column=0, sticky='w', pady=6, padx=15)
        # Usar AI para subir un pdf
        self.ai_button = ttk.Button(self.settings_label_frame, text='Escanear PDF',
                                             command=lambda: [self.create_order_table.scan_pdf(self.ai_client_name.get(), self.file_uploaded_text)], style='success.TButton')
        self.ai_button.grid(row=6, column=0, sticky='w', pady=6, padx=15)
        self.ai_client_name = ttk.Combobox(self.settings_label_frame, values=ai_supported_clients, state='readonly')
        self.ai_client_name.set('Cliente a escanear')
        self.ai_client_name.grid(row=5, column=0, sticky='w', pady=6, padx=15)
        self.ai_client_name.bind("<<ComboboxSelected>>", lambda event: [self.ai_client_name.selection_clear()])

    def show(self):
        self.window_frame.tkraise()
        self.root.bind('<Return>', self.create_order_table.on_enter)
        self.root.bind('<Right>', self.create_order_table.move_right)
        self.root.bind('<Left>', self.create_order_table.move_left)
        self.root.bind('<Down>', self.create_order_table.move_down)
        self.root.bind('<Up>', self.create_order_table.move_up)
        self.root.bind('<Delete>', self.create_order_table.delete_current_row)
        self.create_order_table.clear_table()
        self.file_uploaded_text.configure(text='Ningun archivo seleccionado')
