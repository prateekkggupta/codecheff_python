//merge 2 arrays
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
void merge(int *final ,int *a ,int na , int *b , int nb)
    {
        int i;
        for(i=0 ; i<na ; i++) final[i]=a[i];
        for(i=0 ; i<nb ; i++) final[i+na]=b[i];
    }
int main()
{
    int *a , na ,*b , nb , *final;
    scanf("%d",&na);
    a = (int*) malloc(sizeof(int)*na);
    scanf("%d",&nb);
    b = (int*) malloc(sizeof(int)*nb);
    final = (int*) malloc(sizeof(int)*(nb+na));
    read(a,na);
    read(b,nb);
    merge(a,a,na,b,nb);
    print(a,na+nb);
    return 0 ;
}
