#include<stdio.h>

int check (char a[] ,char b[])
    {
        int i=0 ;
        while(a[i]!='\0')
            {
                int j=0;
                while(b[j]!='\0')
                    {
                        if(a[i]==b[j])return 1 ;
                        j++;
                    }
                i++ ;
            }
        return 0 ;
    }
int main()
{
    int n ;
    scanf("%d",&n);
    while(n>0)
        {
            char a[1000] , b[1000] ;
            scanf("%s %s",a,b);
            if(check(a,b))printf("Yes\n");
            else printf("No\n");
            n--;
        }
    // enter the code
    return(0);
}
