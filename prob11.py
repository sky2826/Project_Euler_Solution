with open('prob11_data.txt','r') as f:
    data=[]
    for i in f.readlines():
        data.append(list(map(int,i.strip('\n').strip(' ').split())))

    d={}
    s=0
    for i in range(20):
        j=0
        while(j<=16):
            val=1
            temp=data[i][j]*data[i][j+1]*data[i][j+2]*data[i][j+3]
            if(temp>s):
                s=temp
            j+=1

    print(s)
    for i in range(20):
        j=0
        while(j<=16):
            temp=data[j][i]*data[j+1][i]*data[j+2][i]*data[j+3][i];
            if(temp>s):
                s=temp
            j+=1

    print(s)

    j=-19
    while(j<=19):
        l=0
        r=0;
        if(j<0):
            r=20+j
        elif(j>0):
            l=j


        while(l+3<=19 and r+3<=19):
            
            temp=data[l][r]*data[l+1][r+1]*data[l+2][r+2]*data[l+3][r+3]
            if(temp>s):
                s=temp
            l+=1
            r+=1
        j+=1

    print(s)
    j=-19
    while(j<=19):
        l=0
        r=19
        if(j<0):
            r=r+j
        else:
            l=l+j

        while(l+3<=19 and r-3>=0):
            temp=data[l][r]*data[l+1][r-1]*data[l+2][r-2]*data[l+3][r-3]
            if(temp>s):
                s=temp
            l+=1
            r-=1
        j+=1

    print(s)




