import pandas as pd
import matplotlib.pyplot as plt
#한글의 깨짐을 방지하는 부분
from matplotlib import font_manager, rc
font_location = "C:\Windows\Fonts\malgun.ttf"
font_name = font_manager.FontProperties(fname=font_location).get_name()
rc('font',family=font_name)


df = pd.read_csv("100701_2023053111382264.csv",index_col="전국 지역별",encoding="cp949")
df = df.drop("서울", axis=0)
df["2022"] = pd.to_numeric(df["2022"].str.replace(",",""))
df = df.sort_values("2022",ascending=False)
df["2022"].plot.bar(figsize=(10,6))
plt.show()