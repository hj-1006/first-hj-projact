#그래프
import pandas as pd
import matplotlib.pyplot as plt


#한글의 깨짐을 방지하는 부분
from matplotlib import font_manager, rc
font_location = "C:\Windows\Fonts\malgun.ttf"
font_name = font_manager.FontProperties(fname=font_location).get_name()
rc('font',family=font_name)


#CSV 파일 읽어 들인다.(이름 열을 인덱스로 한다)
df = pd.read_csv("test.csv",encoding="mbcs",index_col=0)

#그래프를 만들어 표시
df.plot()
plt.show()

#막대 그래프
df.plot.bar()
plt.legend(loc="lower right")
plt.show()

#막대 그래프(수평)
df.plot.barh()
plt.legend(loc="lower left")
plt.show()

#누적 막대 그래프
df.plot.bar(stacked=True)
plt.legend(loc="lower right")
plt.show()

#상자 수염 그래프
df.plot.box()
plt.show()

#면적 그래프
df.plot.area()
plt.legend(loc="lower right")
plt.show()