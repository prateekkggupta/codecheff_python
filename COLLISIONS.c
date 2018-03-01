#include<stdio.h>
int main()
{
    int t , x ;
    scanf("%d",&t);

    for(x=0 ; x<t ; x++)
        {
            int boys , girls ,i ,j  , collisions = 0 ;
            scanf("%d %d",&boys,&girls);

            char a[girls + 1] ;
            int final[girls];
            for(i=0 ; i<girls ; i++)
                {
                    final[i] = 0 ;

                }
            for(i=0 ; i<boys ; i++)
                {
                    scanf("%s",&a);

                    for(j=0 ; j<girls ; j++)
                    {
                        if (a[j]=='1') final[j] = final[j] + 1 ;
                    }
                }
            for(i=0 ; i<girls ; i++)
                {

                    collisions = collisions + final[i]*(final[i]-1)/2 ;
                }
            printf("%d\n",collisions);

        }
    // enter the code
    return(0);
}
