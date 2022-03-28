# import pyodbc
import pandas as pd
import pymssql


def validate_ref(reference: str) -> bool:
    """Funcion que chequea en el servidor de SQL si
    la referencia escrita por el usuario existe"""
    # connection = pyodbc.connect('DRIVER={SQL Server};'
    #                             'SERVER=Fgetcesql2\inst2;'
    #                             'DATABASE=Blade_JD;'
    #                             'Trusted_Connection=yes;')
    connection = pymssql.connect(server='Fgetcesql2\inst2', database='Blade_JD')
    sql_query = pd.read_sql('SELECT Code FROM Reference', connection)
    df = pd.DataFrame(sql_query)
    df.rename(columns={'Code': 'reference'}, inplace=True)
    ref_exists = False
    for index in df.index:
        table_ref = str(df['reference'][index])
        if table_ref == '':
            continue
        elif table_ref.upper() == reference.upper():
            print('Referencia existe: {}'.format(table_ref))
            ref_exists = True
            return ref_exists
    return ref_exists

