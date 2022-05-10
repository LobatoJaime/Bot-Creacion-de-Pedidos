import datetime
import tkinter as tk
from tkinter import ttk
from ttkbootstrap import Style
import pandas as pd
import numpy as np
from tkinter import filedialog, messagebox
import datetime as dt
from AI_Engine.main import main
from ...constants import downloads_folder
import numpy as np
from ..scrollable_frame import ScrollFrame


class CreateOrderTable:
    """Clase para la tabla incial donde se escribe la orden manualmente"""

    def __init__(self, parent_window: tk.Frame, orders: pd.DataFrame = None, headers: list = None):
        self.parent_window = parent_window
        if orders is not None:
            headers = list(orders)
        elif headers is not None:
            self.headers = headers
        self.table_frame = tk.Frame(parent_window)
        scrollframe = ScrollFrame(self.table_frame, scrollspeed=10, r=0, c=0, cspan=1).colcfg(range(1), weight=1).frame
        self.frame = ttk.Frame(scrollframe)
        self.frame.grid(row=0, column=0, sticky='nsew')
        self.frame.bind('<Return>', self.on_enter)
        # Hacer encabezado
        for col in range(len(headers)):
            entry = ttk.Label(self.frame, width=20, text=headers[col], style='primary.Inverse.TLabel')
            entry.grid(row=0, column=col, sticky='ew', padx=1)
        if orders is not None:
            self.entries = []
            for index in orders.index:
                row = []
                for col in range(len(orders.columns)):
                    text = orders[orders.columns[col]][index]
                    entry = ttk.Entry(self.frame, width=20)
                    entry.insert(0, text)
                    entry.grid(row=index + 1, column=col)
                    row.append(entry)
                self.entries.append(row)
        else:
            self.entries = []
            for index in range(1):
                row = []
                for col in range(len(headers)):
                    if col in [1, 6]:
                        if col == 1:
                            text = 'manual'
                        elif col == 6:
                            text = '1'
                        entry = ttk.Label(self.frame, text=text, width=20, background='grey',
                                          padding=5, relief='sunken')
                        entry.grid(row=index + 1, column=col)
                        row.append(entry)
                    else:
                        entry = ttk.Entry(self.frame, width=20)
                        entry.grid(row=index + 1, column=col)
                        row.append(entry)
                self.entries.append(row)

        self.latest_index = 1
        self.add_button = ttk.Button(self.frame, text='Agregar entrada',
                                     command=lambda: [self.add_row()])
        self.add_button.grid(row=self.latest_index + 1, column=len(headers) - 1, sticky='e', pady=10)
        self.delete_button = ttk.Button(self.frame, text='Eliminar entrada', style='danger.TButton',
                                        command=lambda: [self.delete_row()])
        for col_n in range(8):
            self.frame.columnconfigure(col_n, weight=1)
        for row_n in range(50):
            self.frame.columnconfigure(row_n, weight=1)

    def add_row(self):
        """Funcion que agrega una fila en la tabla"""
        order_number = self.entries[0][0].get()
        reference = self.entries[-1][2].get()
        row = []
        for col in range(len(self.headers)):
            if col in [1, 6]:
                if col == 1:
                    text = 'manual'
                elif col == 6:
                    text = '1'
                entry = ttk.Label(self.frame, text=text, width=20, background='grey',
                                  padding=5, relief='sunken')
                entry.grid(row=self.latest_index + 1, column=col)
                row.append(entry)
            else:
                entry = ttk.Entry(self.frame, width=20)
                if col == 0:
                    entry.insert(0, order_number)
                elif col == 2:
                    entry.insert(0, reference)
                entry.grid(row=self.latest_index + 1, column=col)
                row.append(entry)
        self.entries.append(row)
        self.latest_index = self.latest_index + 1
        self.add_button.grid(row=self.latest_index + 1, column=len(self.headers) - 1, sticky='e', pady=10)
        if self.latest_index >= 2:
            self.delete_button.grid(row=self.latest_index + 1, column=len(self.headers) - 2, sticky='e', pady=10)

    def delete_row(self):
        """Funcion que elimina una fila en la tabla"""
        row = self.latest_index - 1
        for col in range(len(self.headers)):
            self.entries[row][col].destroy()
        self.entries.remove(self.entries[row])
        self.latest_index = self.latest_index - 1
        self.add_button.grid(row=self.latest_index + 1, column=len(self.headers) - 1, sticky='e', pady=10)
        if self.latest_index < 2:
            self.delete_button.grid_forget()
        if self.latest_index >= 2:
            self.delete_button.grid(row=self.latest_index + 1, column=len(self.headers) - 2, sticky='e', pady=10)

    def delete_current_row(self, event):
        """Borra la fila que se esta escribiendo actualmente"""
        active_widget = event.widget
        for row_n, row in enumerate(self.entries):
            for widget in row:
                if str(widget) == str(active_widget):
                    if len(self.entries) < 2:
                        return
                    active_row = row
                    for entry in active_row:
                        entry.destroy()
                    self.entries.pop(row_n)
                    self.latest_index = self.latest_index - 1
                    if self.latest_index < 2:
                        self.delete_button.grid_forget()
                    return

    def update_cells(self):
        """Funcion que actualiza los valores de order number y
        reference para que tengas todos los mismos valores"""
        order_number = self.entries[0][0].get()
        reference = self.entries[0][2].get()
        index = 0
        for row in self.entries:
            for col in range(len(row)):
                if col == 0:
                    self.entries[index][col].delete(0, 1000)
                    self.entries[index][col].insert(0, order_number)
                # elif col == 2:
                #     self.entries[index][col].delete(0, 1000)
                #     self.entries[index][col].insert(0, reference)
            index = index + 1

    def on_enter(self, event):
        """Evento que hace que se selccione la selda inferior a la selccionada
        al presionar enter, tambien hace que se cree una fila en caso de que esta sea
        la ultima"""
        focus = self.parent_window.focus_get()
        index = 0
        for row in self.entries:
            for col in range(len(row)):
                e = self.entries[index][col]
                if e == focus:
                    try:
                        self.entries[index + 1][col].focus_set()
                    except IndexError:
                        self.add_row()
                        self.entries[index + 1][col].focus_set()
            index = index + 1

    def read_table(self) -> pd.DataFrame:
        order_numbers = []
        clients = []
        references = []
        quantities = []
        ship_out_dates = []
        arrival_dates = []
        confidences = []
        index = 0
        for row in self.entries:
            for col in range(len(row)):
                if col not in [1, 6]:
                    value = self.entries[index][col].get()
                    if value in ['', ' ']:
                        value = np.NaN
                if col == 0:
                    order_numbers.append(value)
                elif col == 1:
                    clients.append('manual')
                elif col == 2:
                    references.append(value)
                elif col == 3:
                    quantities.append(value)
                elif col == 4:
                    ship_out_dates.append(value)
                elif col == 5:
                    arrival_dates.append(value)
                elif col == 6:
                    confidences.append('1')
            index = index + 1

        data = {"order_number": order_numbers,
                "client": clients,
                "reference": references,
                "quantity": quantities,
                'ship_out_date': ship_out_dates,
                'arrival_date': arrival_dates,
                "confidence": confidences}
        self.orders = pd.DataFrame(data, dtype=str)
        return self.orders

    def save_table(self):
        from ...constants import exports_folder
        self.read_table()
        order_number = self.orders['order_number'][self.orders.index[0]]
        reference = self.orders['reference'][self.orders.index[0]]
        today_date = dt.datetime.now().strftime('%d.%m.%y_%H.%M')
        if (str(order_number), str(reference)) != (str(np.nan), str(np.nan)):
            default_name = '{}_{}_{}'.format(order_number, reference, today_date)
        else:
            default_name = 'export'
        file = filedialog.asksaveasfile(mode='w', defaultextension=".xlsx",
                                        initialfile=default_name, initialdir=exports_folder,
                                        filetypes=(("excel files", "*.xlsx"), ("all files", "*.*")))
        try:
            save_root = file.name
            if '.xlsx' not in save_root:
                save_root = save_root+'.xlsx'
            orders = self.read_table()
            orders.to_excel(save_root, index=False)
        except AttributeError:
            return

    def import_table(self):
        from ...constants import exports_folder
        file_root = filedialog.askopenfilename(initialdir=exports_folder,
                                               filetypes=(("excel files", "*.xlsx"), ("all files", "*.*")))
        try:
            data = pd.read_excel(file_root, dtype=str)
            orders = pd.DataFrame(data, dtype=str)
        except FileNotFoundError:
            return
        # Borrar tabla existente
        for row in self.entries:
            for entry in row:
                entry.destroy()

        # Escribir la tabla importada
        self.entries = []
        for index in range(1):
            row = []
            for col in range(len(self.headers)):
                if col in [1, 6]:
                    if col == 1:
                        text = 'manual'
                    elif col == 6:
                        text = '1'
                    entry = ttk.Label(self.frame, text=text, width=20, background='grey',
                                      padding=5, relief='sunken')
                    entry.grid(row=index + 1, column=col)
                    row.append(entry)
                else:
                    entry = ttk.Entry(self.frame, width=20)
                    entry.grid(row=index + 1, column=col)
                    row.append(entry)
            self.entries.append(row)
        self.latest_index = 1
        for index in orders.index:
            if index > 0:
                self.add_row()

        index = 0
        for row in self.entries:
            for col in range(len(row)):
                if col not in [1, 6]:
                    text = str(orders[orders.columns[col]][index])
                    self.entries[index][col].insert(0, text)
            index = index + 1

    def clear_table(self):
        # Borrar tabla existente
        for row in self.entries:
            for entry in row:
                entry.destroy()
        self.entries = []
        for index in range(1):
            row = []
            for col in range(len(self.headers)):
                if col in [1, 6]:
                    if col == 1:
                        text = 'manual'
                    elif col == 6:
                        text = '1'
                    entry = ttk.Label(self.frame, text=text, width=20, background='grey',
                                      padding=5, relief='sunken')
                    entry.grid(row=index + 1, column=col)
                    row.append(entry)
                else:
                    entry = ttk.Entry(self.frame, width=20)
                    entry.grid(row=index + 1, column=col)
                    row.append(entry)
            self.entries.append(row)
        self.latest_index = 1
        self.delete_button.grid_forget()

    def move_right(self, event):
        """Evento que hace que se seleccione la celda de la derecha
        al presionar la flecha de la derecha"""
        focus = self.parent_window.focus_get()
        index = 0
        for row in self.entries:
            for col in range(len(row)):
                e = self.entries[index][col]
                if e == focus and col not in [1, 6]:
                    try:
                        if col == 0:
                            self.entries[index][col + 2].focus_set()
                        elif col not in [5, 6]:
                            self.entries[index][col + 1].focus_set()
                    except IndexError:
                        pass
            index = index + 1

    def move_left(self, event):
        """Evento que hace que se seleccione la celda de la izquierda
        al presionar la flecha de la izquierda"""
        focus = self.parent_window.focus_get()
        index = 0
        for row in self.entries:
            for col in range(len(row)):
                e = self.entries[index][col]
                if e == focus:
                    try:
                        if col == 2:
                            self.entries[index][col - 2].focus_set()
                        elif col != 0:
                            self.entries[index][col - 1].focus_set()
                    except IndexError:
                        pass
            index = index + 1

    def move_down(self, event):
        """Evento que hace que se seleccione la celda de abajo
        al presionar la flecha de abajo"""
        focus = self.parent_window.focus_get()
        index = 0
        for row in self.entries:
            for col in range(len(row)):
                e = self.entries[index][col]
                if e == focus:
                    try:
                        self.entries[index + 1][col].focus_set()
                    except IndexError:
                        pass
            index = index + 1

    def move_up(self, event):
        """Evento que hace que se seleccione la celda de arriba
        al presionar la flecha de arriba"""
        focus = self.parent_window.focus_get()
        index = 0
        for row in self.entries:
            for col in range(len(row)):
                e = self.entries[index][col]
                if e == focus:
                    try:
                        self.entries[index - 1][col].focus_set()
                    except IndexError:
                        pass
            index = index + 1

    def scan_pdf(self, client_name: str, file_uploaded_text: tk.Label):
        """Se llama el engine de AI para escanear el pdf"""
        if client_name == 'Cliente a escanear':
            messagebox.showinfo(title='Error', message='Es necesario seleccionar un cliente para escanear un pedido')
            return
        # Usar AI
        # path = filedialog.askdirectory(initialdir='Descargas')
        path = filedialog.askopenfilename(initialdir=downloads_folder)
        if path == '':
            return
        # path = r'C:\Users\IRDGFRM\Downloads\Prueba'
        orders: pd.DataFrame = main(proveedor=client_name, path_archivos=path, is_img_shown=False)
        if orders is None or orders.empty:
            messagebox.showerror(title='Error', message='Hubo un error al escanear el archivo.\n'
                                                        'Posibles errores:\n'
                                                        '- Comprueba que hayas seleccionado el cliente correcto\n'
                                                        '- La I.A no esta entrenada para este pedido')
            self.clear_table()
            return
        print(orders.to_string())

        # Borrar tabla existente
        for row in self.entries:
            for entry in row:
                entry.destroy()

        # Escribir la tabla importada
        self.entries = []
        for index in range(1):
            row = []
            for col in range(len(self.headers)):
                if col in [1, 6]:
                    if col == 1:
                        text = 'manual'
                    elif col == 6:
                        text = '1'
                    entry = ttk.Label(self.frame, text=text, width=20, background='grey',
                                      padding=5, relief='sunken')
                    entry.grid(row=index + 1, column=col)
                    row.append(entry)
                else:
                    entry = ttk.Entry(self.frame, width=20)
                    entry.grid(row=index + 1, column=col)
                    row.append(entry)
            self.entries.append(row)
        self.latest_index = 1
        for index in orders.index:
            if index > 0:
                self.add_row()

        index = 0
        for row in self.entries:
            for col in range(len(row)):
                if col not in [1, 6]:
                    text = str(orders[orders.columns[col]][index])
                    self.entries[index][col].insert(0, text)
            index = index + 1

        # Guardar la direction del archivo en el Label de la interfaz
        file_uploaded_text.configure(text=path)
