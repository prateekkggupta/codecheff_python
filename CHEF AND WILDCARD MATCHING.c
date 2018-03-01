//chef and wildcard matching
#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
        {
            t = t-1 ;
            int j ;
            char a[11]={} , b[11]={} ;
            scanf("%s",&a[0]);
            scanf("%s",&b[0]);
            for(j=0 ; j<10 ; j++)
                {
                    if((a[j]==b[j])||(a=='?')||(b=='?'))
                    else
                    {
                        printf("No\n");
                        break ;
                    }
                }
            if(j==10)printf("Yes\n");
        }
    return(0);
}

