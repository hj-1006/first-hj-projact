#데이터 집계,내림 올림,행과 열 바꾸기,
import pandas as pd

df = pd.read_csv("test.csv", encoding="MBCS")
 
print("수학의 최고점 =",df["수학"].max())
print("수학의 최저점 =",df["수학"].min())
print("수학의 평균값 =",df["수학"].mean())
print("수학의 중앙값 =",df["수학"].median())
print("수학의 점수 합계 =",df["수학"].sum())


#정렬
#내림차순
kor = df.sort_values("국어",ascending=False)
print("국어 점수가 높은 순으로 정렬\n",kor)


#행과 열 봐꾸기
print("행과 열을 바꾼다\n",df.T)


#리스트로 데이터화
print("Python의 리스트 데이터화\n",df.values)
