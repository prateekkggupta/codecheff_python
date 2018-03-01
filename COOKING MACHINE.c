#include<stdio.h>
int check(int n)
    {
        int x =  n ;
        while(x!=1)
            {
                if(x%2!=0) return(1);
                else x/=2;
            }
        if(x==1)return(0);
    }
int check0(int n , int dest , int moves)
    {
                    if(n<dest)
                        {
                            while(n!=dest)
                                {
                                    n = n*2 ;
                                    moves = moves + 1 ;
                                }
                            return(moves);
                        }
                    else if(n==dest) return(moves);
                    else if(n>dest)
                        {
                            while(n!=dest)
                                {
                                    n = n/2 ;
                                    moves = moves + 1 ;
                                }
                            return(moves);
                        }
    }
int main()
{
    int t , i  ;
    scanf("%d",&t);
    printf("%d\n",t);
    for(i=0 ; i<t ; i++ )
        {
            int n , dest , moves=0;
            scanf("%d %d",&n,&dest);
            printf("%d %d\n",n,dest);
            if(check(n)==0)
                {
                    check0(n,dest,moves);
                    printf("%d",check0(n,dest,moves));
                }
            else
                {
                    while(check(n!=0))
                        {
                            if(n%2==1)
                                {
                                    n= (n-1)/2 ;
                                    moves = moves + 1 ;
                                }
                            else
                                {
                                    n = n/2 ;
                                    moves = moves + 1 ;
                                }


                        }

                    printf("%d\n",check0(n , dest , moves ));
                }
        }
    // enter the code
    return(0);
}
