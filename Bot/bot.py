import time
from get_latest_email import get_latest_email
from upload_order import UploadOrder
import os
from Packages.constants import downloads_folder
from upload_pending_orders import upload_pending_orders


class Bot:
    def __init__(self):
        self.bot_running = False

    def start(self):
        self.bot_running = True
        while self.bot_running:
            time.sleep(5)  # Hacer que refresque cada 2 horas en el futuro
            print('-' * 70 + 'ACTUALIZANDO CORREOS' + '-' * 70)
            all_messages = get_latest_email(days_before=30)
            upload_pending_orders(all_messages)
            print('-' * 140)
            break


if __name__ == '__main__':
    bot = Bot()
    bot.start()
