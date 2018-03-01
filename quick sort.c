// quick sort
#include<stdio.h>
void swap(int *a , int *b)
    {
        int x ;
        int *c = &x ;
        *c = *a , *a = *b , *b = *c ;
    }
int part(int *a , int n )
{
      int pivot = a[0];
     int i=1 , r=n-1 , k=0 ;
     while(i <=n-1 && r>=0)
        {
            while(a[i]<=pivot) i++ , printf("%d",a[i]);
            while(a[r]>=pivot) r-- ,printf("%d",a[r]);
            if(i<r)
            {
                swap(&a[i],&a[r]);
                i++ , r-- ;
            }
            else
            {
                swap(&a[0],&a[i-1]);
                return i-1 ;
            }
        }
}
void qsort(int a[] , int n )
    {
        if(n==0) return ;
        else
        {
            int pindex = part(a , n );
            qsort(a,pindex);
            qsort(a+pindex,n - pindex-1);
        }
    }
void read(int *a  ,int n )
{
    int i ;
    for(i=0 ; i<n ; i++) scanf("%d",a+i);
}
void print(int *a , int n )
{
    int i ;
    for(i=0 ; i<n ; i++) printf("%d\t",*(a+i));
    printf("printf complete\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n] ;
    read(a,n);
    qsort(a,n);
    print(a,n);
    return 0 ;
}
