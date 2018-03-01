/*  3
2 4 4
3 2 3 4
4 3 15 9 6 */
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
        {
            int n , i , j=0 ;
            scanf("%d",&n);
            int a[n] ;
            for(i=0 ; i<n ; i++)
                {
                    scanf("%d",&a[i]);
                }
            i = a[0];
            while(i>0)
                {

                    for(j=0 ; j<n ; j++)
                        {

                            if(a[j]%i!=0)
                            {
                                break ;
                            }

                        }
                    if(j = n) break ;
                    i = i-1 ;
                }
            for(j=0 ; j<n ; j++)
                {
                    printf("%d",a[j]/i) ;
                }
            printf("\n");
            t = t-1 ;
        }
    return(0) ;

}
