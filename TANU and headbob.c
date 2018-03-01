#include<stdio.h>
int main()
{
    int t , i ;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
        {
            int n , j=0 ;
            scanf("%d",&n);
            char a[n];
            scanf("%s",&a[0]);

            for(j=0 ; j<n ; j++)
                {
                    if(a[j]=='Y')
                        {
                            printf("NOT INDIAN\n");
                            j = n+1;
                        }
                    else if(a[j]=='I')
                        {
                            printf("INDIAN\n");
                            break;
                        }

                }
            if(j==n) printf("NOT SURE\n");
        }
    // enter the code
    return(0);
}
