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
void merge(int *a , int start , int n)
{
    int temp[n] , half = n/2 ;
    int lim_i = start + half , lim_j= start + n ,i=start , j = start + half , k ;
    for(k=0 ; k<n ; k++)
    {
        if((i<lim_i)&&(j<lim_j))
        {
            if(a[i]<=a[j])
            {
                temp[k] = a[i] ; i++ ;
            }
            else
            {
                temp[k] = a[j] ; j++ ;
            }
        }
        else if(j==lim_j)
        {
            temp[k] = a[i] ;
            i++ ;
        }
        else if(i == lim_i)
        {
            temp[k] = a[j];
            j++ ;
        }
    }
    for(k=0 ; k<n ; k++) a[start+k] = temp[k];

}
void sort(int *a , int start , int n)
{
    if(n<=1) return ;
    sort(a , start , n/2);
    sort(a , start+ n/2 , n - n/2);
    merge(a,start,n);
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
