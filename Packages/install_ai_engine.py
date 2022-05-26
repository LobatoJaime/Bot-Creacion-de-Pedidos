import multiprocessing
import os
import tkinter as tk
from tkinter import messagebox, filedialog
import shutil
from Packages.constants import poppler_online_path, tesseract_exe_online_path, \
    poppler_online_folder_path, tesseract_folder_online_path
import time
from multiprocessing import Process, freeze_support


def check_ai_engine_installed() -> (str, str):
    """Funcion que comprueba y si esta instalado poppler y
    tesseract, luego pregunta e instala los archivos en caso de que no esten presentes y devuelves los paths
    de donde fue instalado"""

    app_folder = r"C:\Bot Creacion de Pedidos"
    poppler_path = os.path.join(app_folder, r'poppler-22.01.0\Library\bin')
    tesseract_exe_path = os.path.join(app_folder, r'Tesseract-OCR\tesseract.exe')
    tesseract_folder_path = os.path.join(app_folder, r'Tesseract-OCR')
    poppler_folder_path = os.path.join(app_folder, r'poppler-22.01.0')

    print(os.path.isdir(poppler_path))
    print(os.path.exists(tesseract_exe_path))
    if os.path.isdir(poppler_path) and os.path.exists(tesseract_exe_path):
        return poppler_path, tesseract_exe_path

    else:
        return None, None


def download_ai() -> (str, str):
    print('Descargando archivos')
    app_folder = r"C:\Bot Creacion de Pedidos"
    poppler_path = os.path.join(app_folder, r'poppler-22.01.0\Library\bin')
    tesseract_exe_path = os.path.join(app_folder, r'Tesseract-OCR\tesseract.exe')
    tesseract_folder_path = os.path.join(app_folder, r'Tesseract-OCR')
    poppler_folder_path = os.path.join(app_folder, r'poppler-22.01.0')

    print('---------Creating Dict Folder---------')
    if os.path.isdir(app_folder):
        shutil.rmtree(app_folder)
    os.mkdir(app_folder)
    print('---------Poppler---------')
    if not os.path.isdir(poppler_path):
        shutil.copytree(poppler_online_folder_path, poppler_folder_path)
    print('---------Tesseract---------')
    if not os.path.exists(tesseract_exe_path):
        shutil.copytree(tesseract_folder_online_path, tesseract_folder_path)
    return poppler_path, tesseract_exe_path
