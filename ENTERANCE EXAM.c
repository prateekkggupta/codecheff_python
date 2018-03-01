#include<stdio.h>
void swap(int *a , int *b)
    {
        int x ;
        x = *a ;
        *a = *b ;
        *b = x ;
    }
int main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
        {
            t = t - 1 ;
            int enrolees , seats  , exams , max_marks , j , k , marks_reqd ;
            scanf("%d %d %d %d",&enrolees , &seats , &exams , &max_marks ) ;
            int a[enrolees][exams] , final[enrolees] ;
            for(j=0 ; j<enrolees-1 ; j++)
                {   final[j] = 0 ;
                    for(k=0 ; k<exams ; k++ )
                        {
                            scanf("%d",&a[j][k]);
                            final[j] = final[j] + a[j][k];
                        }

                }
            final[enrolees-1]= 0 ;
            a[enrolees-1][exams-1]=0 ;
            for(j=0 ; j<exams-1 ;j++)
                {
                    scanf("%d",&a[enrolees-1][j]);
                    final[enrolees-1] = final[enrolees-1] + a[enrolees-1][j];

                }

            // now to start sorting final marks
            for(j=0 ; j<enrolees-2 ; j++)
                {
                    for(k=enrolees - 2 ; k>=j+1  ; k--)
                        {
                            if(final[k]>final[k-1]) swap(&final[k],&final[k-1]);
                        }
                }

            marks_reqd = - final[enrolees-1] + final[seats-1] + 1 ;
            if (seats==enrolees)printf("0");
            else if(marks_reqd<=0) printf("%d\n",0);
            else if(marks_reqd>max_marks) printf("Impossible\n");
            else printf("%d\n",marks_reqd);
        }
    return(0);
}
