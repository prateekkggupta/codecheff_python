#include<stdio.h>
main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
        {
            t = t-1 ;
            int n ;
            double fact=1 ;
            scanf("%d",&n);
            while(n>0)
                {
                    fact = fact*n ;
                    n = n-1 ;
                }
            printf("%.0lf",fact);

        }
}
