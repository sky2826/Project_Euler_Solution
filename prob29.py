l=0
dict={}
for i in range(2,101):
    for j in range (2,101):
        if(i**j not in dict):
            l+=1
            dict[i**j]=1;


print(l)
