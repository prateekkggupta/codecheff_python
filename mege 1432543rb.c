// merge sort
#include<stdio.h>
#include<stdlib.h>
void read(int *a  ,int n )
{
    int i ;
    for(i=0 ; i<n ; i++) scanf("%d",&a[i]);
}
void print(int *a , int n )
{
    int i ;
    for(i=0 ; i<n ; i++) printf("%d\n",*(a+i));
}

merge( int a[] , int start , int n)
{
    int half = n/2 ;
    int i = start , j = half +start ;
    int limit_i = start + half , limit_j = start + n ;
    int temp[n] ;
    int k = 0 ;
    for(k=0 ; k<n ; k++)
    {
        while(i<limit_i && j< limit_j)
        {
            while(a[i]<=a[j])
                {
                    temp[k] = a[i] ;
                    i++ ;
                    k++ ;
                }
            while(a[j]<a[i])
                {
                    temp[k] = a[j] ;
                    j++ ; k++ ;
                }
        }
        if(i== limit_i) while(j<limit_j)
            {
                temp[k] = a[j] ;
                j++ ;
                k++ ;
            }
        else if(j == limit_j) while(i<limit_i)
            {
                temp[k] = a[i];
                i++ ;
                k++ ;
            }
    }
    for(k=0 ; k<n ; k++) a[k+start] = temp[k];
}
void sort(int a[] , int start , int n ) // n is the number if integers in the array (part of the array to be sorted)
{
    if (n==0) return ;
    int half = n/2 ;
    sort(a , start , half);
    sort(a , start + half , n - half);
    merge(a , start , n);
}
int main()
{
    int *a , n ;
    scanf("%d",&n);
    a = (int*) malloc(sizeof(int)*n);
    read(a,n);
    sort(a,0,n);
    print(a,n);
    return 0 ;
}
