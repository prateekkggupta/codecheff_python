#include<stdio.h>
int main()
{//rounds mean the number of rounds
    int rounds , x , y , lead1 = 0  , lead2 = 0   ;
    // x and y are the cores if the people , lead 1 is the max lad of 1 and respecticely
    scanf("%d",&rounds);
    // input the number of rounds
    while(rounds>0)
        {
            scanf("%d %d",&x , &y );
            if(x-y>lead1) lead1 = x-y ;
            if(x-y<lead2) lead2 = x-y ;
            rounds-=1;//decrement
        }
    if (lead1+lead2>0) printf(" 1 %d",lead1);
    if (lead1 + lead2 <0) printf("2 %d",(-1)*lead2);
    // enter the code
    return(0);
}
