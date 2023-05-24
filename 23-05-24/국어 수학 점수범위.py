import pandas as pd

df = pd.read_csv("test.csv", encoding="MBCS")

#국어 점수가 90점 이상일 때
data_s = df[df["국어"]>= 60]
data_s = df[df["수학"]>=80]
print("국어가 60점 이상이고 수학80점이상일때\n",data_s)

#수학 점수가 70점 이상일때
data_c = df[df["수학"]>= 70]
print("수학이 70점 이상\n",data_s)