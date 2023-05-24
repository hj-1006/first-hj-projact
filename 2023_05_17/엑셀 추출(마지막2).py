import pandas as pd
import openpyxl

df = pd.read_csv("test.csv",encoding="mbcs")

kor = df.sort_values("국어",ascending=False)

kor.to_excel("csv_to_excell.xlsx")

kor.to_excel("csv_to_excell2.xlsx",index=False,sheet_name="국어로 정렬")