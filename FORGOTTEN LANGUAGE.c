#include<string.h>
#include<stdio.h>
int main()
{
    int t , i ;
    scanf("%d",&t);
    for(i=0;i<t ; i++)
        {
            int n , k  , a1 ,l , a2 ,a3 ;
            scanf("%d %d",&n,&k);
            char a[n][6];


            for(a1=0 ; a1<n ; a1++)
                {
                    scanf("%s",&a[a1]);
                }
            char b[k][50][6];
                for(a1=0 ; a1<k ; a1++)
                    {

                        for(a2=0 ; a2<50 ; a2++)
                            {
                                for(a3=0 ; a3<6 ; a3++)
                                b[a1][a2][a3]='\0';

                            }
                    }
                for(a1=0 ; a1<k ; a1++)
                    {
                        scanf("%d",&l);
                        for(a2=0 ; a2<l ; a2++)
                            {
                                scanf("%s",&b[a1][a2]);

                            }
                    }
                for(a1=0 ; a1<n ; a1++)
                    {
                    for(a2=0 ; a2<k ; a2++)
                        {

                            for(a3=0 ; a3<50 ; a3++)
                                {
                                    if(strcmp(a[a1]==b[a2][a3]))
                                        {
                                            printf("YES ")
                                            break;
                                            break;
                                        }

                                }
                        }
                        if(a2==k) printf("NO ");
                    }
            printf("\n");
        }
    // enter the code
    return(0);
}
