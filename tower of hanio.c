// tower of hanoi problem
#include<stdio.h>
int tower(int n)
{
if(n==0) return 0 ;
if(n==1) return 1 ;
else return((2*tower(n)+1));
}
int main()
    {
    int n ;
    scanf("%d",&n);
    printf("%d\n",tower(n));
    }




//
2   0   0
1   1   0
