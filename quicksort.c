// quick sort
#include<stdio.h>
void swap(int *a , int *b)
    {
     int x , *c = &x ;
     *c = *a ;
     *a = *b ;
     *b = *c ;
    }
int partition(int *a , int n )
{
    int pivot  = a[0] , i = 0 , r = n-1 ;
    while((i<n )&& (i>=0))
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[r]>pivot) r-- ;
        if(i<r)
        {
            swap(&a[i] , &a[r]);
            i++ ;
            r-- ;
        }
        else   { swap(&a[0],&a[i-1]) ;return i-1 ;}
    }
}
void sort(int *a , int n )
{
    int pindex = partition(a , n);
    if(n>1)
    {
        sort(a , pindex);
        sort(a+pindex +1 , n- pindex - 1 ) ;
    }
}
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
int main()
{
    int *a , n ;
    scanf("%d",&n);
    a = (int*) malloc(sizeof(int)*n);
    read(a,n);
    print(a,n);
    sort(a5,n);
    print(a,n);
    return 0 ;
}
