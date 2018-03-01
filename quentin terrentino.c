#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
        {
            t = t-1 ;
            int n , i , result = 1 ;
            scanf("%d",&n);
            int a[n] , b[n] ;
            for(i=0 ; i<n ; i++)
                {
                    b[i]=0 ;
                }

            for(i=0 ; i<n ; i++)
                {
                    scanf("%d",&a[i]);
                    if((a[i]<1)||(a[i]>n))
                    {
                    result=0 ;
                    }
                    else
                    {
                    b[a[i]-1]++ ;
                    }
                }

            if(result==1)
                {
                    for(i=0 ; i<n ; i++)
                        {
                            if(b[i]!=1) result=0;
                        }
                }

            if(result==1)
                {
                    for(i=0 ; i<n ; i++)
                        {
                            if(a[i]!=(i+1)) break ;
                        }
                    if(i==n) result=0 ;

                }
            if(result==1) printf("yes\n");
            else printf("no\n");
        }
    return(0);
}
