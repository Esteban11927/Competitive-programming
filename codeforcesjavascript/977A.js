var n = readline().split(" ");
while(n[1]--)
    (n[0]%10==0)?n[0]/=10:n[0]--;
print(n[0]);