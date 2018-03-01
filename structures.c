// explaining make_point
#include<stdio.h>
struct point
    {
        int x ;
        int y ;
    } ;
typedef struct point point ;
    point make(int h , int k)
        {
            point temp ;
            temp.x = h ;
            temp.y = k ;
            return temp ;
        }
    int main()
    {
        point a ;
        int x ;
        //x = add(4 , 6) ;
        a = make(4 , 6);
        printf("%d",a.x);
        return 0 ;
    }

int add(int a , int b)
    {
        int c ;
        c = a + b ;
        return c;
    }
