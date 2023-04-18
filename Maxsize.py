"""def getMax(a,b,c=-1000):
    if(a>=b)and(a>=c):
        largest=a
    elif(b>=a)and(b>=c):
        largest = b
    else:
        largest = c
    return largest

print(f"(10,20,50)중 최대 값: {getMax(10,20,50)}")
print(f"(10,20)중 최대 값: {getMax(10,20)}")
"""
def getMax(*args):
   return max(args, default=-1000)
    
print(f"(10,20,50)중 최대 값: {getMax(10,20,50)}")
print(f"(10,20)중 최대 값: {getMax(10,20)}")
      
    