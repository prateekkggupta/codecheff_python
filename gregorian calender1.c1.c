// gregorian calender
#include<stdio.h>
main()
{
    int t ;
    scanf("%d",&t)
    while(t>0)
        {   int n , x ;
            scanf("%d",&n) ;
            t = t - 1 ;
            x = ((n-1) + (n-1)/4)%7 ;
            if(x==0) printf("monday\n");
            else if (x==1) printf("tuesday\n");
            else if (x==2) printf("wednesday\n");
            else if (x==3) printf("thursday\n");
            else if (x==4) printf("friday\n");
            else if (x==5) printf("saturday\n");
            else if (x==6) printf("sunday\n");
        }

}
