import subprocess
import time
import traceback
import os
import win32com.client


def connect_to_sap() -> object:
    """Funcion en donde se abre la aplicacion SAP y se inicia sesion
    usando los credenciales del ordenador"""
    # Realizar conexion
    print('Realizando conexion con el servidor SAP...')
    path = r"C:\Program Files (x86)\SAP\FrontEnd\SAPgui\saplogon.exe"
    subprocess.Popen(path)
    time.sleep(5)

    SapGuiAuto = win32com.client.GetObject('SAPGUI')
    if not type(SapGuiAuto) == win32com.client.CDispatch:
        return

    application = SapGuiAuto.GetScriptingEngine
    if not type(application) == win32com.client.CDispatch:
        SapGuiAuto = None
        return
    try:  # Comprobar si SAP ya esta abierto
        connection = application.Children(0)
    except:  # Abrirlo en caso de que no
        connection = application.OpenConnection("PA2 - Ag Europe Production (SSO) (006)", True)

    if not type(connection) == win32com.client.CDispatch:
        application = None
        SapGuiAuto = None
        return

    session = connection.Children(0)
    if not type(session) == win32com.client.CDispatch:
        connection = None
        application = None
        SapGuiAuto = None
        return
    print('Conexion realizada')
    return session
