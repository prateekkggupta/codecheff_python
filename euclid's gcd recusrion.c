// euclid's GCD lemma
#include<stdio.h>
int gcd(int a , int b)
    {
        if(a%b==0)return b ;
        else return(gcd(b,a%b))
    }
int main()
    {
        int a , b ;
        printf("enter a , b such that a>=b")
        printf("%d",gcd(a,b));
    }