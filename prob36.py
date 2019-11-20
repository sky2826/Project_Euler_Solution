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
for i in range(10,1000000):
    f=True
    if(arr[i]):

        l=len(str(i))
        for j in range(1,l):
            if(not arr[int(str(i)[j:])]):
                f=False
                break
       

        if(f):
            for j in range(l,0,-1):
                if(not arr[int(str(i)[0:j])]):
                   f=False
                   break

        if(f):
            count+=i

print(count)


        
            
            
        
