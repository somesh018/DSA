num='71259'
n=''
for x in range(len(num)):
    a=int(num[x])
    while a>x:
        if a%9:
            a-=3
        else:
            a%=3
        n+=str(a)
print(n)