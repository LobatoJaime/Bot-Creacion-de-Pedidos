import win32com.client


def move_email_to_folder(email, dest_folder):
    """Funcion que mueve el correo a la carpeta
    correspondiente una  vez se haya intentado subir el archivo"""
    outlook = win32com.client.Dispatch("Outlook.Application").GetNamespace("MAPI")
    # Select main Inbox
    folder = outlook.Folders.Item("JDISA_orders")
    dest = folder.Folders.Item(dest_folder)
    # Move Email
    email.Move(dest)
