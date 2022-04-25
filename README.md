# Bot-Creacion-de-Pedidos <img src="https://user-images.githubusercontent.com/67588689/161210959-5152d431-bc81-41d5-921c-05beb3e8507b.JPG" width="30">

GUI creada en python que a traves de los scripts de SAP facilita la subida de pedidos
## Para Empaquetar el codigo
1. Instalar pyinstaller: `pip install pyinstaller`
2. Cambiar en "main.spec" la ruta de "pathex" y "datas" por las rutas en la cuales este el venv del proyecto
3. En el terminal ejecutar `pyinstaller --onefile -F main.spec`
