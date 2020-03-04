import math

def calculate(x, y):
    if(y == 0): return x
    if(x%10 == 0): return calculate(x/10, y-1)
    else: return calculate(x-1, y-1)
    

x, y = map(int, input().split())
n = calculate(x, y)

print(math.floor(n))