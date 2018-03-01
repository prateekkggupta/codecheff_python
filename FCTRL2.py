def factorial():
    total = 1
    i=1
    n = int(input( ))
    while i< (n+1):
        total = total*i
        i = i+1
    print(total)

t = int(input( ))
a = 0
while a<t:
    factorial()
    a = a+1
