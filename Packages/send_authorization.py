import win32com.client
import os
from Packages.constants import authorize_order_folder, usuarios_root
import pandas as pd
import subprocess



def send_authorization_email(user: list, client: str, order_number: str, reference: str):
    """Script que envia un correo electronico a traves de outlook y crea una carpeta en autorizaciones"""

    # importar archivo Excel
    df = pd.read_excel(usuarios_root)

    aprobador_folder = None
    aprobador_email = None
    receivers = []

    for idx, row in df.iterrows():
        if row['Usuario'].upper() == user[1].upper():
            aprobador_folder = row['Usuario Aprobador'].upper()
            aprobador_email = row['Email Aprobador'].upper()
            receivers.append(row["Email Aprobador"])

    sub_folder_name = '{}_{}_{}'.format(client, order_number, reference)

    if aprobador_folder != 'None' or "@" in aprobador_email:
        sub_folder_auth_save_path = os.path.join(authorize_order_folder, aprobador_folder)

        if not os.path.isdir(sub_folder_auth_save_path):
            os.mkdir(sub_folder_auth_save_path)

        sub_folder_auth_save_path = os.path.join(sub_folder_auth_save_path, sub_folder_name)

        if not os.path.isdir(sub_folder_auth_save_path):
            os.mkdir(sub_folder_auth_save_path)

        olMailItem = 0x0
        obj = win32com.client.Dispatch("Outlook.Application")
        newMail = obj.CreateItem(olMailItem)
        newMail.SentOnBehalfOfName = 'JDISA_ORDERS@JohnDeere.com'
        newMail.Subject = 'BOT - Solucitud de Aprobación de Pedido'

        body = 'Solicitud para cliente: ' + str(client) + \
        ' y numero de pedido: ' + str(order_number) + '.\n\n' + \
        'Solucitud realizada por: ' + str(user[0]) + \
        ' y usuario ' + str(user[1]) + '.\n\n\nLink al ejecutable: ' + '\\\\fcefactory1\PROGRAMAS_DE_PRODUCCION\\6.Planificacion\BotCreacionDePedidos' + '\n\n\n'

        newMail.Body = body

        cc = None

        newMail.To = "; ".join(receivers)

        newMail.Sensitivity = 2
        if cc is not None:
            newMail.CC = "; ".join(cc)

        newMail.Send()


def send_notification(user: list, client: str, order_number: str, reference: str):
    # importar archivo Excel
    df = pd.read_excel(usuarios_root)

    usuario_email = None

    for idx, row in df.iterrows():
        if row['Usuario Aprobador'].upper() == user[1].upper():
            usuario_email = row['Email'].upper()
            aprobador_email = row['Email Aprobador'].upper()

    if "@" in usuario_email:
        olMailItem = 0x0
        obj = win32com.client.Dispatch("Outlook.Application")
        newMail = obj.CreateItem(olMailItem)
        newMail.SentOnBehalfOfName = aprobador_email
        newMail.Subject = 'BOT - Solucitud Aprobada'

        body = 'Solicitud para cliente: ' + str(client) + \
               ', numero de pedido: ' + str(order_number) + ' y referencia: ' + str(reference) +'.\n\n' + \
               'APROBADA por: ' + str(user[0]) + \
               ' y usuario ' + str(user[1]) + '.\n\n\nLink al ejecutable: ' + '\\\\fcefactory1\PROGRAMAS_DE_PRODUCCION\\6.Planificacion\BotCreacionDePedidos' + '\n\n\n'

        newMail.Body = body

        cc = None

        newMail.To = "; ".join([usuario_email])

        newMail.Sensitivity = 2
        if cc is not None:
            newMail.CC = "; ".join(cc)

        newMail.Send()

def send_reject(user: list, client: str, order_number: str, reference: str):
    # importar archivo Excel
    df = pd.read_excel(usuarios_root)

    usuario_email = None

    for idx, row in df.iterrows():
        if row['Usuario Aprobador'].upper() == user[1].upper():
            usuario_email = row['Email'].upper()
            aprobador_email = row['Email Aprobador'].upper()

    if "@" in usuario_email:
        olMailItem = 0x0
        obj = win32com.client.Dispatch("Outlook.Application")
        newMail = obj.CreateItem(olMailItem)
        newMail.SentOnBehalfOfName = aprobador_email
        newMail.Subject = 'BOT - Solucitud Rechazada'

        body = 'Solicitud para cliente: ' + str(client) + \
               ', numero de pedido: ' + str(order_number) + ' y referencia: ' + str(reference) +'.\n\n' + \
               'RECHAZADA por: ' + str(user[0]) + \
               ' y usuario ' + str(user[1]) + '.\n\n\nLink al ejecutable: ' + '\\\\fcefactory1\PROGRAMAS_DE_PRODUCCION\\6.Planificacion\BotCreacionDePedidos' + '\n\n\n'

        newMail.Body = body

        cc = None

        newMail.To = "; ".join([usuario_email])

        newMail.Sensitivity = 2
        if cc is not None:
            newMail.CC = "; ".join(cc)

        newMail.Send()