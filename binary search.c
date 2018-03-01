// binary search
#include<stdio.h>
int key;
int binsearch(int *a , int start , int end )
{
    if((end==start) && (a[end]!=key)) return 1000 ;
    int mid = (start + end)/2 ;
  //  printf("%d %d %d\t",a[start],a[mid],a[end]);
    if(a[mid]==key) return mid ;
    if(a[mid]>key) return binsearch(a , start , mid-1);
    else return binsearch(a,mid+1,end);
}
int main()
{
int n ,i=0;
scanf("%d %d",&n,&key);
int a[n];
for(i=0 ; i<n ; i++) a[i]=i+1;
for(key = 0 ; key <=n ; key++)printf("%d\n",binsearch(a,0,n-1));
return 0;
}

// 1 2 3 4       4
//
