from tkinter import *

root = Tk()

def myClick():
    myLabel = Label(root, text = "LOOK! I clicked")
    myLabel.pack()

myButton = Button(root, text = "click me!", command = myClick, fg = "blue", bg = "silver")
myButton.pack()


root.mainloop()