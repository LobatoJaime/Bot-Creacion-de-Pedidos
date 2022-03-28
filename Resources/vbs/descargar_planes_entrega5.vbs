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
session.findById("wnd[0]/tbar[0]/okcd").text = "/n/DEERE/V_SD_SA"
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/tbar[1]/btn[17]").press
session.findById("wnd[1]/usr/txtENAME-LOW").text = ""
session.findById("wnd[1]/usr/txtENAME-LOW").setFocus
session.findById("wnd[1]/usr/txtENAME-LOW").caretPosition = 0
session.findById("wnd[1]/tbar[0]/btn[8]").press
session.findById("wnd[1]/usr/cntlALV_CONTAINER_1/shellcont/shell").setCurrentCell 46,"TEXT"
session.findById("wnd[1]/usr/cntlALV_CONTAINER_1/shellcont/shell").firstVisibleRow = 28
session.findById("wnd[1]/usr/cntlALV_CONTAINER_1/shellcont/shell").selectedRows = "46"
session.findById("wnd[1]/tbar[0]/btn[2]").press
session.findById("wnd[0]/usr/txtS_BSTNK-LOW").text = "G0210221"
session.findById("wnd[0]/usr/txtS_BSTNK-LOW").setFocus
session.findById("wnd[0]/usr/txtS_BSTNK-LOW").caretPosition = 8
session.findById("wnd[0]/tbar[1]/btn[8]").press
session.findById("wnd[0]/usr/cntlCUSTOM_CONTROL_100/shellcont/shell").pressToolbarContextButton "&MB_VARIANT"
session.findById("wnd[0]/usr/cntlCUSTOM_CONTROL_100/shellcont/shell").selectContextMenuItem "&LOAD"
session.findById("wnd[1]/usr/ssubD0500_SUBSCREEN:SAPLSLVC_DIALOG:0501/cntlG51_CONTAINER/shellcont/shell").currentCellRow = 3
session.findById("wnd[1]/usr/ssubD0500_SUBSCREEN:SAPLSLVC_DIALOG:0501/cntlG51_CONTAINER/shellcont/shell").selectedRows = "3"
session.findById("wnd[1]/usr/ssubD0500_SUBSCREEN:SAPLSLVC_DIALOG:0501/cntlG51_CONTAINER/shellcont/shell").clickCurrentCell
session.findById("wnd[0]/usr/cntlCUSTOM_CONTROL_100/shellcont/shell").pressToolbarContextButton "&MB_EXPORT"
session.findById("wnd[0]/usr/cntlCUSTOM_CONTROL_100/shellcont/shell").selectContextMenuItem "&XXL"
session.findById("wnd[1]/usr/ctxtDY_PATH").text = "\\fcefactory1\PROGRAMAS_DE_PRODUCCION\6.Planificacion\Trabajos - Luis Guareschi\plan_entrega"
session.findById("wnd[1]/usr/ctxtDY_FILENAME").text = "planes_entrega.xlsx"
session.findById("wnd[1]/usr/ctxtDY_FILENAME").caretPosition = 19
session.findById("wnd[1]/tbar[0]/btn[11]").press
