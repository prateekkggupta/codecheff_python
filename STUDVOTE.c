#include<stdio.h>
int main()
{
    int t , k ;
    scanf("%d" , &t);
    for(k=1 ; k<=t ; k++)
        {
            int i , n , k , s=0;
            scanf("%d %d",&n ,&k);
            int a[n] , final[n] ;
            for(i=0 ; i<n ; i++)
                {
                    final[i] = 0 ;
                }
            for(i=0 ; i<n; i++)
                {
                    scanf("%d",&a[i]) ;
                    final[a[i]-1 ] = final[a[i]-1] + 1 ;
                }
            for(i=0 ; i<n ; i++)
                {
                    if((a[i]!=i+1)&&(final[i]>=k)) s = s + 1 ;
                }
            printf("%d\n",s);
        }
    // enter the code
    return(0);
}
