//play karprekar
#include <stdio.h>
#include <stdlib.h>



int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

/*
Returns the number obtained by sorting the digits of n in descending order.
sortdig (657) returns 765
sortdig (708) returns 870
*/
int sortdig (int n)// this code has not been tampered with
{
	int a[9] = {0};
	int pos=0,ans=0, i=0;
	while (n){a[pos++]= n%10;n/=10;}
	qsort(a,pos,sizeof(int),cmpfunc);
	for(i=0;i<pos;i++) {ans=ans*10+a[i];}
	return ans;
}
int reverse(int a) // code to reverse the digits of a number
    {
        int ans=0 ;
        while(a>0)
            {
                ans = ans *10 + a%10 ;
                a = a/10 ;
            }
        return (ans);
    }
int numdig(int x) // returns the numbers of digits in the argument
    {
        int num_of_digits=0 ;
        while(x>0)
            {
                num_of_digits++ ;
                x = x/10;
            }
            return(num_of_digits);
    }
int proper(int abc ) // brings the number in a proper format
    // writes 4 as 0004
    {
        if(numdig(abc)==1) printf("000%d",abc);
        else if(numdig(abc)==2) printf("00%d",abc);
        else if(numdig(abc)==3) printf("0%d",abc);
        else printf("%d",abc) ;
        return 0;
    }
int main()
{
    int input , x , y  ;
    scanf("%d",&input);
    while(input!=6174)
    {
        // converts less than 4 digit number to 4 digit number
        while(numdig(input)<4)
            {
                input = input*10 ;
            }
        // evaluate the numbers with decending and ascending digits
        x = sortdig(input) ;
        y = reverse(sortdig(input)) ;
        // print the result in required format
        proper(x);
        printf(" - ");
        proper(y) ;
        printf(" = ");
        proper(x-y);
        printf("\n");
        // update the value of input
        input = x-y ;
    }
	return 0;
}
