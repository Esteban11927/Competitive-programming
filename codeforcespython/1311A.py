t = int(input())
for x in range(t):
    a, b = map(int, input().split())
    if (a-b)%2 == 1 and a < b: print('1')
    elif (a-b)%2 == 1 and a > b: print('2')
    elif (a-b)%2 == 0 and a < b: print('2')
    elif (a-b)%2 == 0 and a > b: print('1')
    else: print('0')