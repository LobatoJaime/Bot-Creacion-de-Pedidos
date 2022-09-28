from .connect_to_sap import connect_to_sap
from .close_excel import close_excel
from .constants import planes_entrega_folder, changes_history_folder, resources_folder
from time import sleep
import datetime
import os
import shutil
from .find_newest_dir import find_newest_dir


def script_download_new_planes_entrega_from_sap(order_number: str):
    """Funcion donde se ejecuta el script para descargar
    el excel con los planes de entrega existentes de SAP"""
    # now_time_dt = datetime.datetime.now()
    # now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')
    # folder_name = '{}_{}'.format(order_number, now_time)
    # save_folder_root = os.path.join(changes_history_folder, folder_name)
    save_folder_root = find_newest_dir(changes_history_folder)
    # os.mkdir(save_folder_root)
    # old_file_root = os.path.join(resources_folder, 'planes_entrega.xlsx')
    # shutil.copy(old_file_root, os.path.join(save_folder_root, 'old_planes_entrega.xlsx'))
    try:
        session = connect_to_sap()
    except:
        sleep(5)
        session = connect_to_sap()
    session.findById("wnd[0]").maximize()
    session.findById("wnd[0]/tbar[0]/okcd").text = "/n/DEERE/V_SD_SA"
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/tbar[1]/btn[17]").press()

    # --------------------------PRUEBA-------------------------------------------
    session.findById("wnd[1]/usr/txtV-LOW").text = "zblade"
    session.findById("wnd[1]/usr/txtENAME-LOW").text = ""
    session.findById("wnd[1]/usr/txtV-LOW").caretPosition = 6
    session.findById("wnd[1]/tbar[0]/btn[8]").press()
    session.findById("wnd[0]/usr/chkP_CALQTY").selected = True
    # ---------------------------------------------------------------------------
    session.findById("wnd[0]/usr/txtS_BSTNK-LOW").text = order_number
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
    session.findById(
        "wnd[1]/usr/ctxtDY_PATH").text = save_folder_root
    session.findById("wnd[1]/usr/ctxtDY_FILENAME").text = "new_planes_entrega.xlsx"
    session.findById("wnd[1]/usr/ctxtDY_FILENAME").caretPosition = 19
    session.findById("wnd[1]/tbar[0]/btn[11]").press()
    sleep(10)
    close_excel('new_planes_entrega.xlsx')
