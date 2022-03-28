from .validate_reference import validate_ref
from .validate_quantities import validate_quantities
from .validate_date import validate_dates
import pandas as pd


def validate_data(orders: pd.DataFrame) -> (bool, str):
    """Funcion que valida todos los campos de la orden escrita
    y devuelve un bool respectivo"""
    all_data_ok = True
    err_msg = None
    # -------------------------- VALIDAR REFERENCIA --------------------------------
    reference = str(orders['reference'][orders.index[0]])
    reference_exists = validate_ref(reference)
    if not reference_exists:
        all_data_ok = False
        err_msg = 'Error. La referencia que has escrito no existe,' \
                  '\ncomprueba que la has escrito de la manera correcta'
        return all_data_ok, err_msg
    # -------------------------- VALIDAR CANTIDADES --------------------------------
    quantities_ok = validate_quantities(orders)
    if not quantities_ok:
        all_data_ok = False
        err_msg = 'Error. El formato de las cantidades debe ser\n' \
                  'un numero entero. Comprueba que las hayas escrito de\n' \
                  'manera correcta'
        return all_data_ok, err_msg
    # -------------------------- VALIDAR FECHAS ------------------------------------
    dates_ok = validate_dates(orders)
    if not dates_ok:
        all_data_ok = False
        err_msg = 'Error. El formato de la fecha es incorrecto,\n' \
                  'asegurate que esten escritas con cualquiera de los siguientes formatos:\n' \
                  ' ->dd.mm.yy\n' \
                  ' ->dd.mm.yyyy\n' \
                  ' ->dd/mm/yy\n' \
                  ' ->dd/mm/yyyy'
        return all_data_ok, err_msg
    # ------------------------------------------------------------------------------
    return all_data_ok, err_msg
