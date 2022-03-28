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
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/ctxtRV45A-ETDAT[1,1]").setFocus
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/tblSAPMV45ATCTRL_PEIN_ABRUF/ctxtRV45A-ETDAT[1,1]").caretPosition = 10
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[1]/usr/btnSPOP-VAROPTION1").press
