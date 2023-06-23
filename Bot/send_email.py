import win32com.client
import pandas as pd
from pandas import DataFrame
import os
import datetime



def send_email(sender: str, subject: str, body: str, receivers: list, cc: list = None):
    """Script que envia un correo electronico a traves de outlook"""
    olMailItem = 0x0
    obj = win32com.client.Dispatch("Outlook.Application")
    newMail = obj.CreateItem(olMailItem)
    newMail.SentOnBehalfOfName = sender
    now_time_dt = datetime.datetime.now()
    now_time = now_time_dt.strftime('%d-%m-%Y_%Hh-%Mm')
    body += str(now_time)
    newMail.Subject = subject
    newMail.Body = body
    newMail.To = "; ".join(receivers)
    newMail.Sensitivity = 2
    if cc is not None:
        newMail.CC = "; ".join(cc)



    newMail.Send()


if __name__ == '__main__':
    send_email(sender='JDISA_ORDERS@JohnDeere.com',
               subject='TEST',
               body='Es un correo de prueba!',
               receivers=['DelPinoVegaJuan@JohnDeere.com'])
