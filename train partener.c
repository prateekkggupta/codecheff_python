#include<stdio.h>

int main()
{
    int t , i ;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
        {
            int n , partener , num   ;
            scanf("%d",&n);
            num = n%8 ;
            if(num==0) partener = n -1 ;
            else if (num<=3) partener = n + 3 ;
            else if (num<=6) partener = n - 3 ;
            else if (num==7) partener = n + 1 ;
            printf("%d",partener);
            if(num==0) printf("SL");
            else if((num==1)||(num==4)) printf("LB");
            else if((num==2)||(num==5)) printf("MB");
            else if((num==3)||(num==6)) printf("UB");
            else if(num==7) printf("SU");
            printf("\n");
        }
    return(0);
}
