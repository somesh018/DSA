s=input()
a=len(s)
count=0
for i in range (a):
    if s[i] == " ":
        count=count+1
    elif (s[i]=='.' or s[i]=='!' or s[i]==',' or s[i]=='?'):
        count=count-1


if (count%2==0):
    b=((count+1)//2)+1
else:
    b=(count+1)//2

print(b)