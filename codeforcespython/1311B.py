t = int(input())
for x in range(t):
    ans = True
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    p = list(map(int, input().split()))
    c = []
    for i in a: c.append(i)
    c.sort()
    for i in range(0, n):
        for j in range(0, n-1):
            if a[j] > a[j+1] and j+1 in p:
                x = a[j]
                a[j] = a[j+1]
                a[j+1] = x
    if(a == c): print('YES')
    else: print('NO')