#include<stdio.h>
main()
{
    int t , i ;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
        {
            int n , j , answer , max , r_max ;
            scanf("%d",&n);
            int l[n] , r[n] ;
            for(j=0 ; j<n ; j++)    scanf("%d",&l[j]) ;
            for(j=0 ; j<n ; j++)    scanf("%d",&r[j]) ;
            max = l[n-1]*r[n-1] ;
            r_max = r[n-1] ;
            answer = n-1 ;
            for(j=n-2 ; j>=0 ; j--)
                {
                    if( ( l[j]*r[j] > l[j+1]*r[j+1] )  ||  ( (l[j]*r[j]==l[j+1]*r[j+1]) && (r[j]>=r[j+1])) )
                        {
                            answer = j;
                            max = l[j]*r[j] ;
                            r_max = r[j];
                        }
                }
            printf("%d\n",answer + 1 ) ;

        }
}
