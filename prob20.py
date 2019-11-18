l=1;
for i in range(1,100):
    l*=i

c=0
while(l):
    c+=l%10
    l//=10

print(c)
    
    
