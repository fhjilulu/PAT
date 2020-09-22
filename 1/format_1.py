a,b=map(int,input().split())
total=a+b
if total<0:
    print("-",end="")
    total=-total
str_total=str(total)
l=len(str_total)
for i in range(l):
    if (l-i)%3==0 and i!=0 :
        print(",",end="")
        print(str_total[i],end="")
    else:
        print(str_total[i],end="")
