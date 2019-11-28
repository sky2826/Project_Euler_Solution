

from itertools import permutations

s=0
l = list(permutations("0123456789"))

for i in l:
    i=''.join(i);
    if(not int(i[1:4])%2):
        if(not int(i[2:5])%3):
            if(not int(i[3:6])%5):
                if(not int(i[4:7])%7):
                    if(not int(i[5:8])%11):
                        if(not int(i[6:9])%13):
                            if(not int(i[7:10])%17):
                                s+=int(i)
                                
                                
print(s)
        
