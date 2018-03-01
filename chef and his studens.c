#include<string.h>
#include<stdio.h>
int main()
{
    int t , i ;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
        {
            int j = 0 , count = 0 ;
            char a[100000] ;
            while(t=1)
                {
                      scanf("%c",a[j]);
                      if((a[j]=='>')&&(a[j-1]=='<')&&(j!=0)) count = count + 1 ;
                      if((a[j]!='<')&&(a[j]!='>')&&(a[j]!='*')) break ;
                      j = j + 1 ;
                }
            printf("%d\n",count);
        }
    // enter the code
    return(0);
}
