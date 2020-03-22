t = int(input())
while t > 0:
    t -= 1
    n, m = map(int, input().split())
    s = input()
    p = list(map(int, input().split()))
    ans = dict()
    aux = [[0 for x in range(n)] for y in range(27)]
    for i in range(27):
        ans[chr(i+ord('a'))] = 0
    for i in range(n):
        for j in range(27):
            if (s[i] == chr(j+ord('a'))):
                aux[j][i] = 1
            if(i > 0):
                aux[j][i] += aux[j][i-1]
    for i in range(m):
        for j in range(27):
            ans[chr(j+ord('a'))] += aux[j][p[i]-1]
    for i in range(ord('a'), ord('z')+1):
        print(ans[chr(i)] + aux[i-ord('a')][n-1], end = ' ')
    print()