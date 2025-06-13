import shutil

from .connect_to_sap import connect_to_sap
from .close_excel import close_excel
from .constants import planes_entrega_folder, resources_folder
from time import sleep
import time
import os

def download_planes_entrega_from_sap(order_number: str):
    """Funcion donde se ejecuta el script para descargar
    el excel con los planes de entrega existentes de SAP"""
    try:
        os.remove(os.path.join(resources_folder, 'planes_entrega.xlsx'))
    except OSError:
        pass
    session = connect_to_sap()
    session.findById("wnd[0]").maximize()
    session.findById("wnd[0]/tbar[0]/okcd").text = "/n/DEERE/V_SD_SA"
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/tbar[1]/btn[17]").press()

    # --------------------------PRUEBA-------------------------------------------
    session.findById("wnd[1]/usr/txtV-LOW").text = "ZAMBLADE"
    session.findById("wnd[1]/usr/txtENAME-LOW").text = ""
    session.findById("wnd[1]/usr/txtV-LOW").caretPosition = 6
    session.findById("wnd[1]/tbar[0]/btn[8]").press()
    session.findById("wnd[0]/usr/chkP_CALQTY").selected = True
    # ---------------------------------------------------------------------------
    session.findById("wnd[0]/usr/txtS_BSTNK-LOW").text = order_number
    # ---------------------MOSTRAR PEDIDOS EN CAMINO (WIP)-----------------------
    session.findById("wnd[0]").maximize()
    session.findById("wnd[0]/usr/chkP_CALQTY").selected = False
    session.findById("wnd[0]/usr/chkP_CALQTY").setFocus()
    # ---------------------------------------------------------------------------
    session.findById("wnd[0]/usr/txtS_BSTNK-LOW").setFocus()
    session.findById("wnd[0]/usr/txtS_BSTNK-LOW").caretPosition = 8
    session.findById("wnd[0]/tbar[1]/btn[8]").press()
    session.findById("wnd[0]/usr/cntlCUSTOM_CONTROL_100/shellcont/shell").pressToolbarContextButton("&MB_VARIANT")
    session.findById("wnd[0]/usr/cntlCUSTOM_CONTROL_100/shellcont/shell").selectContextMenuItem("&LOAD")
    session.findById(
        "wnd[1]/usr/ssubD0500_SUBSCREEN:SAPLSLVC_DIALOG:0501/cntlG51_CONTAINER/shellcont/shell").currentCellRow = 3
    session.findById(
        "wnd[1]/usr/ssubD0500_SUBSCREEN:SAPLSLVC_DIALOG:0501/cntlG51_CONTAINER/shellcont/shell").selectedRows = "3"
    session.findById(
        "wnd[1]/usr/ssubD0500_SUBSCREEN:SAPLSLVC_DIALOG:0501/cntlG51_CONTAINER/shellcont/shell").clickCurrentCell()
    session.findById("wnd[0]/usr/cntlCUSTOM_CONTROL_100/shellcont/shell").pressToolbarContextButton("&MB_EXPORT")
    session.findById("wnd[0]/usr/cntlCUSTOM_CONTROL_100/shellcont/shell").selectContextMenuItem("&XXL")
    for i in range(2):
        try:
            session.findById(
                "wnd[1]/usr/ctxtDY_PATH").text = resources_folder
            break
        except:
            time.sleep(10)
    session.findById("wnd[1]/usr/ctxtDY_FILENAME").text = "planes_entrega.xlsx"
    session.findById("wnd[1]/usr/ctxtDY_FILENAME").caretPosition = 19
    session.findById("wnd[1]/tbar[0]/btn[20]").press()
    sleep(10)
    close_excel('planes_entrega.xlsx')
    copy_original_planes_entrega(order_number)


def copy_original_planes_entrega(order_number: str):
    """Function to copy the original planes_entrega.xlsx file"""
    original_file_path = os.path.join(resources_folder, 'planes_entrega.xlsx')
    copy_folder_path = os.path.join(resources_folder, 'planes_entrega')
    os.makedirs(copy_folder_path, exist_ok=True)
    copied_filename = "planes_entrega_{}.xlsx".format(order_number)
    shutil.copy(original_file_path, os.path.join(copy_folder_path, copied_filename))

