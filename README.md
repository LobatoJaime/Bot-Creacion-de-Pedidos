# Bot-Creacion-de-Pedidos <img src="https://user-images.githubusercontent.com/67588689/161210959-5152d431-bc81-41d5-921c-05beb3e8507b.JPG" width="30">

GUI creada en python que a través de los scripts de SAP facilita la subida de pedidos
## Para Empaquetar el codigo
1. Instalar Pyinstaller: `pip install pyinstaller`
2. Cambiar en ```main.spec``` la ruta de ```pathex``` y ```datas``` por las rutas en la cuales esté el venv del proyecto
3. Ejecutar el script `package_file.py` dando como argumentos la versión nueva deseada del archivo y la carpeta donde va a estar el ejecutable \
Ejemplo: 
```python
local_folder = r'C:\Users\IRDGFRM\OneDrive-Deere&Co\OneDrive - Deere & Co\Documents\Python Projects\Bot Creacion de Pedidos\dist'  # Cambiar a disposicion
online_folder = r'\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Bot Creacion de Pedidos\dist'
package_file(version='v4.4.6',
             dist_folder=online_folder)
```
