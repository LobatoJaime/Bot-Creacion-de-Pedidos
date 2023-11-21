import win32com.client
import os
from Packages.constants import authorize_order_folder, usuarios_root, resources_folder
import pandas as pd
import subprocess



def send_authorization_email(user: list, client: str, order_number: str, reference: str, usuario_aprobador: str, email_aprobador: str):
    """Script que envia un correo electronico a traves de outlook y crea una carpeta en autorizaciones"""

    # importar archivo Excel
    df = pd.read_excel(usuarios_root)

    aprobador_folder = usuario_aprobador
    aprobador_email = email_aprobador
    receivers = [aprobador_email]
    
    usuario_email = ""

    for idx, row in df.iterrows():
        if row['Usuario'].upper() == user[1].upper():
            usuario_email = row['Email'].upper()

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
        newMail.SentOnBehalfOfName = usuario_email
        newMail.Subject = 'BOT - Solucitud de Aprobación de Pedido'

        html = "<a>Solicitud para cliente: " + str(client) + " y numero de pedido: " + str(order_number) + ".</a><br/><br/><a>Solicitud realizada por: " + str(user[0]) + " y usuario: " + str(user[1]) + ".</a><br/><br/><a href='\\\\fcefactory1\\PROGRAMAS_DE_PRODUCCION\\\\6.Planificacion\\BotCreacionDePedidos\\AutomatizacionSAP_latest_release.exe'>Acceso APP</a>"

        newMail.HTMLBody = html

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

    for idx, row in df.iterrows():
        if row['Usuario Aprobador 2'].upper() == user[1].upper():
            usuario_email = row['Email'].upper()
            aprobador_email = row['Email Aprobador 2'].upper()

    if "@" in usuario_email:
        olMailItem = 0x0
        obj = win32com.client.Dispatch("Outlook.Application")
        newMail = obj.CreateItem(olMailItem)
        newMail.SentOnBehalfOfName = aprobador_email
        newMail.Subject = 'BOT - Solucitud Aprobada'

        html = "<a>Solicitud para cliente: " + str(client) + " y numero de pedido: " + str(order_number) + " y referencia: " + str(reference) + ".</a><br/><br/><a>APROBADA por: " + str(user[0]) + " y usuario: " + str(user[1]) + ".</a><br/><br/><a href='\\\\fcefactory1\\PROGRAMAS_DE_PRODUCCION\\\\6.Planificacion\\BotCreacionDePedidos\\AutomatizacionSAP_latest_release.exe'>Acceso APP</a>"

        newMail.HTMLBody = html

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

    for idx, row in df.iterrows():
        if row['Usuario Aprobador 2'].upper() == user[1].upper():
            usuario_email = row['Email'].upper()
            aprobador_email = row['Email Aprobador 2'].upper()

    if "@" in usuario_email:
        olMailItem = 0x0
        obj = win32com.client.Dispatch("Outlook.Application")
        newMail = obj.CreateItem(olMailItem)
        newMail.SentOnBehalfOfName = aprobador_email
        newMail.Subject = 'BOT - Solucitud Rechazada'

        html = "<a>Solicitud para cliente: " + str(client) + " y numero de pedido: " + str(order_number) + " y referencia: " + str(reference) + ".</a><br/><br/><a>RECHAZADA por: " + str(user[0]) + " y usuario: " + str(user[1]) + ".</a><br/><br/><a href='\\\\fcefactory1\\PROGRAMAS_DE_PRODUCCION\\\\6.Planificacion\\BotCreacionDePedidos\\AutomatizacionSAP_latest_release.exe'>Acceso APP</a>"

        newMail.HTMLBody = html

    cc = None

    newMail.To = "; ".join([usuario_email])

    newMail.Sensitivity = 2
    if cc is not None:
        newMail.CC = "; ".join(cc)

    newMail.Send()