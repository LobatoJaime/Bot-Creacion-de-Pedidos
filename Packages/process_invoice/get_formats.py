import pandas as pd
import os
from Packages.constants import directory_folder, resources_folder


def get_formats() -> [pd.DataFrame]:
    """Funcion que se usa para poder obtener los cambios de formatos
    necesarios para cada cliente existente"""
    file_path_folder = resources_folder
    file_path = os.path.join(file_path_folder, 'formats.xlsx')
    # Quantities
    data = pd.read_excel(file_path, sheet_name='quantity')
    quantities_formats = pd.DataFrame(data)

    # ship out date
    data = pd.read_excel(file_path, sheet_name='ship_out_date')
    ship_out_date_formats = pd.DataFrame(data)

    # arrival date
    data = pd.read_excel(file_path, sheet_name='arrival_date')
    arrival_date_formats = pd.DataFrame(data)

    return quantities_formats, ship_out_date_formats, arrival_date_formats
