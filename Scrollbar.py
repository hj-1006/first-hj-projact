import tkinter as tk

win = tk.Tk()

VS = tk.Scrollbar(win)
VS.pack(side= tk.RIGHT, fill = tk.Y)

T = tk.Text(win, height = 10, width = 30)
VS.config(command = T.yview)
T.configure(yscrollcommand = VS.set)
T.pack()

T.insert(tk.END,"바닷가 인근 마을 전체가 시뻘건 화염에 휩싸였습니다.\n경찰관이 연기를 뚫고 급하게 뛰어다니고, 혹시 사람이 있는지 연신 주택 문을 두드립니다.\n겨우 옷만 챙겨 입고, 순찰차를 타고 대피합니다.[경찰관 : 지금 양쪽이 고립됐어요. 얼른 나오셔야 돼요.]\n오전 9시 43분, 소방청은 최고 대응 수위인 3단계를 올해 들\n어 처음 발령했습니다.")

win.mainloop()
