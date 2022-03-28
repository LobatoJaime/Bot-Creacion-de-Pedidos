from time import sleep


def add_order_script(session: object, plan_entrega: str, ship_out_date: str, quantity: str):
    """Funcion en donde se ejecuta el script .vbs para agregar un pedido a
    un plan de entrega existente"""
    print('Subiendo orden--> ship_out_date:{}'.format(ship_out_date))
    session.findById('wnd[0]').maximize()
    session.findById('wnd[0]/tbar[0]/okcd').text = '/nva32'
    session.findById('wnd[0]').sendVKey(0)
    session.findById('wnd[0]/usr/ctxtVBAK-VBELN').text = plan_entrega
    session.findById('wnd[0]/usr/ctxtVBAK-VBELN').caretPosition = 10
    session.findById('wnd[0]').sendVKey(0)
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/subSUBSCREEN_BUTTONS:SAPMV45A:4051/btnBT_PLEI").press()
    session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/btnBT_EIAN").press()
    # cambiar visualizacion ---------------------------
    session.findById("wnd[0]").maximize()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/btn").press()
    session.findById("wnd[1]/usr/cmbAKT_VERSION").key = "Parametrización bási"
    session.findById("wnd[1]/tbar[0]/btn[11]").press()
    #--------------------------------------------------
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/ctxtRV45A-ETDAT[1,1]").text = ship_out_date
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,1]").text = quantity
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,1]").setFocus()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,1]").caretPosition = 17
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]").sendVKey(0)  # de prueba
    session.findById("wnd[0]").sendVKey(0)  # de prueba
    session.findById("wnd[0]").sendVKey(0)  # de prueba
    session.findById("wnd[0]/tbar[0]/btn[11]").press()
    try:
        if session.findById("wnd[1]").text == 'Information':
            session.findById("wnd[1]/tbar[0]/btn[0]").press()
        elif session.findById("wnd[1]").text == 'Grabar documento incompleto':
            session.findById("wnd[1]/usr/btnSPOP-VAROPTION1").press()
        else:
            session.findById("wnd[1]/usr/btnSPOP-VAROPTION1").press()
    except Exception:
        print(Exception)
