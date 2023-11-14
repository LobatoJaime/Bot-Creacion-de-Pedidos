import os
import datetime
import pandas as pd
import json

packages_folder = os.path.dirname(__file__)
directory_folder = os.path.dirname(packages_folder)
# resources_folder = os.path.join(directory_folder, 'Resources')
resources_folder = r'\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources'
# -----------Ajustes-------------
settings_xlsx_path = os.path.join(resources_folder, 'settings.xlsx')
# -------------------------------
download_latest_ver_folder = r'\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos'
now = datetime.datetime.now().strftime('%Y-W%W')
fecha_actualizar_datos_referencias_existentes_incial = datetime.datetime.strptime(str(now) + '-0-@5', "%Y-W%W-%w-@%H")
fecha_actualizar_datos_referencias_existentes_final = datetime.datetime.strptime(str(now) + '-0-@20', "%Y-W%W-%w-@%H")
updated_references_folder = r'\\fgetceapp7\Input'
planes_entrega_folder = resources_folder
codigo_sap_clientes_root = os.path.join(resources_folder, 'codigo_sap_clientes.xlsx')
usuarios_root = os.path.join(resources_folder, 'usuarios.xlsx')
tracking_root = os.path.join(resources_folder, 'tracking.xlsx')
exports_folder = os.path.join(resources_folder, 'exports')
changes_history_folder = os.path.join(resources_folder, 'changes_history')
orders_history_folder = os.path.join(resources_folder, 'orders_history')
authorize_order_folder = os.path.join(resources_folder, 'authorize_order')
tracking_history_folder = os.path.join(resources_folder, 'tracking_history')
appoved_order_folder = os.path.join(resources_folder, "approved_orders")
downloads_folder = os.path.join(os.getenv('USERPROFILE'), 'Downloads')
images_folder = os.path.join(resources_folder, 'images')
github_repo_adress = 'https://github.com/JuanDelPinoJD/Bot-Creacion-de-Pedidos'
actual_version = 'v7.0.1'
# Obtener clientes que estan soportados por la AI
ai_online_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources\AI_files"
ai_config_path = os.path.join(ai_online_path, 'Config')
files = os.listdir(ai_config_path)
ai_supported_clients = []
clients_table = pd.DataFrame(data=pd.read_excel(codigo_sap_clientes_root), dtype=str)
for file_name in files:
    if '.json' not in file_name:
        sap_code = file_name
        filtered_clients_table = clients_table[clients_table['sap_code'] == sap_code]
        if filtered_clients_table.empty:
            continue
        client_name = filtered_clients_table['Customer'][filtered_clients_table.index[0]]
        ai_supported_clients.append(client_name)
ai_supported_clients.sort()
# ----------------------------------------------------
ai_online_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources\AI_files"
poppler_online_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources\poppler-22.01.0\Library\bin"
poppler_online_folder_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources\poppler-22.01.0"
tesseract_exe_online_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources\Tesseract-OCR\tesseract.exe"
tesseract_folder_online_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources\Tesseract-OCR"
formats_table_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources\formats.xlsx"
local_app_folder = r"C:\BotCreacionDePedidos"
local_poppler_path = os.path.join(local_app_folder, r'poppler-22.01.0\Library\bin')
local_tesseract_exe_path = os.path.join(local_app_folder, r'Tesseract-OCR\tesseract.exe')
local_tesseract_folder_path = os.path.join(local_app_folder, r'Tesseract-OCR')
local_poppler_folder_path = os.path.join(local_app_folder, r'poppler-22.01.0')


def get_ai_supported_clients() -> list:
    ai_online_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\BotCreacionDePedidos\ProjectFiles\Resources\AI_files"
    ai_config_path = os.path.join(ai_online_path, 'Config')
    files = os.listdir(ai_config_path)
    ai_supported_clients = []
    clients_table = pd.DataFrame(data=pd.read_excel(codigo_sap_clientes_root), dtype=str)
    for file_name in files:
        if '.json' not in file_name:
            sap_code = file_name
            filtered_clients_table = clients_table[clients_table['sap_code'] == sap_code]
            if filtered_clients_table.empty:
                continue
            client_name = filtered_clients_table['Customer'][filtered_clients_table.index[0]]
            ai_supported_clients.append(client_name)
    ai_supported_clients.sort()
    return ai_supported_clients
