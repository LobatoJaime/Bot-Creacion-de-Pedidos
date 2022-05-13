import tkinter as tk, tkinter.ttk as ttk
from typing import Iterable


class ScrollFrame(tk.Frame):
    def __init__(self, master, scrollspeed=5, r=0, c=0, rspan=1, cspan=1, grid={}, **kwargs):
        tk.Frame.__init__(self, master, **{'width': 400, 'height': 300, **kwargs})

        # __GRID
        self.grid(**{'row': r, 'column': c, 'rowspan': rspan, 'columnspan': cspan, 'sticky': 'nswe', **grid})

        # allow user to set width and/or height
        if {'width', 'height'} & {*kwargs}:
            self.grid_propagate(0)

        # give this widget weight on the master grid
        self.master.grid_rowconfigure(r, weight=1)
        self.master.grid_columnconfigure(c, weight=1)

        # give self.frame weight on this grid
        self.grid_rowconfigure(0, weight=1)
        self.grid_columnconfigure(0, weight=1)

        # _WIDGETS
        self.canvas = tk.Canvas(self, bd=0, bg=self['bg'], highlightthickness=0, yscrollincrement=scrollspeed)
        self.canvas.grid(row=0, column=0, sticky='nswe')

        self.frame = tk.Frame(self.canvas, **kwargs)
        self.frame_id = self.canvas.create_window((0, 0), window=self.frame, anchor="nw")

        self.vsb = tk.Scrollbar(self, orient="vertical")
        self.vsb.grid(row=0, column=1, sticky='ns')
        self.vsb.configure(command=self.canvas.yview)

        # attach scrollbar to canvas
        self.canvas.configure(yscrollcommand=self.vsb.set)

        # _BINDS
        # canvas resize
        self.canvas.bind("<Configure>", self.on_canvas_configure)
        # frame resize
        self.frame.bind("<Configure>", self.on_frame_configure)
        # scroll wheel
        self.canvas.bind_all('<MouseWheel>', self.on_mousewheel)

    # makes frame width match canvas width
    def on_canvas_configure(self, event):
        self.canvas.itemconfig(self.frame_id, width=event.width)

    # when frame dimensions change pass the area to the canvas scroll region
    def on_frame_configure(self, event):
        self.canvas.configure(scrollregion=self.canvas.bbox("all"))

    # add scrollwheel feature
    def on_mousewheel(self, event):
        value = self.vsb.get()
        if value == (0.0, 1.0):
            return

        self.canvas.yview_scroll(int(-event.delta / abs(event.delta)), 'units')

    # configure self.frame row(s)
    def rowcfg(self, index, **options):
        index = index if isinstance(index, Iterable) else [index]
        for i in index:
            self.frame.grid_rowconfigure(i, **options)
        # so this can be used inline
        return self

    # configure self.frame column(s)
    def colcfg(self, index, **options):
        index = index if isinstance(index, Iterable) else [index]
        for i in index:
            self.frame.grid_columnconfigure(i, **options)
        # so this can be used inline
        return self


# EXAMPLE:
# root = tk.Tk()
# root.columnconfigure(0, weight=1)
# window_frame = tk.Frame(root)
# window_frame.place(relheight=1, relwidth=1)
# scrollframe = ScrollFrame(window_frame, scrollspeed=10, r=0, c=0, cspan=1).colcfg(range(1), weight=1).frame
# frame = tk.Frame(scrollframe)
# frame.grid(row=0, column=0, sticky='nsew')
# frame.columnconfigure(0, weight=1)
# for i in range(1):
#     b = ttk.Button(frame, text="Sample scrolling label")
#     b.grid(row=i, column=0, sticky='ew')
# root.mainloop()
