x = input( )
debit = float(x.split( )[0])
balance = float(x.split( )[1])
if (debit%5 == 0)&(balance-debit-0.5>=0) :
    balance = balance-debit-0.5
print('%.2f'%balance)
