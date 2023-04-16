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


l1 = tk.Label(window,text="매매 기준율", font='helvetica 11 italic')
l2 = tk.Label(window,text="달러", font='helvetica 11 italic',justify='right')
l3 = tk.Label(window,text="원", font='helvetica 11 italic',justify='center')
l1.place(x=30, y=10)
l2.place(x=50, y=40)
l3.place(x=55, y=70)

e1 = tk.Entry(window)
e2 = tk.Entry(window)
e3 = tk.Entry(window)
e1.place(x=120, y=10)
e2.place(x=120, y=40)
e3.place(x=120, y=70)

b1 = tk.Button(window,text="달러->원",command=process)
b2 = tk.Button(window,text="원->달러",command=process2)
b1.place(x=30, y=110, width=100, height=30)
b2.place(x=170, y=110, width=100, height=30)

# 창의 크기 조절 불가능
window.resizable(False, False)
window.geometry('280x150')

window.mainloop()