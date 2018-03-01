// Sieve of Eratosthenes
#include<stdio.h>
int prime(int a[] , int number , int size)
    {
        int i=0 ;
        for(i=number ; i<size ; i = i+number)
        {
            if(i!=number) a[i]=0 ;
        }
    }
int main()
    {
    int n , i=0 ;
    n++;
    scanf("%d",&n);
    int a[n] ;
    for(i=0 ; i<n ; i++) a[i]=i ;
    for( i=2 ; i<n ;i++ )
    {
        if(a[i]!=0) prime(a , i , n);
    }
    for(i=0 ; i<n ; i++)if(a[i]!=0) printf("%d\t",a[i]);

    return 0 ;
    }
