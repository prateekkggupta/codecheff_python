//transform the expression
#include<stdio.h>

main()
{
    int t , i ;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
        {
            int a , b , c , d  , answer = 0 , x,y;
            scanf("%d %d %d %d",&a,&b,&c,&d);
            for(y=c ; y<=d ; y++)
                {
                    x=a ;
                    while((x<y)&&(x<=b))
                        {
                            x = x + 1 ;
                            answer = answer + 1 ;
                        }
                }
            printf("%d\n",answer);
        }
}
