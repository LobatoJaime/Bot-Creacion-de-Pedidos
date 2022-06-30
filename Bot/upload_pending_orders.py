import os
from Packages.constants import downloads_folder, codigo_sap_clientes_root
from upload_order import UploadOrder
import pandas as pd
from move_email import move_email_to_folder


def upload_pending_orders(all_messages: list):
    """Funcion donde se intentan subir uno por uno los correos que esten """
    clients_table = pd.DataFrame(data=pd.read_excel(codigo_sap_clientes_root), dtype=str)
    for message in all_messages:
        email_dest_folder = 'PENDIENTES POR REVISAR'
        sender = message.sender
        sender = str(sender)
        subject = message.subject
        sap_code_obtained = None
        client_name_obtained = None
        for index in clients_table.index:
            sap_code = str(clients_table['sap_code'][index])
            emails = str(clients_table['emails'][index]).split(',')
            client_name = str(clients_table['Customer'][index])
            if sender in emails:
                sap_code_obtained = sap_code
                client_name_obtained = client_name
                break
        print('<' * 70 + 'EMAIL' + '>' * 70)
        print('sender: {} | subject: {} | sap_code: {}'.format(sender, subject, sap_code_obtained))
        attachments_file_paths = []
        for att in message.Attachments:
            att_name = att.FileName
            print('     -->{}'.format(att_name))
            if sap_code_obtained is None:
                print('La orden no se puede subir. No hay código SAP')
                continue
            # Intentar subir la orden
            save_file_root = os.path.join(downloads_folder, att_name)
            att.SaveASFile(save_file_root)
            attachments_file_paths.append(save_file_root)
            print('Attachment Downloaded')
            order = UploadOrder(uploaded_file_root=r"C:\Users\IRDGFRM\Downloads\openpowci6262 (003).pdf",
                                sap_code=sap_code_obtained, client_name=client_name_obtained)
            order_status = order.start()
            if order_status != 'success':
                print('La orden no se puede subir. {}'.format(order_status))
            else:
                email_dest_folder = 'PASADOS A SAP'
                print('Archivo: {} subido exitosamente'.format(att_name))
        move_email_to_folder(email=message, dest_folder=email_dest_folder)