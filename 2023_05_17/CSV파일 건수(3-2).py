import pandas as pd

df = pd.read_csv("test.csv", encoding="MBCS")


print("데이터 건수 = ",len(df))
print("항목명 =",df.columns.values)
print("인덱스 =",df.index.values)
