import pandas as pd


def validate_quantities(orders: pd.DataFrame) -> bool:
    """Funcion que comprueba todos los valores de la
    columna de cantidades escrita y devuelve un bool True si todos
    los campos son un numero entero"""
    quantities_ok = True
    for index in orders.index:
        quantity = str(orders['quantity'][index])
        if '-' in quantity:
            quantities_ok = False
            return quantities_ok
        try:
            if int(quantity) == int(float(quantity)):
                quantities_ok = True
            else:
                quantities_ok = False
                return quantities_ok
        except ValueError:
            quantities_ok = False
            return quantities_ok
    return quantities_ok
