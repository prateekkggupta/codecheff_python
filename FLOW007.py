for i in range(0,int(input())):
    k=[]
    n = input()
    j = len(n)-1
    while j>=0:
        k.append(n[j])
        j = j-1
    print(int(''.join(k)))
