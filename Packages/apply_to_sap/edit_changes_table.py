import pandas as pd


def edit_changes_table(order_changes: pd.DataFrame, indexes_to_delete: list = None) -> pd.DataFrame:
    """Funcion que permite editar los cambios que se van
    a hacer en SAP en caso de que haya alguno que no se quiera aplicar manualmente"""
    # if indexes_to_delete is None:
    #     while True:
    #         question = input('Quieres editar la tabla? (Y/N): ')
    #         if question in ['y', 'Y']:
    #             print('Indica que indices quieres eliminar: (0,1,2...): ')
    #             indexes = str(input(''))
    #             indexes = indexes.split(',')
    #             indexes_to_delete = []
    #             for i in indexes:
    #                 indexes_to_delete.append(int(i))
    #             order_changes = order_changes.drop(labels=indexes_to_delete)
    #             break
    #         elif question in ['n', 'N']:
    #             break
    if not indexes_to_delete:
        return order_changes
    elif indexes_to_delete:
        order_changes = order_changes.drop(labels=indexes_to_delete)

    return order_changes
