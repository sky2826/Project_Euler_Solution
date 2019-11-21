d={}
d[1]=1
n=2
while(n*(n+1)/2<=26*26):
    d[n*(n+1)/2]=1
    n+=1


def namesum(s):
    l=0
    for i in s:
        l+=ord(i)-64

    return l

def clean(string):
    return string.strip('"')
with open('prob42_data.txt','r') as f:
    arr=list(map(clean,f.readline().strip('\n').strip().split(",")))
    m=0
    l=0
    for i in arr:
        s=namesum(i)

        if( s in d):
            m+=1

        if(s>l):
            l=s

    print(m," ",l)

        
