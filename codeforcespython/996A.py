c = int(input())
ans = int(c / 100)
c -= int(c/100)*100
ans += int(c / 20)
c -= int(c/20)*20
ans += int(c / 10)
c -= int(c/10)*10
ans += int(c / 5)
c -= int(c/5)*5
ans += int(c / 1)
c -= int(c/1)*1
print(ans)