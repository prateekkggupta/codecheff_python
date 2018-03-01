// search function return yes if the  key is present
#include<stdio.h>
#include<stdio.h>
void read(int *a  ,int n )
{
    int i ;
    for(i=0 ; i<n ; i++) scanf("%d",a+i);
}
int search(int *a , int n , int key )
{
    int i ;
    for(i=0 ; i<n ; i++) if(a[i]==key)return i;
    return 0 ;
}
int main()
{
    int n , *a ,key;
    scanf("%d",&n);
    a = (int*) malloc(n*sizeof(int));
    read(a,n);
    scanf("%d",&key);
    if(search(a,n,key)) printf("key found");
    else printf("key not found");
    return 0 ;
}
