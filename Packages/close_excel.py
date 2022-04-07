import os
from win32com.client import Dispatch, GetObject, DispatchEx
import traceback
import time
import psutil
import pythoncom
from win32com.client import GetObject
import win32gui, win32process


def get_excel_pids() -> dict:
    """Devuelve un diccionario con los PIDs de todos los procesos
    de excel abiertos"""
    excelPids = []
    for proc in psutil.process_iter():
        if proc.name() == "EXCEL.EXE": excelPids.append(proc.pid)
    windowPidsAndTitle = []
    win32gui.EnumWindows(lambda hwnd, resultList: resultList.append((win32process.GetWindowThreadProcessId(hwnd),
                                                                     win32gui.GetWindowText(hwnd))), windowPidsAndTitle)
    processes = {}
    for pid, title in windowPidsAndTitle:
        # print('Name: {}|PID: {}'.format(title, pid))
        for p in pid:
            if p in excelPids:
                if 'Excel' in title:
                    if p not in processes:
                        processes[p] = [title]
                    else:
                        print(processes)
                        processes[p].append(title)
    return processes


def close_excel(filename: str):
    """Funcion que cierra un excel abierto"""
    for i in range(3):
        print('-----------ATTEMPT TO CLOSE EXCEL:{}-----------------'.format(i))
        if i == 1:
            time.sleep(5)
        if i == 2:
            time.sleep(5)
        try:
            # must be 0
            context = pythoncom.CreateBindCtx(0)

            # Get all the Running Objects
            running_coms = pythoncom.GetRunningObjectTable()

            # Creates an enumerator that can list the monikers of all the objects
            # currently registered in the Running Object Table (ROT).
            monikiers = running_coms.EnumRunning()

            # loop through all the monikiers returend
            for monikier in monikiers:
                # Gets the display name, which is a user-readable representation of this moniker.
                COM_PATH = monikier.GetDisplayName(context, monikier)
                if filename in COM_PATH:
                    xl = GetObject(COM_PATH)
                    xl.Close(SaveChanges=True)
                    active_excels = get_excel_pids()
                    # print(active_excels)
                    for pid in active_excels:
                        if active_excels[pid] == ['Excel']:
                            process = psutil.Process(int(pid))
                            process.terminate()
            print('{} cerrado'.format(filename))
            return
        except Exception:
            print(traceback.print_exc())
