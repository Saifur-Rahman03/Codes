from tkinter import *

root = Tk()
e = Entry(root, width = 30, borderwidth = 3)
e.pack()
e.insert(0, "Name")

def myClick():
    myLabel = Label(root, text = "Fuck you, " + e.get())
    myLabel.pack()

myButton = Button(root, text = "Submit", command = myClick, fg = "blue", bg = "silver")
myButton.pack()


root.mainloop()