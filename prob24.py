def fac(n):
    if(n==1 or n==0):
        return 1
    return n*fac(n-1)


arr=[9,8,7,6,5,4,3,2,1,0]

order=1000000

num=""

while(len(arr)):
    if(order==1):
        num=num+str(arr.pop())

    else:
        k=0
        while(order>fac(len(arr)-1)):
            k+=1
            order-=fac(len(arr)-1)

        temp=[]
        for i in range(k):
            temp.append(arr.pop())

        num=num+str(arr.pop())

        for i in range(k):
            arr.append(temp.pop())


print(num)
    
