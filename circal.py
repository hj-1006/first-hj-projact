
def cal_area(r):
    area = 3.14 * r ** 2
    return area
area = 0
r = float(input("원의 반지름: "))
area = cal_area(r)
print(area)        