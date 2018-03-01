// devu and the theif
#include<stdio.h>
main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
        {
            int i , j , m , x , y , result=0 ;
            scanf("%d %d %d ",&m , &x , &y);
            int house[100] , cops[m] ;
            for(i=0 ; i<100 ; i++ )
                {
                    house[i]=0 ;
                }
            for(i=0 ; i<m ; i++)
                {
                    scanf("%d",&cops[i]);
                    for(j=cops[i]-1-x*y ; j< cops[i]-1+x*y ; j++)
                        {
                            if((j>=0)&&(j<100))
                            {   printf("%d\n",j);
                                house[j]=1 ;

                            }
                        }
                }
              printf("KK");
            for(i=0 ; i<100 ; i++)
                {   printf("house %d %d\n",i , house[i]);
                    if(house[i]==0) result = result + 1;
                }
            printf("%d",result);

            t = t-1 ;
        }
}
