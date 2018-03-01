#include<stdio.h>
typedef struct temp{
    int info ; struct temp *link ;
} node;
int main()
{
    int n ,i ;
    scanf("%d",&n);
    node a[n];
    for(i=0 ; i<n-1 ; i++) a[i].link = &a[i+1];
    a[n-1]= NULL;
    return 0 ;

}
