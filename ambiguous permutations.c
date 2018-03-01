#include<stdio.h>
int main()
{
    while(1)
        {
            int n , i ;
            scanf("%d",&n);
            if(n==0) break;
            int a[n] , b[n+1] ;
            for(i=0 ; i<=n ; i++)
                {   scanf("%d",&a[i]);
                    b[i] = i+1 ;
                }
            for(i=0 ; i<n ; i++)
                {
                    if(a[i] == b[i] )
                        {

                            break;
                        }
                }
            if(i==n) printf("non ambiguous\n") ;
            else printf("ambiguous\n") ;
        }
    // enter the code
    return(0);
}
