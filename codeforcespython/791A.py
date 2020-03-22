a, b = map(int, input().split())
ans = 0
while a <= b:
    a = a*3
    b = b*2
    ans = ans+1


print(ans)