#include<stdio.h>
int main()
struct post
    {
        int identifier ;
        int popular ;
        int popularity ;
        char text[100] ;
    };
void swap1( struct post *a , struct post *b )
    {
        struct post c ;
        *c = *b ;
        *b = *a ;
        *a = *b ;
        return() ;
    }
{
    int i , n , m , j ;
    scanf("%d %d",&n,&m);
    int popular[n] ;
    struct post posts[m];
    for(i=0 ; i<m ; i++)
        {
            posts[i].popular=0 ;
        }
    for(i=0 ; i<n ; i++)
        {
            scanf("%d",&popular[i]);
        }
    for(i=0 ; i<m ; i++)
        {
            scanf("%d %d %s",&posts[i].identifier,&posts[i].popularity,&posts[i].text);
            for(j=0 ; j<n ; j++)
                {
                    if(posts[i].identifier==popular[j])
                        {
                            posts[i].popular=1 ;
                        }
                }
        }
    for(i=0 ; i<m ; i++)
        {
            printf("%d %d %d %s\n",posts[i].identifier , posts[i].popular , posts[i].popularity , posts[i].text);
        }
    // enter the code
    return(0);
}
