// selection sort
#include<stdio.h>
#include<stdlib.h>

void read(int *a  ,int n )
{
    int i ;
    for(i=0 ; i<n ; i++) a[i]=i;
}
void print(int *a , int n )
{
    int i ;
    for(i=0 ; i<n ; i++) printf("%d\t",*(a+i));
    printf("printf complete\n");
}
void swap(int *a , int *b)
{
    int c = 0 ;
    int *x = &c ;
    *x = *a ;
    *a = *b ;
    *b = *x ;
}
int max(int *a , int x , int n )
    {
     int marker=x , i ;
    for(i=x ; i<n ; i++) if(a[marker]<a[i]) marker = i ;
        return marker ;
    }
void selection_sort(int *a , int i , int  n)
    {
        if(i==n) return ;
        swap(a+i , a+max(a,i,n)); // addresses of the terms to be replaced
        selection_sort(a,i+1,n);
    }

int main()
{
    int *a , n ;
    scanf("%d",&n);
    a = (int*) malloc(sizeof(int)*n);
    read(a,n);
    print(a,n);
    selection_sort(a,0,n);
    print(a,n);
    return 0 ;
}
