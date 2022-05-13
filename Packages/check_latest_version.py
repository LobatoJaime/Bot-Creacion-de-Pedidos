import lastversion
import webbrowser
from Packages.constants import github_repo_adress, actual_version, download_latest_ver_folder
from tkinter import messagebox


def check_latest_version() -> bool:
    """Funcion que comprueba la ultima version en GitHub
    con la version actual de la aplicacion\n
    -Devuelve True si la version esta actualizada\n
    -Devuelve false en caso de que no"""
    last_ver = lastversion.latest(github_repo_adress, output_format='tag')
    if last_ver != actual_version:
        msg = messagebox.askyesno('Versión no compatible',
                                  'Hay una nueva versión disponible. '
                                  'Actualiza la aplicación para evitar posibles errores.\n\n'
                                  'Puedes descargarla en:\n'
                                  '1. GitHub (recomendado): {}\n'
                                  '2. Carpeta de JD: {}\n\n'
                                  'Quieres descargar la última versión?'.format(github_repo_adress,
                                                                                download_latest_ver_folder))
        if msg:
            download_link = 'https://github.com/luisguareschi/Bot-Creacion-de-Pedidos/releases/download/{}/AutomatizacionSAP.{}.exe'.format(
                last_ver, last_ver)
            # open download_link in default browser
            webbrowser.open(download_link)
        return False
    else:
        return True
