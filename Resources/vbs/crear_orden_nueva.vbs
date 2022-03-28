If Not IsObject(application) Then
   Set SapGuiAuto  = GetObject("SAPGUI")
   Set application = SapGuiAuto.GetScriptingEngine
End If
If Not IsObject(connection) Then
   Set connection = application.Children(0)
End If
If Not IsObject(session) Then
   Set session    = connection.Children(0)
End If
If IsObject(WScript) Then
   WScript.ConnectObject session,     "on"
   WScript.ConnectObject application, "on"
End If
session.findById("wnd[0]").maximize
session.findById("wnd[0]/tbar[0]/okcd").text = "/nva31"
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/ctxtVBAK-AUART").text = "zssa"
session.findById("wnd[0]/usr/ctxtVBAK-VKORG").text = "ce00"
session.findById("wnd[0]/usr/ctxtVBAK-VTWEG").text = "15"
session.findById("wnd[0]/usr/ctxtVBAK-SPART").text = "11"
session.findById("wnd[0]/usr/ctxtVBAK-SPART").setFocus
session.findById("wnd[0]/usr/ctxtVBAK-SPART").caretPosition = 2
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").text = "1221106"
session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/subPART-SUB:SAPMV45A:4701/ctxtKUAGV-KUNNR").text = "70001256"
session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").setFocus
session.findById("wnd[0]/usr/subSUBSCREEN_HEADER:SAPMV45A:4021/txtVBKD-BSTKD").caretPosition = 7
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/ctxtRV45A-MABNR[1,0]").text = "R112200"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/ctxtRV45A-MABNR[1,0]").caretPosition = 7
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/txtVBAP-POSNR[0,0]").setFocus
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/tblSAPMV45ATCTRL_U_ERF_LPZULI/txtVBAP-POSNR[0,0]").caretPosition = 4
session.findById("wnd[0]").sendVKey 2
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\03").select
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").text = "d200"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").setFocus
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\03/ssubSUBSCREEN_BODY:SAPMV45A:4452/ctxtVBAP-LGORT").caretPosition = 4
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\13").select
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").text = "R112200"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").setFocus
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\13/ssubSUBSCREEN_BODY:SAPMV45A:4454/ctxtVBAP-KDMAT").caretPosition = 7
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06").select
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/txtVBLB-LABNK").text = "1"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").text = "14122021"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").setFocus
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/subLIEFERDAT:SAPMV45A:4661/ctxtVBLB-ABRDT").caretPosition = 8
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/ctxtRV45A-ETDAT[1,0]").text = "240322"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").text = "450"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").setFocus
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,0]").caretPosition = 14
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/tbar[0]/btn[11]").press
