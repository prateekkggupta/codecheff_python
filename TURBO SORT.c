// turbo sort
// n numbers , array is a[n] with n number all integers . non decreasing order is to be found
#include<stdio.h>
// making up a swap function ;
void swap1(double *x , double *y)
    {
        int p ;
        p = *x ;
        *x = *y ;
        *y = p ;
    }
int main()
{
    int n ;
    scanf("%d",&n);
    double i , j , a[n] ;
    for(i=0 ; i<n ; i++)
        {
            scanf("%lf",&a[i]);
        }
    i = 0 ;
    // sorting function starts here
    while(i<n )
        {
            for(j=0 ; j<n-1-i ; j++)
                {
                    if(a[j]>a[j+1])
                    {
                        swap1(&a[j],&a[j+1]) ;
                    }

                }

            i=i+1 ;
        }
    // printing the answer

    for(i=0 ; i<n ; i++)
        {
            printf("%lf\n",a[i]);
        }

    return(0);
}
