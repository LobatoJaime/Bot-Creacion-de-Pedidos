import tkinter as tk
from tkinter import ttk
from ttkbootstrap import Style
import ctypes
from threading import Thread
import multiprocessing


class LoadingScreen:
    def __init__(self, root: tk.Tk, parent_window: tk.Frame, thread: multiprocessing.Process,
                 prompt: str, queue: multiprocessing.Queue = None):
        self.root = root
        self.queue = queue
        self.start = True
        self.thread = thread
        text = ttk.Label(parent_window, text=prompt, font=('Arial', 40))
        text.place(rely=.4, relx=.25)
        self.progressbar = ttk.Progressbar(parent_window, orient='horizontal', mode='indeterminate')
        self.progressbar.place(rely=.5, relx=.25, relwidth=.5)
        self.play_animation()
        # self.thread = Thread(target=self.play_animation)  # iniciar animacion en segundo plano
        # self.thread.setDaemon(True)
        # self.thread.start()

    def play_animation(self):
        from time import sleep
        if self.queue is not None:
            while self.queue.empty():
                # print(self.thread.is_alive())
                self.progressbar['value'] += 1
                self.root.update_idletasks()
                self.root.update()
                sleep(0.01)
            self.stop()
        elif self.queue is None:
            while self.thread.is_alive():
                # print(self.thread.is_alive())
                self.progressbar['value'] += 1
                self.root.update_idletasks()
                self.root.update()
                sleep(0.01)
            self.stop()

    def stop(self):
        self.start = False
