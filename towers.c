// tower of hanio complete
#include<stdio.h>
int x=0 ;
int tower(int n , char from , char to , char extra)
    {
        if(n==0)return 0;
        if(n==1)
        {
            x++;
            printf("%d from %c to %c\n",n , from , to );
            return 0 ;
        }
        tower(n-1 , from , extra , to );
        printf("%d from %c to %c\n",n,from,to,extra);
        x++;
        tower(n-1,extra,to,from);
    }
    int main()
        {
        int n ;
        scanf("%d",&n);
        tower(n,'a','b','c');
        return 0 ;
        }
