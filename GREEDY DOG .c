// greedy dog
#include<stdio.h>
int main()
	{
		int t ;
		scanf("%d",&t);
		while(t>0)
			{
				t = t-1 ;
				int i , n , k , limit , max = 0 ,coins ;
				scanf("%d %d",&n,&k);
				limit = k ;
				for(i=1 ; i <= limit ; i++ )
					{
						coins = n%i;
						if(coins > max) max = coins ;
					}

				printf("%d\n",max);
			}

	    return(0);
	}
