// to find max of a function
#include<stdio.h>
#include<stdlib.h>
void read(int *a , int n )
{
    int i ;
    for(i=0 ; i<n ; i++) scanf("%d",a+i);
}
int max(int *a ,int start , int n , int index)
{
    if(start == n ) return index ;
    if(a[start]>=a[index]) index = start;
    return max(a+1 ,start+1, n , index );
}
int main()
{
    int n ;
    scanf("%d",&n);
    int *a ;
    a = (int*) malloc(n*sizeof(int));
    read(a,n);
    printf("max index of the array is %d ",max(a,0,n,0));
    return 0 ;
}
