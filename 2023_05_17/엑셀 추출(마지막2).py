import pandas as pd
import openpyxl

df = pd.read_csv("test.csv",encoding="mbcs")

kor = df.sort_values("국어",ascending=False)
math = df.sort_values("수학",ascending=False)
so =  df.sort_values("사회",ascending=False)
en =  df.sort_values("영어",ascending=False)
si =  df.sort_values("과학",ascending=False)

kor.to_excel("csv_to_excell.xlsx")

kor.to_excel("csv_to_excell2.xlsx",index=False,sheet_name="국어로 정렬")

with pd.ExcelWriter("csv_to_excell3.xlsx") as writer:
    df.to_excel(writer,index=False,sheet_name="원본 데이터")
    kor.to_excel(writer,index=False,sheet_name="국어로 정렬")
    math.to_excel(writer,index=False,sheet_name="수학으로 정렬")
    so.to_excel(writer,index=False,sheet_name="사회로 정렬")
    en.to_excel(writer,index=False,sheet_name="영어로 정렬")
    si.to_excel(writer,index=False,sheet_name="과학로 정렬")