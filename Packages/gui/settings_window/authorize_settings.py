import tkinter as tk
from tkinter import ttk, messagebox, dialog
import pandas as pd
import numpy as np
from Packages.constants import usuarios_root


class AuthorizeSettings:
    """Ventana de tkinter donde se manejan los clientes
    registrados"""

    def __init__(self, window_frame: tk.Frame):
        self.window_frame = window_frame
        self.widget_frame = tk.Frame(self.window_frame)
        # Mostrar tabla de usuario ya creados
        self.users_table = UsersTable(self.widget_frame)
        self.users_table.place(relx=0.005, rely=0, relheight=.9, relwidth=.7)
        self.users_df = self.users_table.get_df()
        print(self.users_df.to_string())

        # Botón de agregar usuarios
        add_label_frame = ttk.Labelframe(self.widget_frame, text='Agregar Usuario')
        add_label_frame.place(relx=.75, rely=0.01)
        name = ttk.Label(add_label_frame, text='Nombre')
        name.grid(row=0, column=0, padx=4, pady=4)
        self.name_entry = ttk.Entry(add_label_frame)
        self.name_entry.grid(row=0, column=1, padx=4, pady=4)

        user = ttk.Label(add_label_frame, text='Usuario')
        user.grid(row=1, column=0, padx=4, pady=4)
        self.user_entry = ttk.Entry(add_label_frame)
        self.user_entry.grid(row=1, column=1, padx=4, pady=4)

        email = ttk.Label(add_label_frame, text='Email')
        email.grid(row=2, column=0, padx=4, pady=4)
        self.email_entry = ttk.Entry(add_label_frame)
        self.email_entry.grid(row=2, column=1, padx=4, pady=4)

        email_auth = ttk.Label(add_label_frame, text='Email Aprobador')
        email_auth.grid(row=3, column=0, padx=4, pady=4)
        self.email_auth_entry = ttk.Entry(add_label_frame)
        self.email_auth_entry.grid(row=3, column=1, padx=4, pady=4)

        user_auth = ttk.Label(add_label_frame, text='Usuario Aprobador')
        user_auth.grid(row=4, column=0, padx=4, pady=4)
        self.user_auth_entry = ttk.Entry(add_label_frame)
        self.user_auth_entry.grid(row=4, column=1, padx=4, pady=4)

        email_auth_2 = ttk.Label(add_label_frame, text='Email Aprobador 2')
        email_auth_2.grid(row=5, column=0, padx=4, pady=4)
        self.email_auth_entry_2 = ttk.Entry(add_label_frame)
        self.email_auth_entry_2.grid(row=5, column=1, padx=4, pady=4)

        user_auth_2 = ttk.Label(add_label_frame, text='Usuario Aprobador 2')
        user_auth_2.grid(row=6, column=0, padx=4, pady=4)
        self.user_auth_entry_2 = ttk.Entry(add_label_frame)
        self.user_auth_entry_2.grid(row=6, column=1, padx=4, pady=4)

        accept_button = ttk.Button(add_label_frame, text='Aceptar', command=lambda: self.add_client_clicked())
        accept_button.grid(row=7, column=0, columnspan=2, padx=4, pady=4)

        # Botón de editar usuario
        edit_label_frame = ttk.Labelframe(self.widget_frame, text='Editar Usuario')
        edit_label_frame.place(relx=.75, rely=0.40)
        name3 = ttk.Label(edit_label_frame, text='Nombre')
        name3.grid(row=0, column=0, padx=4, pady=4)
        user1_list = self.users_df['Nombre'].to_list()
        self.name2_box = ttk.Combobox(edit_label_frame, values=user1_list, state='readonly')
        self.name2_box.set('Selecciona un usuario')
        self.name2_box.grid(row=0, column=1, padx=4, pady=4)
        self.name2_box.bind("<<ComboboxSelected>>", lambda event: [self.name2_box.selection_clear()])
        edit_button = ttk.Button(edit_label_frame, text='Editar Usuario', style='danger.TButton',
                                 command=lambda: [self.edit_client_clicked()])
        edit_button.grid(row=2, column=0, columnspan=2, padx=4, pady=4)

        # Botón de eliminar usuario
        del_label_frame = ttk.Labelframe(self.widget_frame, text='Eliminar Usuario')
        del_label_frame.place(relx=.75, rely=0.55)
        name2 = ttk.Label(del_label_frame, text='Nombre')
        name2.grid(row=0, column=0, padx=4, pady=4)
        user_list = self.users_df['Nombre'].to_list()
        self.name_box = ttk.Combobox(del_label_frame, values=user_list, state='readonly')
        self.name_box.set('Selecciona un usuario')
        self.name_box.grid(row=0, column=1, padx=4, pady=4)
        self.name_box.bind("<<ComboboxSelected>>", lambda event: [self.name_box.selection_clear()])
        delete_button = ttk.Button(del_label_frame, text='Eliminar Usuario', style='danger.TButton',
                                   command=lambda: [self.del_client_clicked()])
        delete_button.grid(row=2, column=0, columnspan=2, padx=4, pady=4)

    def place(self, relx=None, rely=None, relwidth=None, relheight=None):
        self.widget_frame.place(rely=rely, relx=relx, relheight=relheight, relwidth=relwidth)

    def add_client_clicked(self):
        name = self.name_entry.get()
        username = self.user_entry.get()
        if (name in self.users_df['Nombre'].to_list()) or (username in self.users_df['Usuario'].to_list()):
            confirm = messagebox.askyesno(title='Error', message='Ya existe un usuario con ese nombre/usuario, ¿seguro que quiere editarlo?')
            if confirm:
                existing_user_index = self.users_df[(self.users_df['Nombre'] == name) | (self.users_df['Usuario'] == username)].index[0]
                self.users_df.loc[existing_user_index] = [self.name_entry.get(), self.user_entry.get(), self.email_entry.get(),
                                                          self.email_auth_entry.get(), self.user_auth_entry.get(),
                                                          self.email_auth_entry_2.get(), self.user_auth_entry_2.get()]
                messagebox.showinfo(title='Editado', message='Usuario actualizado!')
            else:
                return
        else:
            self.users_df.loc[len(self.users_df.index)] = [name, self.user_entry.get(), self.email_entry.get(),
                                                           self.email_auth_entry.get(), self.user_auth_entry.get(),
                                                           self.email_auth_entry_2.get(), self.user_auth_entry_2.get()]
        self.users_df = self.users_df.sort_values(by='Nombre')
        self.users_df.to_excel(usuarios_root, index=False)
        self.users_table.frame.destroy()
        self.users_table = UsersTable(self.widget_frame)
        self.users_table.place(relx=0.005, rely=0, relheight=.9)
        self.name_box['values'] = self.users_df['Nombre'].to_list()
        self.name2_box['values'] = self.users_df['Nombre'].to_list()
        self.name_box.set('Selecciona un usuario')
        self.name2_box.set('Selecciona un usuario')
        self.name_entry.delete(0, tk.END)
        self.user_entry.delete(0, tk.END)
        self.user_auth_entry.delete(0, tk.END)
        self.user_auth_entry_2.delete(0, tk.END)
        self.email_auth_entry.delete(0, tk.END)
        self.email_auth_entry_2.delete(0, tk.END)
        self.email_entry.delete(0, tk.END)


    def edit_client_clicked(self):
        selected_name = self.name2_box.get()  # Retrieve the selected user's name
        if selected_name == 'Selecciona un usuario':
            messagebox.showwarning('Error', 'Por favor selecciona un usuario para editar')
            return
        selected_user_data = self.users_df[self.users_df['Nombre'] == selected_name].iloc[0]
        # Populate entry fields with the selected user's details
        self.name_entry.delete(0, tk.END)
        self.name_entry.insert(0, selected_user_data['Nombre'])
        self.user_entry.delete(0, tk.END)
        self.user_entry.insert(0, selected_user_data['Usuario'])
        self.email_entry.delete(0, tk.END)
        self.email_entry.insert(0, selected_user_data['Email'])
        self.email_auth_entry.delete(0, tk.END)
        self.email_auth_entry.insert(0, selected_user_data['Email Aprobador'])
        self.user_auth_entry.delete(0, tk.END)
        self.user_auth_entry.insert(0, selected_user_data['Usuario Aprobador'])
        self.email_auth_entry_2.delete(0, tk.END)
        self.email_auth_entry_2.insert(0, selected_user_data['Email Aprobador 2'])
        self.user_auth_entry_2.delete(0, tk.END)
        self.user_auth_entry_2.insert(0, selected_user_data['Usuario Aprobador 2'])

    def del_client_clicked(self):
        name = self.name_box.get()
        if name == 'Selecciona un usuario':
            messagebox.showwarning('Error', 'Por favor selecciona un usuario para eliminar')
            return
        confirm_changes = messagebox.askyesno('Confirmar Cambios', 'Estas seguro que quieres eliminar el cliente?')
        if not confirm_changes:
            return
        self.users_df.drop(self.users_df.index[self.users_df['Nombre'] == name], inplace=True)
        self.users_df.reset_index()
        self.users_df = self.users_df.sort_values(by='Nombre')
        self.users_df.to_excel(usuarios_root, index=False)
        self.users_table.frame.destroy()
        self.users_table = UsersTable(self.widget_frame)
        self.users_table.place(relx=0.005, rely=0, relheight=.9)
        self.name_box['values'] = self.users_df['Nombre'].to_list()
        self.name_box.set('Selecciona un cliente')
        self.name_entry.delete(0, tk.END)
        self.user_entry.delete(0, tk.END)


