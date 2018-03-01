#include<stdio.h>
int f(int n)
{
    static g ;
    g++ ;
    printf("g = %d\n",g);
// base cases
    if(n==0) return 1 ;
    if(n==1) return 1 ;
// base cases end
// recursive call
    return f(n-1)+f(n-2) ;
}
int main()
{
int  a ,i ;
 scanf("%d",&a);
    printf("%d",sizeof(a));
// for(i=0 ; i<a ; i++)
// printf("f(%d) = %d\n",i,f(i));
 return 0 ;
}
