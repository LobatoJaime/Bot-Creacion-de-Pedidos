import PyInstaller.__main__
import os
import shutil
from Packages.constants import download_latest_ver_folder
import PyInstaller.config


def package_file(version: str, dist_folder: str):
    """Funcion para empaquetar de manera mas sencilla la aplicacion\n.
    dist_folder: carpeta donde se va a a empaquetar el distribuible"""
    # Comprobar si la version ya existe
    try:
        files = os.listdir(dist_folder)
        filename = 'AutomatizacionSAP {}.exe'.format(version)
        if filename in files:
            print('Error, no se pueden crear dos aplicaciones con la misma version')
            return
    except FileNotFoundError:
        pass

    # Modificar la version del archivo en constants
    constants_read = open(r'Packages/constants.py', 'r')
    data = constants_read.readlines()
    new_version = "actual_version = '{}'\n".format(version)
    for n, line in enumerate(data):
        if 'actual_version' in line:
            data[n] = new_version

    constants_write = open(r'Packages/constants.py', 'w')
    constants_write.writelines(data)
    constants_write.close()
    constants_read.close()

    # Empaquetar la aplicacion usando pyinstaller
    PyInstaller.DEFAULT_DISTPATH = dist_folder
    # PyInstaller.config.CONF['distpath'] = dist_folder
    PyInstaller.__main__.run(['--onefile',
                              '-F',
                              'main.spec'])

    # Cambiar el nombre
    dist_folder = dist_folder  # Carpeta donde esta el distribuible
    file_path = os.path.join(dist_folder, 'AutomatizacionSAP latest_release.exe')
    new_path = os.path.join(dist_folder, 'AutomatizacionSAP {}.exe'.format(version))
    os.rename(file_path, new_path)

    # Mover el archivo existente a la versiones anteriores
    old_path, file_name = None, None
    for file_name in os.listdir(download_latest_ver_folder):
        if 'AutomatizacionSAP' in file_name:
            old_path = os.path.join(download_latest_ver_folder, file_name)
            break
    previous_versions_folder = os.path.join(download_latest_ver_folder, 'PreviousVersions')
    if old_path is not None:
        shutil.move(old_path, os.path.join(previous_versions_folder, file_name))

    # Copiar a la carpeta en linea de la app
    file_path = new_path
    source_path = os.path.join(download_latest_ver_folder, 'AutomatizacionSAP {}.exe'.format(version))
    shutil.copy(file_path, source_path)

    print('El archivo ha sido empaquetado de manera exitosa.\n'
          'Ubicacion del archivo:\n'
          ' {}'.format(dist_folder))

if __name__ == '__main__':
    local_folder = r'C:\Users\IRDGFRM\OneDrive-Deere&Co\OneDrive - Deere & Co\Documents\Python Projects\Bot Creacion de Pedidos\dist'  # Cambiar a disposicion
    online_folder = r'\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Bot Creacion de Pedidos\dist'
    package_file(version='v5.5.0',
                 dist_folder=online_folder)
