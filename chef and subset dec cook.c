#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
        {
         int a[4] , result  = 0 , i ,  j , k  ;
            for(i=0 ; i<4 ; i++)
            {
                scanf("%d",&a[i]);
                if(a[i]==0) result=1 ;
            }
            // for subsets of 2 terms
            for(i=0 ; i<4 ; i++)
                {
                    for(j=i+1 ; j<4 ; j++)
                        {

                            if(a[i]+a[j]==0)
                            {
                                i=10;
                                j=10;
                                result=1 ;
                            }
                        }
                }
            for(i=0 ; i<4 ; i++ )
                {
                    for(j=i+1 ; j<4 ; j++)
                        for(k=j+1 ; k<4 ; k++ )
                            {
                                if(a[i]+a[j]+a[k]==0)
                                    {
                                        i=10;
                                        j=10;
                                        k=10;
                                        result=1;
                                    }
                            }
                }
            if(a[1]+a[2]+a[3]+a[0]==0) result=1;
            if(result==1) printf("Yes\n");
            else printf("No\n");

            t = t-1 ;
        }
    // enter the code
    return(0);
}
