def clean(d):
    return d.strip("'").strip('"')
with open('prob22_data.txt','r') as f:
    arr=list(map(clean,f.readline().strip().strip('\n').split(",")))
    arr.sort()
    sum=0
    for i in range(0,len(arr)):
        a=0
        for j in arr[i]:
            a+=ord(j)-64
            
        sum+=a*(i+1)

    print(sum)
    
