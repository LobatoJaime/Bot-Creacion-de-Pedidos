import win32com.client
import datetime as dt
import os
from Packages.constants import downloads_folder


def get_latest_email(days_before: int):
    """Funcion que obtiene todos los correos recibidos en el rango
    de tiempo indicado"""
    outlook = win32com.client.Dispatch("Outlook.Application").GetNamespace("MAPI")
    yyyy = dt.date.today().year
    mm = dt.date.today().month
    dd = dt.date.today().day
    today = dt.datetime(yyyy, mm, dd, 23, 59, 59).strftime('%m/%d/%Y %H:%M %p')

    last_week_date_time = dt.datetime(yyyy, mm, dd) - dt.timedelta(days=days_before)
    last_week_date_time = last_week_date_time.strftime('%m/%d/%Y %H:%M %p')
    print('from:{} --> '
          'to:{}'.format(last_week_date_time, today))

    # Select main Inbox
    folder = outlook.Folders.Item("JDISA_orders")
    # inbox = folder.Folders.Item("Inbox")
    inbox = folder.Folders.Item("InboxPrueba")
    messages = inbox.Items

    # Filter messages
    if days_before >= 0:
        messages = messages.Restrict("[ReceivedTime] >= '" + last_week_date_time + "'")

    print('Reading Inbox, including Inbox Subfolders...')

    all_messages = list(messages)
    # seleccionar el ultimo mensaje
    # for message in all_messages:
    #     sender = message.sender
    #     subject = message.subject
    #     print('sender: {} | subject: {}'.format(sender, subject))
    #     attachments_file_paths = []
    #     for att in message.Attachments:
    #         att_name = att.FileName
    #         print('     -->{}'.format(att_name))
    #         save_file_root = os.path.join(downloads_folder, att_name)
    #         att.SaveASFile(save_file_root)
    #         attachments_file_paths.append(save_file_root)
    #         print('Attachment Downloaded')

    return all_messages


if __name__ == '__main__':
    get_latest_email(days_before=30)
