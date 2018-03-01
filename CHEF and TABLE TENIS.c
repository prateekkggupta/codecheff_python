// chess and table tenis
#include<stdio.h>
int main()
{
    int t , i ;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
        {
            int chef=0 , other=0  , j ;
            char a[102];
            for(j=0; j<102 ; j++)
                {
                    a[j]='\0';
                }
            j=0 ;
            scanf("%s",&a[0]);
            char *p=&a[0];
            while(*p!='\0')
                {
                    if(*p=='0') other +=1 ;
                    else if (*p=='1') chef+=1 ;

                    p = p+1;
                }
            if(chef>other)printf("WIN\n");
            else printf("LOSE\n");

        }

    // enter the code
    return(0);
}
