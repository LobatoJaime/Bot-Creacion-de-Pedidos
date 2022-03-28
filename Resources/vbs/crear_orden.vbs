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
session.findById("wnd[0]/tbar[0]/okcd").text = "/nva32"
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/ctxtVBAK-VBELN").text = "0030428753"
session.findById("wnd[0]/usr/ctxtVBAK-VBELN").caretPosition = 10
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/subSUBSCREEN_BUTTONS:SAPMV45A:4051/btnBT_PLEI").press
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 3
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 6
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 15
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 18
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 21
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 27
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 33
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 36
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 45
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF").verticalScrollbar.position = 48
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/ctxtRV45A-ETDAT[1,10]").text = "01012023"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,10]").text = "10"
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,10]").setFocus
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/txtVBEP-WMENG[3,10]").caretPosition = 17
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/tbar[0]/btn[11]").press
