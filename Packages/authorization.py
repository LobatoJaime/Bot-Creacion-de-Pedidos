from .get_user_info import get_user_info
import datetime
from .constants import tracking_history_folder
import os


def authorize_order(path: str, time: str, client: str, order_number: str, reference: str):
    """Funcion que genera la autorizacion de la orden en el directorio
    de historial de ordenes"""

    user = get_user_info()

    now_time_dt = datetime.datetime.now()
    now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')

    file = open(tracking_history_folder + "/" + str(time) + "+" + "aprobacion+" + str(user[0]).replace(" ", "") + "+" + str(client) + "_" + str(order_number) + "_" + str(reference) + ".txt", "w")
    file.write("Orden aprobada por: " + str(user[0]).replace(" ", "") + "/" + str(user[1]) + " en fecha: " + str(now_time))
    file.close()

    file = open(path + "/" + str(time) + "+" + "aprobacion+" + str(user[0]).replace(" ", "") + "+" + str(client) + "_" + str(order_number) + "_" + str(reference) + ".txt", "w")
    file.write("Orden aprobada por: " + str(user[0]).replace(" ", "") + "/" + str(user[1]) + " en fecha: " + str(now_time))
    file.close()


def firm_order(path: str, time: str, client: str, order_number: str, reference: str):
    """Funcion que genera la autorizacion de la orden en el directorio
    de historial de ordenes para la persona que debe aprobar el pedido"""

    now_time_dt = datetime.datetime.now()
    now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')

    user = get_user_info()

    file = open(tracking_history_folder + "/" + str(time) + "+" + "aprobacionsol+" + str(user[0]).replace(" ", "") + "+" + str(client) + "_" + str(order_number) + "_" + str(reference) + ".txt", "w")
    file.write("Orden aprobada por: " + str(user[0]).replace(" ", "") + "/" + str(user[1]) + " en fecha: " + str(time))
    file.close()

    if not os.path.isdir(path):
        os.mkdir(path)

    file = open(path + "/" + str(time) + "+" + "aprobacionsol+" + str(user[0]).replace(" ", "") + "+" + str(client) + "_" + str(order_number) + "_" + str(reference) + ".txt", "w")
    file.write("Orden aprobada por: " + str(user[0]).replace(" ", "") + "/" + str(user[1]) + " en fecha: " + str(time))
    file.close()
