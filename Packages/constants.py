import os
import datetime

packages_folder = os.path.dirname(__file__)
directory_folder = os.path.dirname(packages_folder)
# resources_folder = os.path.join(directory_folder, 'Resources')
resources_folder = r'\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Bot Creacion de Pedidos\ProjectFiles\Resources'
download_latest_ver_folder = r'\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Bot Creacion de Pedidos'
now = datetime.datetime.now().strftime('%Y-W%W')
fecha_actualizar_datos_referencias_existentes_incial = datetime.datetime.strptime(str(now) + '-0-@5', "%Y-W%W-%w-@%H")
fecha_actualizar_datos_referencias_existentes_final = datetime.datetime.strptime(str(now) + '-0-@20', "%Y-W%W-%w-@%H")
updated_references_folder = r'\\fgetceapp7\Input'
planes_entrega_folder = resources_folder
number_of_weeks_for_shipping_date = 7
day_of_week_dict = {'lunes': 1, 'martes': 2, 'miercoles': 3,
                    'jueves': 4, 'viernes': 5, 'sabado': 6, 'domingo': 7}
day_of_week_for_shipping_date = 'jueves'
number_of_day_of_week_for_shipping_date = str(day_of_week_dict[day_of_week_for_shipping_date])
codigo_sap_clientes_root = os.path.join(resources_folder, 'codigo_sap_clientes.xlsx')
exports_folder = os.path.join(resources_folder, 'exports')
changes_history_folder = os.path.join(resources_folder, 'changes_history')
orders_history_folder = os.path.join(resources_folder, 'orders_history')
downloads_folder = os.path.join(os.getenv('USERPROFILE'), 'Downloads')
images_folder = os.path.join(resources_folder, 'images')
github_repo_adress = 'https://github.com/luisguareschi/Bot-Creacion-de-Pedidos'
actual_version = 'v5.3.2'
ai_supported_clients = ["Engine Power Compoments", "Thyssenkrupp Campo Limpo", "WorldClass Industries", "EMP", "Thyssenkrupp Crankshaft"]
ai_supported_clients.sort()
poppler_online_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Bot Creacion de Pedidos\ProjectFiles\Resources\poppler-22.01.0\Library\bin"
tesseract_exe_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Bot Creacion de Pedidos\ProjectFiles\Resources\Tesseract-OCR\tesseract.exe"
formats_table_path = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Bot Creacion de Pedidos\ProjectFiles\Resources\formats.xlsx"
