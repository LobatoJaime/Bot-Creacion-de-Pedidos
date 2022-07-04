import win32com.client


def send_email(sender: str, subject: str, body: str, receivers: list, cc: list = None):
    """Script que envia un correo electronico a traves de outlook"""
    olMailItem = 0x0
    obj = win32com.client.Dispatch("Outlook.Application")
    newMail = obj.CreateItem(olMailItem)
    newMail.SentOnBehalfOfName = sender
    newMail.Subject = subject
    newMail.Body = body
    newMail.To = "; ".join(receivers)
    newMail.Sensitivity = 2
    if cc is not None:
        newMail.CC = "; ".join(cc)
    newMail.Send()


if __name__ == '__main__':
    send_email(sender='JDISA_orders@JohnDeere.com',
               subject='TEST',
               body='Es un correo de prueba!',
               receivers=['GuareschiSotoLuisRicardo@JohnDeere.com'])
