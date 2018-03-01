#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
        {
            t--;
            int n , count = 1 , i  , k ;
            scanf("%d",&n) ;
            float a[n] , uncle;
            for(i=0 ; i<n ; i++)
                {
                    scanf("%f",&a[i]);
                }
            scanf("%f",&k);
            uncle = a[k-1] ;
            for(i=0 ; i<n ; i++)
                {
                    if(a[i]<uncle) count++ ;
                }
            printf("%d\n",count);

        }
    // enter the code
    return(0);
}
