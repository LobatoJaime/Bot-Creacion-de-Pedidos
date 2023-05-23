from .get_user_info import get_user_info
import datetime


def authorize_order(path: str, time: str):
    """Funcion que genera la autorizacion de la orden en el directorio
    de historial de ordenes"""

    user = get_user_info()

    file = open(path + "/" + str(time) + "_aprobacion-" + str(user[0]).replace(" ", "") + ".txt", "w")
    file.write("Orden aprobada por: " + str(user[0]).replace(" ", "") + "/" + str(user[1]) + " en fecha: {}".format(time))
    file.close()


def firm_order(path: str, time: str):
    """Funcion que genera la autorizacion de la orden en el directorio
    de historial de ordenes para la persona que debe aprobar el pedido"""

    now_time_dt = datetime.datetime.now()
    now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')

    user = get_user_info()

    file = open(path + "/" + str(time) + "_aprobacion-" + str(user[0]).replace(" ", "") + ".txt", "w")
    file.write("Orden aprobada por: " + str(user[0]).replace(" ", "") + "/" + str(user[1]) + " en fecha: " + str(now_time))
    file.close()
