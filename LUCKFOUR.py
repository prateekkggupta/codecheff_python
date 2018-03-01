def count4(n):
    count=0
    for char in n :
        if '4'==char:
            count = count +1
    print(count)
for i in range(0 , int(input())):
    count4(input())
