from tkinter import*

def process():
    print("안녕하세요~")
    
win = Tk()
button = Button(win,text="클릭하시오!",command=process)
button.pack()
win.mainloop()