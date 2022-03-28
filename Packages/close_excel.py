import os
from win32com.client import Dispatch, GetObject
import traceback
import time


def close_excel(filename: str):
    """Funcion que cierra un excel abierto"""
    for i in range(3):
        print('-----------ATTEMPT TO CLOSE EXCEL:{}-----------------'.format(i))
        if i == 1:
            time.sleep(5)
        if i == 2:
            time.sleep(5)
        try:
            # os.system('TASKKILL /FI "WINDOWTITLE eq {} - Excel"'.format(filename))
            # os.system("taskkill /f /im EXCEL.EXE")
            xl = Dispatch('Excel.Application')
            opened_excel_names = [wb.Name for wb in xl.Workbooks]
            print(opened_excel_names)
            if len(opened_excel_names) == 0:
                return
            if len(opened_excel_names) > 1:
                xl.Workbooks("{}".format(filename)).Close(SaveChanges=True)
            else:
                xl.Workbooks("{}".format(filename)).Close(SaveChanges=True)
                xl.Quit()
                del xl
            print('File {} closed succesfully'.format(filename))
            print('-----------------------------------------------------')
            return
            """
            file_path = os.path.join(save_folder_root, '{}'.format(filename))
            while True:
                try:
                    file = open(file_path, "r+")
                    break
                except PermissionError:
                    print('File is Opened')
                    xl = GetObject(file_path)
                    xl.Application.Quit()
            return
            """
        except Exception:
            print(traceback.print_exc())

