import tkinter as tk
    
def process():
    e3.delete(0, tk.END)
    coin = float(e2.get())
    mycoin = round(coin * float(e1.get()), 2)
    e3.insert(0,str(mycoin)+"\\")
    
def process2():
    e2.delete(0, tk.END)
    coin2 = float(e3.get())
    mycoin2 = round(coin2 / float(e1.get()), 2)
    e2.insert(0,str(mycoin2)+"$") 

window = tk.Tk()

# row와 column 크기를 동적으로 조절
window.rowconfigure(1, weight=1)
window.rowconfigure(2, weight=1)
window.rowconfigure(3, weight=1)
window.columnconfigure(1, weight=1)

l1 = tk.Label(window,text="매매 기준율", font='helvetica 16 italic')
l2 = tk.Label(window,text="달러", font='helvetica 16 italic')
l3 = tk.Label(window,text="원", font='helvetica 16 italic')
l1.grid(row=0,column=0)
l2.grid(row=1,column=0, sticky="E")
l3.grid(row=2,column=0, sticky="E")

e1 = tk.Entry(window)
e2 = tk.Entry(window)
e3 = tk.Entry(window)
e1.grid(row=0,column=1, sticky="EW")
e2.grid(row=1,column=1, sticky="EW")
e3.grid(row=2,column=1, sticky="EW")

b1 = tk.Button(window,text="달러->원",command=process)
b2 = tk.Button(window,text="원->달러",command=process2)
b1.grid(row=3,column=0, columnspan=1, sticky="W")
b2.grid(row=3,column=1, columnspan=1, sticky="E")

# 창의 크기 조절 불가능
window.resizable(1, 1)

window.mainloop()