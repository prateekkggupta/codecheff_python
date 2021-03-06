// select sort
#include<stdio.h>
#include<stdlib.h>
void swap(int *a , int *b)
{
    int x ;
    int *c=&x ;
    *c = *a ;
    *a = *b ;
    *b = *c ;
}
int max(int *a , int i , int n)
{
    int i_max=i ;
    for(i ; i<n ; i++)
    {
        if(a[i]>=a[i_max]) i_max = i ;
    }
    return i_max;
}
void sort(int *a ,int start, int n) // iterative solution is better than recursive
{
    if(start==n) return ;
    swap(&a[start],&a[max(a , start , n)]);
    sort(a , start+1 , n);
}
void read(int *a , int n )
{
    int i ;
    for(i=0 ; i<n ; i++) scanf("%d",&a[i]);
}
void print(int *a , int  n)
{
    int i ;
    for(i=0 ; i<n ; i++) printf("%d  ",a[i]);
}
int main()
{
    int n ;
    scanf("%d",&n);
    int *a ;
    a = (int*) malloc(n*sizeof(int));
    read(a,n);
    sort(a,0,n);
    print(a,n);
    return 0 ;
}
