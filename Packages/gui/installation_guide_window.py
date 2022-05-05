import os.path
import tkinter as tk
from tkinter import ttk
from .menu_bar import MenuBar
from PIL import ImageTk, Image
from ..constants import images_folder, resources_folder
from .scrollable_image import ScrollableImage


class InstallationGuideWindow:
    def __init__(self, root: tk.Tk, gui):
        """Pantalla donde se ven y editan los cambios que la app
            propone"""
        self.root = root
        self.gui = gui
        self.window_frame = tk.Frame(self.root)
        self.window_frame.place(relwidth=1, relheight=1)
        self.window_frame.tkraise()
        self.menu_bar = MenuBar(self.window_frame, gui)
        self.menu_bar.frame.place(relwidth=1)
        # -------------------------MOSTRAR IMAGEN---------------------------
        img_path = os.path.join(images_folder, 'instructions.png')
        img = ImageTk.PhotoImage(file=img_path)
        scrollbar_width = 25
        width = root.winfo_screenwidth()-scrollbar_width
        height = root.winfo_screenheight()
        self.image = ScrollableImage(self.window_frame, image=img, scrollbarwidth=scrollbar_width,
                               width=width, height=height)
        self.image.place(relx=0, rely=.03, relwidth=1)
        self.root.bind('<Right>', self.image.right_arrow)
        self.root.bind('<Left>', self.image.left_arrow)

    def show(self):
        self.window_frame.tkraise()
        self.root.bind('<Right>', self.image.right_arrow)
        self.root.bind('<Left>', self.image.left_arrow)

