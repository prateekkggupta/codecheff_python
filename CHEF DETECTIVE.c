
#include<stdio.h>
int main()
{
    int n , i ;
    scanf("%d",&n);
    int a[n] , b[n+1] ;
    for(i=0 ; i<n+1 ; i++)
        {
            b[i]=0 ;
        }
    for(i=0 ; i<n ; i++)
        {
            scanf("%d",&a[i]);
            b[a[i]] = b[a[i]] + 1 ;
        }
    for(i=0 ; i<n+1 ; i++ )
        {
            if(b[i]==0) printf("%d ",i);
        }
    // enter the code
    return(0);
}
// b[n] 0 0 0 0 0 0
// a[n] 0 1 1 2 2 3
// b[n] 1 2 2 1 0 0
