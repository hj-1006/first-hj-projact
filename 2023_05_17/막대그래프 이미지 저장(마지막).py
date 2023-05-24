#막대 그래프 이미지로 저장
import pandas as pd
import matplotlib.pyplot as plt

#한글의 깨짐을 방지하는 부분
from matplotlib import font_manager, rc
font_location = "C:\Windows\Fonts\malgun.ttf"
font_name = font_manager.FontProperties(fname=font_location).get_name()
rc('font',family=font_name)


#CSV 파일 읽어 들인다.(이름 열을 인덱스로 한다)
df = pd.read_csv("test.csv",encoding="mbcs",index_col=0)

#색깔
col = ["skyblue","steelblue","tomato","cadetblue","orange","sienna"]
#국어에 대한 막대 그래프
df.T.plot.bar(color=col)
plt.legend(loc="lower right")
plt.savefig("file.png")
