// simple merge sort 2 sorted arrays
#include<stdio.h>
#include<stdlib.h>
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
void merge(int *a , int *b , int na, int nb)
{
    int i=0 , j=0 ,k=0, temp[na+nb];
    for(k=0 ; k<na+nb ; k++)
    {
        if(i<na && i<nb)
        {
            if(a[i]<=b[j]) temp[k]=a[i],i++ ;
            else if(a[i]>b[j]) temp[k] = b[j],j++ ;
        }
        else if(i<na) temp[k]=a[i],i++ ;
        else temp[k] = b[j],j++ ;
    }
    for(i=0 ; i<na+nb ; i++) a[i]=temp[i];
}
int main()
{
    int na , nb ;
    scanf("%d %d",&na , &nb);
    int a[na],  b[nb];
    read(a,na);
    read(b,nb);
    merge(a,b,na,nb);
    print(a,na+nb);
    return 0 ;
}
