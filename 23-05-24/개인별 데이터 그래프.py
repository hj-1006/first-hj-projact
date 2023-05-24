#개인별 데이터 그래
import pandas as pd
import matplotlib.pyplot as plt

#한글의 깨짐을 방지하는 부분
from matplotlib import font_manager, rc
font_location = "C:\Windows\Fonts\malgun.ttf"
font_name = font_manager.FontProperties(fname=font_location).get_name()
rc('font',family=font_name)


#CSV 파일 읽어 들인다.(이름 열을 인덱스로 한다)
df = pd.read_csv("test.csv",encoding="mbcs",index_col=0)

#국어에 대한 막대 그래프
df["국어"].plot.barh()
plt.legend(loc="lower left")
plt.show()

#국어와 수학에 대한 막대 그래프
df[["국어","수학"]].plot.barh()
plt.legend(loc="lower left")
plt.show()

#C에 대한 막대 그래프
df.loc["C"].plot.barh()
plt.legend(loc="lower left")
plt.show()


#C에 대한 원그래프
df.loc["C"].plot.pie(labeldistance=0.6)
plt.legend(loc="lower left")
plt.show()
