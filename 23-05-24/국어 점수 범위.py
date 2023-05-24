import pandas as pd

df = pd.read_csv("test.csv", encoding="MBCS")

#열 데이터
#print("국어의 열 데이터\n",df["국어"])

#print("국어와 수학 열 데이터\n",df[["국어","수학"]])

#--------------------행 데이터---------------------

print("C행 데이터\n",df.loc[2])

print("C와 D행 데이터\n",df.loc[[2,3]])

#---------------행과 열 데이터-------------------------
print("C행과 국어 열 데이터\n",df.loc[2]["국어"])

#열과 행 추가
df["미술"] = [68,73,82,77,94,96]
print("열 데이터(미술)을 추가/n",df)


df.loc[6] = ["G",90,92,94,96,92,98]
print("행 데이터(G)을 추가/n",df)

#삭제
print("국어 열",df.drop("국어",axis=1))

print("인덱스2행\n",df.drop(2,axis=0))
#마지막