a=1
b=1
l=2
while(len(str(b)))<1000:
    temp=b
    b=a+b
    a=temp
    l+=1

print(l)
    
