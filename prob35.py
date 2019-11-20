arr=[1 for i in range(0,1000001)]
arr[1]=0
arr[0]=0

l=2;
while(l*l<=1000000):
    if(arr[l]):
        for j in range(l+l,1000001,l):
            arr[j]=0
    l+=1

count=0
for i in range(2,1000000):
    if(arr[i]):
        l=len(str(i))-1
        s=str(i)
        f=True
        while(l):
            if(not arr[int(s[1:]+s[0:1])]):
                f=False
                break
            s=s[1:]+s[0:1]
            l-=1

        if(f):
            count+=1


print(count)
            
        
