import pandas as pd


def check_order_exists(orders: pd.DataFrame, planes_entrega: pd.DataFrame) -> bool or str:
    """Funcion que revisa entre los planes de entrega si se tiene que crear o editar
    el numero de orden proporcionado\n
    ->returns: True (Todas las ordenes existen), False (Ninguna Orden Existe), o Mixed (Algunas existen y otras no)
    """
    index = orders.index[0]
    order_number = str(orders['order_number'][index])
    references = set(orders['reference'].to_list())
    order_exists = 'False'
    # comprobar primero si la orden esta vacia
    if planes_entrega.empty:
        return order_exists
    # comprobar si existe el numero de orden
    if order_number not in set(planes_entrega['Número pedido cliente'].to_list()):
        return order_exists
    # comprobar si todas las referencias existen en el pedido
    referencias_plan_entrega = set(planes_entrega['Referencia'].to_list())
    references_to_create = []
    references_to_edit = []
    for reference in references:
        if reference in referencias_plan_entrega:
            references_to_edit.append(reference)
        if reference not in referencias_plan_entrega:
            references_to_create.append(reference)

    if len(references_to_edit) > 0 and len(references_to_create) == 0:
        order_exists = 'True'
    if len(references_to_edit) > 0 and len(references_to_create) > 0:
        order_exists = 'Mixed'
    if len(references_to_edit) < 0 and len(references_to_create) > 0:
        order_exists = 'False'

    if order_exists == 'Mixed':
        for i in references_to_create:
            order_exists = order_exists + '|' + i

    return order_exists