class UsersTable:
    def __init__(self, parent_window: tk.Frame):
        file_root = usuarios_root
        data = pd.read_excel(file_root)
        users_table = pd.DataFrame(data, dtype=str)
        self.df = users_table
        self.headers = list(users_table)
        self.frame = ttk.Frame(parent_window)
        self.frame.rowconfigure(0, weight=1)
        self.frame.columnconfigure(0, weight=1)
        self.entries = []
        self.tree = ttk.Treeview(self.frame, columns=self.headers, show='headings', selectmode='none')
        for value in self.headers:
            self.tree.heading(value, text=value)
        for index in users_table.index:
            user_name = users_table['Nombre'][index]
            user = users_table['Usuario'][index]
            email = users_table['Email'][index]
            email_auth = users_table['Email Aprobador'][index]
            user_auth = users_table['Usuario Aprobador'][index]
            email_auth_2 = users_table['Email Aprobador 2'][index]
            user_auth_2 = users_table['Usuario Aprobador 2'][index]
            self.tree.insert('', tk.END,
                             values=(user_name, user, email, email_auth, user_auth, email_auth_2, user_auth_2))
        self.tree.grid(row=0, column=0, sticky='nsew')
        # add a scrollbar
        scrollbar = ttk.Scrollbar(self.frame, orient=tk.VERTICAL, command=self.tree.yview)
        self.tree.configure(yscroll=scrollbar.set)
        scrollbar.grid(row=0, column=1, sticky='ns', rowspan=2)
        scrollbarX = ttk.Scrollbar(self.frame, orient=tk.HORIZONTAL, command=self.tree.xview)
        self.tree.configure(xscroll=scrollbarX.set)
        scrollbarX.grid(row=1, column=0, sticky='ew')

    def place(self, relx=None, rely=None, relwidth=None, relheight=None):
        self.frame.place(rely=rely, relx=relx, relheight=relheight, relwidth=relwidth)

    def get_df(self) -> pd.DataFrame:
        return self.df
