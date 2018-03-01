#include<stdio.h>
void read(int a[] , int n)
{
    int i ;
    for(i=0 ; i<n ; i++) scanf("%d",&a[i]);
}
void print(int a[],int n)
{
    int i ;
    for(i=0 ; i<n ; i++) printf("%d\t",a[i]);
   // printf("print complete");
}
void swap(int *a , int *b)
{
    int x=0 ;
    int *c = &x ;
    *c = *a ;
    *a = *b ;
    *b = *c ;
}
int part(int *a , int n)
{

    printf("enter quicksort");
    int i=0 , r = n-1 , pivot = a[0] ;
    while(i<=n-1 && r>=0 )
    {
        while(a[i]<=pivot)
            {
                printf("i=%d %d\n",i , a[i]);
                i++ ;
            }

        while(a[r]>=pivot)
            {
                printf("r=%d %d\n",r,a[r]);
                r-- ;
            }
        if(i!=r)
            {
                printf("condition");
                swap(&a[i],&a[r]);
                i++;
                r--;
            }
        else
        {
            swap(&a[0],&a[i-1]);
            return i-1 ;
        }
    }
}
void qsort(int *a , int n)
{
    if(n==0) return ;
    else
    {
        int pindex = part(a,n);
        qsort(a,pindex);
        qsort(a+pindex+1,n-pindex-1);
    }
}
int main()
{
    int n ;
    scanf("%d",&n);
    int a[n] ;
    read(a,n);
    //qsort(a,n);
    int x = part(a,n);
    print(a,n);
    return 0 ;
}
