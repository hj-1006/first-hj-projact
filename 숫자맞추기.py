from tkinter import*
import random

answer = random.randint(1,100)
cnt = 1
answeradd = 0

def gussing():
    global cnt,answeradd, answer
    guess = int(guessField.get())
    if guess > answer:
        if (guess-answer) > 10:
            msg = f"{guess}는 정답보다 멀고 큼니다."
        else : 
            msg = f"{guess}는 정답에 가깝고 큼니다."
    elif guess < answer:
        if (answer-guess) > 10:
            msg = f"{guess}는 정답보다 멀고 작습니다."
        else: 
            msg = f"{guess}는 정답에 가깝고 작습니다."
    else :
        msg = f"정답입니다! 총 {cnt}번 시도했습니다."
        cnt = 1
        answeradd += 1
        totalLabel["text"] = f"총 맞춘 갯수: {answeradd}\n정답: {answer}"
        answer = random.randint(1,100)
        
    resultLabel["text"]= msg
    guessField.delete(0,    5)
    cnt += 1
    
def reset():
    global answer, answeradd
    answeradd = 0
    answer = random.randint(1,100)
    resultLabel["text"] = "다시 한번 하세요!"
    totalLabel["text"] = f"총 맞춘 갯수: {answeradd}\n정답: 2{answer}"
    
win = Tk()
win.configure(bg="white")
win.title("숫자를 맞춰보세요!")
win.geometry("500x80")
titleLabel = Label(win,text= f"숫자 게임에 오신것을 환영합니다.",bg = "white")
titleLabel.pack()
guessField = Entry(win)
guessField.pack(side="left")
tryBotton = Button(win,text="시도",fg="green",bg="white",command=gussing)
tryBotton.pack(side="left")

resetButton = Button(win, text="초기화",fg="red",bg="white",command=reset)
resetButton.pack(side="left")
resultLabel = Label(win,text=f"1부터 100사이의 숫자를 입력하시오",bg = "white")
resultLabel.pack(side="left")
totalLabel = Label(win, text=f"총 맞춘 갯수: {answeradd}\n정답: {answer}", bg="white")
totalLabel.pack(side="right")
win.mainloop()