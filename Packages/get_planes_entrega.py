import os
import pandas as pd
from .find_newest_dir import find_newest_dir
from .constants import resources_folder
import datetime
import shutil


def get_planes_entrega() -> pd.DataFrame:
    """Funcion que descarga directamente de la carpeta de blade
    una tabla con todos los pedidos de cada cliente que hayan en SAP.
    Descarga todos planes de entrega existentes de todos los clientes"""

    # METODO 1: USAR CARPETAS DE BLADE
    # main_folder = r'\\fgetceapp7\Input\Success'
    # newest_folder = find_newest_dir(main_folder)
    # for file in os.listdir(newest_folder):
    #     if 'Clientes' in file:
    #         file_name = file
    #         break
    # file_root = os.path.join(newest_folder, file_name)
    # shutil.copy(file_root, os.path.join(resources_folder, 'planes_entrega.xlsx'))
    # data = pd.read_excel(file_root, dtype=str)
    # planes_entrega = pd.DataFrame(data)
    #
    # # Por si hay algun error de formato en la tabla de pedidos de SAP
    # for index in planes_entrega.index:
    #     qty = str(planes_entrega['Cantidad de Pedido'][index])
    #     planes_entrega['Cantidad de Pedido'][index] = str(int(float(qty)))
    #
    # return planes_entrega

    # METODO 2: USAR SCRIPT DE SAP
    # main_folder = r"\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Trabajos - Luis Guareschi\plan_entrega"
    # file_name = 'planes_entrega.xlsx'
    # file_root = os.path.join(main_folder, file_name)
    file_root = os.path.join(resources_folder, 'planes_entrega.xlsx')
    data = pd.read_excel(file_root, dtype=str)
    planes_entrega = pd.DataFrame(data)

    # cambiar idioma del plan de entrega en caso de que este en ingles/otros idiomas
    headers = planes_entrega.columns.values.tolist()
    headers_in_spanish = ['Documento de Ventas', 'Categoria de Documento de Ventas', 'Clase pedido ventas',
                          'Organización de Ventas', 'Canal de Distribución', 'División', 'Grupo de Ventas',
                          'Número pedido cliente', 'Fecha pedido cliente', 'Cliente', 'Nombre del Cliente',
                          'Ship-To Party', 'Fecha ctd. Acumulada', 'Grupo de Materiales 3', 'Grupo de Materiales 4',
                          'Grupo de Materiales 5', 'Elemento de Documento de Ventas', 'Referencia', 'Nombre Material',
                          'Numero de Referencia por Cliente', 'Valor Neto del elemento del Pedido de la',
                          'Moneda del Documento SD', 'Cantidad acumulada de pedido en Unidades',
                          'Peso Bruto del elemento', 'Peso Neto del elemento', 'Planta', 'Almacén',
                          'Punto de Envio/Recibo', 'Prc. Neto', 'Area de MRP',
                          'Status del Material en Planta específica',
                          'Grupo de compras', 'Planific. MRP', 'Tipo de aprovisionamiento', 'Supervisor de Producción',
                          'Fecha reparto', 'Fecha de llegada', 'Cantidad de Pedido', 'Ctd. confirmada',
                          'Unidad de ventas',
                          'Ctd. Requerida para Maestro de Materiale', 'Clase doumento', 'Tipo de Plan',
                          'Fecha Disponibilidad', 'Cantidad Pendiente', 'Ctd asignada', 'Ctd pendiente envio calculada']
    if headers != headers_in_spanish:
        planes_entrega.columns.values[0: len(headers_in_spanish)] = headers_in_spanish

    # Por si hay algun error de formato en la tabla de pedidos de SAP
    for index in planes_entrega.index:
        qty = str(planes_entrega['Cantidad de Pedido'][index])
        planes_entrega['Cantidad de Pedido'][index] = str(int(float(qty)))

    return planes_entrega
