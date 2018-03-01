// the b;ock game
#include<stdio.h>
int reverse(int n )
{
    int sum = 0 ;
    while(n>0)
        {
            sum = sum*10 + n%10 ;
            n=n/10 ;
        }
    return(sum);
}
int main()
    {
        int t ;
        scanf("%d",&t);
        while(t>0)
            {
                int n ;
                scanf("%d",&n);

                if(n==reverse(n)) printf("wins\n");
                else printf("loses\n");
                t = t-1 ;
            }
        return(0);
    }
