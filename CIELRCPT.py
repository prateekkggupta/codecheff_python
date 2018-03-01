max_price = 2048
def rec(p):
    menu = 0 
    menu = p//2048
    p = p - menu*2048
    max_price =2048/2
    while p>0 :
        if p>=max_price:
            menu = menu + 1 
            p = p - max_price
            max_price= max_price/2
        else:
            max_price =max_price/2
    print(menu)
for i in range(0,int(input( ))):
    rec(int(input( )))
