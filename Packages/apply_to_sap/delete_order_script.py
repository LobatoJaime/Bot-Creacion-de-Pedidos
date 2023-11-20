from time import sleep

def delete_oder_script(session: object, plan_entrega: str, ship_out_date: str):
    """Funcion en donde se ejecuta el script .vbs para eliminar un pedido de
        un plan de entrega existente"""

    def simulate_enter():
        for i in range(2):
            try:
                # Probar primero enter a un pop-up
                session.findById("wnd[1]").sendVKey(0)
            except Exception as e1:
                try:
                    # Probar despues enter a pantalla principal
                    session.findById("wnd[0]").sendVKey(0)
                except Exception as e2:
                    pass

    sleep(1)
    print('Eliminando orden--> ship_out_date:{}'.format(ship_out_date))
    session.findById("wnd[0]").maximize()
    session.findById("wnd[0]/tbar[0]/okcd").text = "/nva32"
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/usr/ctxtVBAK-VBELN").text = plan_entrega
    session.findById("wnd[0]").sendVKey(0)
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/subSUBSCREEN_BUTTONS:SAPMV45A:4051/btnBT_PLEI").press()
            break
        except:
            simulate_enter()

    session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/btnBT_EIPO").press()
    session.findById("wnd[1]/usr/ctxtRV45A-ETDAT").text = ship_out_date
    session.findById("wnd[1]/usr/ctxtRV45A-ETDAT").setFocus()
    session.findById("wnd[1]/usr/ctxtRV45A-ETDAT").caretPosition = 8
    session.findById("wnd[1]").sendVKey(0)
    session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/btnBT_EILO").press()
    session.findById("wnd[0]/tbar[0]/btn[11]").press() # SAVE
    try:
        if session.findById("wnd[1]").text == 'Information':
            session.findById("wnd[1]/tbar[0]/btn[0]").press()
        elif session.findById("wnd[1]").text == 'Grabar documento incompleto':
            session.findById("wnd[1]/usr/btnSPOP-VAROPTION1").press()
        else:
            session.findById("wnd[1]/usr/btnSPOP-VAROPTION1").press()
    except Exception:
        print(Exception)
