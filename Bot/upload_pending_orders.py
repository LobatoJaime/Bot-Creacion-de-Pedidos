import os
from Packages.constants import downloads_folder
from upload_order import UploadOrder


def upload_pending_orders(all_messages: list):
    for message in all_messages:
        sender = message.sender
        subject = message.subject
        print('sender: {} | subject: {}'.format(sender, subject))
        attachments_file_paths = []
        for att in message.Attachments:
            att_name = att.FileName
            print('     -->{}'.format(att_name))
            # save_file_root = os.path.join(downloads_folder, att_name)
            # att.SaveASFile(save_file_root)
            # attachments_file_paths.append(save_file_root)
            # print('Attachment Downloaded')

            # order = UploadOrder(uploaded_file_root=r"C:\Users\IRDGFRM\Downloads\openpowci6262 (003).pdf",
            #                     client_name='WorldClass Industries', )
            # order.start()
