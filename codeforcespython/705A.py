a = int(input())
for i in range(a-1):
    if i%2 == 0:
        print('I hate that', end = ' ')
    else:
        print('I love that', end = ' ')
if a%2 == 0 : print('I love it')
else : print('I hate it')