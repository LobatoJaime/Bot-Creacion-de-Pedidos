import datetime
from traceback import print_exc


def create_order_script(session: object, order_number: str, ship_out_date: str, quantity: str, sap_code: str,
                        reference: str):
    """Funcion en donde se ejecuta el script .vbs para crear un pedido nuevo"""
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
    # Obtener fecha de hoy dd/mm/yyyy
    print('Creando orden: {}'.format(order_number))
    now_time_dt = datetime.datetime.now()
    now_time = now_time_dt.strftime('%d.%m.%Y')

    # SCRIPT
    session.findById("wnd[0]").maximize()
    session.findById("wnd[0]/tbar[0]/okcd").text = "/nva31"
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/usr/ctxtVBAK-AUART").text = "zssa"
    session.findById("wnd[0]/usr/ctxtVBAK-VKORG").text = "ce00"
    #--------------- CONDICION NUMERO DE SECTOR DEPENDIENDO DEL CLIENTE-------------------
    if sap_code[0:5] in (99999, '99999'):  # Cliente externo
        numero_de_sector = '25'
    else:
        numero_de_sector = '15'
    session.findById("wnd[0]/usr/ctxtVBAK-VTWEG").text = numero_de_sector
    # -------------------------------------------------------------------
    session.findById("wnd[0]/usr/ctxtVBAK-SPART").text = "11"
    session.findById("wnd[0]/usr/ctxtVBAK-SPART").setFocus()
    session.findById("wnd[0]/usr/ctxtVBAK-SPART").caretPosition = 2
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").text = order_number
    session.findById(
        "wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/subPART-SUB:SAPMV45A:4701/ctxtKUAGV-KUNNR").text = sap_code
    session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").setFocus()
    session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").caretPosition = 7
    session.findById("wnd[0]").sendVKey(0)
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/ctxtRV45A-MABNR[1,0]").text = reference
            break
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/ctxtRV45A-MABNR[1,0]").caretPosition = 7
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]").sendVKey(0)
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/txtVBAP-POSNR[0,0]").setFocus()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/txtVBAP-POSNR[0,0]").caretPosition = 4
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]").sendVKey(2)
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\03").select()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").text = "d200"
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").setFocus()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").caretPosition = 4
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]").sendVKey(0)
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\13").select()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").text = reference
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").setFocus()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").caretPosition = 7
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]").sendVKey(0)
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]").sendVKey(0)
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06").select()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/txtVBLB-LABNK").text = "1"
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").text = now_time
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").setFocus()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").caretPosition = 8
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]").sendVKey(0)
            print('Subiendo orden--> ship_out_date:{}'.format(ship_out_date))
        except:
            simulate_enter()
    # cambiar visualizacion ---------------------------
    session.findById("wnd[0]").maximize()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/btn").press()
    session.findById("wnd[1]/usr/cmbAKT_VERSION").key = "Parametrización bási"
    session.findById("wnd[1]/tbar[0]/btn[11]").press()
    # --------------------------------------------------
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/ctxtRV45A-ETDAT[1,0]").text = ship_out_date
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").text = quantity
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").setFocus()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById(
                "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").caretPosition = 14
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]").sendVKey(0)
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[1]").sendVKey(0)
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]/tbar[0]/btn[11]").press()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]").maximize()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[0]/tbar[0]/btn[11]").press()
        except:
            simulate_enter()
    for i in range(2):
        try:
            session.findById("wnd[1]/usr/btnSPOP-VAROPTION1").press()
        except:
            simulate_enter()


    # SCRIPT BACK_UP
    """
    session.findById("wnd[0]").maximize()
    session.findById("wnd[0]/tbar[0]/okcd").text = "/nva31"
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/usr/ctxtVBAK-AUART").text = "zssa"
    session.findById("wnd[0]/usr/ctxtVBAK-VKORG").text = "ce00"
    session.findById("wnd[0]/usr/ctxtVBAK-VTWEG").text = "15"
    session.findById("wnd[0]/usr/ctxtVBAK-SPART").text = "11"
    session.findById("wnd[0]/usr/ctxtVBAK-SPART").setFocus()
    session.findById("wnd[0]/usr/ctxtVBAK-SPART").caretPosition = 2
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").text = order_number
    session.findById(
        "wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/subPART-SUB:SAPMV45A:4701/ctxtKUAGV-KUNNR").text = sap_code
    session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").setFocus()
    session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").caretPosition = 7
    session.findById("wnd[0]").sendVKey(0)
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/ctxtRV45A-MABNR[1,0]").text = reference
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/ctxtRV45A-MABNR[1,0]").caretPosition = 7
    session.findById("wnd[0]").sendVKey(0)
    try:
        session.findById("wnd[1]").sendVKey(0)  # PROBANDO !!!!!
    except Exception as e:
        print(e)
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/txtVBAP-POSNR[0,0]").setFocus()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/txtVBAP-POSNR[0,0]").caretPosition = 4
    session.findById("wnd[0]").sendVKey(2)
    session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\03").select()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").text = "d200"
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").setFocus()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").caretPosition = 4
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\13").select()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").text = reference
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").setFocus()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").caretPosition = 7
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]").sendVKey(0)
    session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06").select()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/txtVBLB-LABNK").text = "1"
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").text = now_time
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").setFocus()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").caretPosition = 8
    session.findById("wnd[0]").sendVKey(0)
    print('Subiendo orden--> ship_out_date:{}'.format(ship_out_date))
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/ctxtRV45A-ETDAT[1,0]").text = ship_out_date
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").text = quantity
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").setFocus()
    session.findById(
        "wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").caretPosition = 14
    session.findById("wnd[0]").sendVKey(0)
    try:
        session.findById("wnd[1]").sendVKey(0)
    except Exception as e:
        print(e)
    session.findById("wnd[0]/tbar[0]/btn[11]").press()
    try:
        session.findById("wnd[0]").maximize()
        session.findById("wnd[0]/tbar[0]/btn[11]").press()
        session.findById("wnd[1]/usr/btnSPOP-VAROPTION1").press()
    except Exception as e:
        print(e)
    try:
        session.findById("wnd[1]").sendVKey(0)  # PROBANDO !!!!!
    except Exception as e:
        print(e)
    """
