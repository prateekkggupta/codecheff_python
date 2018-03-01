// CHN08
#include<stdio.h>
int a , b;
int f(int n)
{
    if(n==1) return a ;
    if(n==2) return b ;
    return f(n-1)-f(n-2);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t){
    int n ;
    scanf("%d %d %d",&a,&b,&n);
    int answer = f(n)%1000000007;
    if(answer<0) answer = answer + 1000000007;
    printf("%d\n",answer);

    t--;
    }
    return 0 ;
}
