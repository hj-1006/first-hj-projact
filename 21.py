from tkinter import *

def process1():
    tmp = float(e1.get())
    mytmp = (tmp-32)*5/9
    e2.insert(0,str(mytmp))
    
def process2():
    tmp = float(e2.get())
    mytmp = (tmp/5*9)+32
    e1.insert(0,str(mytmp))
    
window = Tk()

l1 = Label(window, text="화씨")
l2 = Label(window, text="섭씨")
l1.grid(row = 0,column=0)
l2.grid(row = 1,column=0)

e1 = Entry(window)
e2 = Entry(window)
e1.grid(row = 0,column=1)
e2.grid(row = 1,column=1)

b1 = Button(window, text="화씨->섭씨", command=process1)
b2 = Button(window, text="섭씨->화씨", command=process2)
b1.grid(row=2,column=0)
b2.grid(row=2,column=1)

window.mainloop()