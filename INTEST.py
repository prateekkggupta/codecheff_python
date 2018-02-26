x = input( )
n = int(x.split()[0])
k = int(x.split()[1])
answer=0
for i in range(n):
    if int(input())%k is 0 :
        answer=answer+1
print(answer)
