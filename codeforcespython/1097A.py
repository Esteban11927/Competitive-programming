ans = 'NO'
a = input()
for i in input().split():
    if(i[0] == a[0] or i[1] == a[1]): ans = 'YES'
print(ans)