import lastversion
import webbrowser
from Packages.constants import github_repo_adress, actual_version, download_latest_ver_folder
from tkinter import messagebox


def check_latest_version() -> bool:
    """Funcion que comprueba la ultima version en GitHub
    con la version actual de la aplicacion
    -Devuelve True si la version esta actualizada
    -Devuelve false en caso de que no"""
    last_ver = lastversion.latest(github_repo_adress, output_format='tag')
    if last_ver != actual_version:
        msg = messagebox.askyesno('Version no compatible',
                                  'Hay una nueva version disponible. '
                                  'Actualiza la aplicacion para evitar posibles errores.\n\n'
                                  'Puedes descargarla en:\n'
                                  '1. GitHub (recomendado): {}\n'
                                  '2. Carpeta de JD: {}\n\n'
                                  'Quieres ir a la pagina de descarga?'.format(github_repo_adress,
                                                                               download_latest_ver_folder))
        if msg:
            # open link in default browser
            webbrowser.open(github_repo_adress)
        return False
    else:
        return True
