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
session.findById("wnd[0]/usr/ctxtVBAK-VBELN").text = "30428753"
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_OVERVIEW/tabpT\02/ssubSUBSCREEN_BODY:SAPMV45A:4419/subSUBSCREEN_TC:SAPMV45A:4916/subSUBSCREEN_BUTTONS:SAPMV45A:4051/btnBT_PLEI").press
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/btnBT_EIPO").press
session.findById("wnd[1]/usr/ctxtRV45A-ETDAT").text = "01012023"
session.findById("wnd[1]/usr/ctxtRV45A-ETDAT").setFocus
session.findById("wnd[1]/usr/ctxtRV45A-ETDAT").caretPosition = 8
session.findById("wnd[1]").sendVKey 0
session.findById("wnd[0]/usr/tabsTAXI_TABSTRIP_ITEM/tabpT\06/ssubSUBSCREEN_BODY:SAPMV45A:4602/btnBT_EILO").press
session.findById("wnd[0]/tbar[0]/btn[11]").press
