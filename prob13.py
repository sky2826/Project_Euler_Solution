with open("prob13_data.txt",'r') as f:
    s=0
    for i in f.readlines():
        s+=int(i.strip(' ').strip('\n'))
    print(str(s)[0:10])
