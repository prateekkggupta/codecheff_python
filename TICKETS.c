#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
        {
            int i , condition1=0  ;
            char a[51];
            for(i=0 ; i<51 ; i++)
                {
                    a[i]='\0';
                }
            i=0 ;
            scanf("%s",&a[0]);
            if(a[0]!=a[1])  condition1=1 ;
            printf("%s",&a);
            while((a[i]!='\0')&&(condition1==1))
                {
                    if(i%2==0)
                        {
                            if(a[i]!=a[0])
                            break;
                        }
                    if(i%2==1)
                        {
                            if(a[i]!=a[1])
                            break;
                        }
                        i = i+1 ;
                }

        if(a[i]=='\0')printf("yes\n");
        else printf("no\n");

            t = t-1 ;
        }
    // enter the code
    return(0);
}
