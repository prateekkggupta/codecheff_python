n = int(input( ))
for i in range(n):
    answer = 0
    x = int(input( ))
    while x>0:
        answer = answer + x//5
        x = x//5
    print(answer)
