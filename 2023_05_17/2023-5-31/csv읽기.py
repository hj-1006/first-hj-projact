#엑셀파일 읽어 들이기
import pandas as pd

#csv read
df = pd.read_csv("서울특별시12.csv",header=None,encoding="CP949")

#results = df[df[0] == 2816]
#print(results[[0,1,8,11,15]])
re = df[df[3]=="양천구"]
print(re[[0,1,2,3,4]])

re = df[df[3].str.contains("양천구")]
print(re[[0,1,3,8]])