import pandas as pd


def check_order_exists(orders: pd.DataFrame, planes_entrega: pd.DataFrame) -> bool:
    """Funcion que revisa entre los planes de entrega si se tiene que crear o editar
    el numero de orden proporcionado"""
    index = orders.index[0]
    order_number = str(orders['order_number'][index])
    reference = str(orders['reference'][index])
    order_exists = False
    for index in planes_entrega.index:
        if str(planes_entrega['Número pedido cliente'][index]) == order_number:
            if str(planes_entrega['Referencia'][index]) == reference:
                order_exists = True
                break
    return order_exists
