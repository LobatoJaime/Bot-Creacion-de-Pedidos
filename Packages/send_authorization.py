import win32com.client
import os
from Packages.constants import temporal_exe_path
import subprocess



def send_authorization_email(user: list, client: str, order_number: str, receivers: list):
    """Script que envia un correo electronico a traves de outlook"""
    olMailItem = 0x0
    obj = win32com.client.Dispatch("Outlook.Application")
    newMail = obj.CreateItem(olMailItem)
    newMail.SentOnBehalfOfName = 'JDISA_ORDERS@JohnDeere.com'
    newMail.Subject = 'Solucitud de Aprobación de Pedido'

    body = 'Solicitud para cliente: ' + str(client) + \
    ' y numero de pedido: ' + str(order_number) + '.\n\n' + \
    'Solucitud realizada por: ' + str(user[0]) + \
    ' y usuario ' + str(user[1]) + '.\n\n\n'

    newMail.Body = body

    cc = None

    newMail.To = "; ".join(receivers)

    newMail.Sensitivity = 2
    if cc is not None:
        newMail.CC = "; ".join(cc)

    # newMail.Attachments.Add(excel)
    # newMail.Attachments.Add(pdf)

    # create_executable_authorization(path=path, time=time)
    # newMail.Attachments.Add(temporal_exe_path + "/aprobar/aprobar.exe")

    newMail.Send()

    # os.rmdir(temporal_exe_path + "/aprobar/")
    # os.remove(temporal_exe_path + "/aprobar.py")


def create_executable_authorization(path: str, time: str):
    """Funcion para crear el ejecutable y firmar el pedido"""
    code_imports = 'import ctypes\nimport os\nimport datetime\n\n'

    code_user = """GetUserNameEx = ctypes.windll.secur32.GetUserNameExW\nNameDisplay = 3\nsize = ctypes.pointer(ctypes.c_ulong(0))\nGetUserNameEx(NameDisplay, None, size)\nnameBuffer = ctypes.create_unicode_buffer(size.contents.value)\nGetUserNameEx(NameDisplay, nameBuffer, size)\nnow_time_dt = datetime.datetime.now()\nnow_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')\n\n"""

    code_main1 = "file = open(r'" + str(path) + "' + '/" + str(time) + "_aprobacion-' +" + "str(nameBuffer.value)" + "+ '.txt','w')\n"

    code_main2 = "file.write('Orden aprobada por: ' + str(nameBuffer.value).replace(' ', '') + '/' + str(os.getlogin()) + ' en fecha: '+ str(now_time) +'.')\n"

    code_main3 = "file.close()\n"

    code_main4 = "while true: pass\n"

    file = open(temporal_exe_path + "/aprobar.py", "w")
    file.write(code_imports + code_user + code_main1 + code_main2 + code_main3 + code_main4)
    file.close()

    os.system("pyinstaller " + str(temporal_exe_path) + "/aprobar.py --distpath " + str(temporal_exe_path))


if __name__ == '__main__':
    create_executable_authorization(r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\Temporal", "12-05-2023_15h-50m")
    # os.system("pyinstaller ./ProjectFiles/aprobar.py")
    # os.system("pyinstaller C:/Users/BUH2M45/Documents/GitHub/Bot-Creacion-de-Pedidos/aprobar.py")