#가공된 데이터CSV파일 출력
import pandas as pd

#CSV 파일 읽어 들인다.
df = pd.read_csv("test.csv",encoding="MBCS")

#국어 점수가 높은 순으로 정렬한다.
kor = df.sort_values("국어",ascending=False)
kor.to_csv("export1.csv",encoding="mbcs")


#인덱스 삭제
kor.to_csv("export2.csv",encoding="mbcs",index=False)


#헤더 삭제
kor.to_csv("export3.csv",encoding="mbcs",header=False)