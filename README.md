# Bot-Creacion-de-Pedidos <img src="https://user-images.githubusercontent.com/67588689/161210959-5152d431-bc81-41d5-921c-05beb3e8507b.JPG" width="30">

GUI creada en python que a traves de los scripts de SAP facilita la subida de pedidos
## Para Empaquetar el codigo
1. Instalar Pyinstaller: `pip install pyinstaller`
2. Cambiar en "main.spec" la ruta de "pathex" y "datas" por las rutas en la cuales este el venv del proyecto
3. Ejecutar el script `package_file.py` dando como argumentos la version nueva deseada del archivo y la carpeta donde va a estar el ejecutable \
Ejemplo: 
```python
package_file(version='v4.4.5',
             dist_folder=r'C:\Users\IRDGFRM\OneDrive-Deere&Co\OneDrive - Deere & Co\Documents\Python Projects\Bot Creacion de Pedidos\dist')
```
