// pointer to array
#include <stdio.h>
//sum of all elements in an array using pointer
int main()
{
   int *p,sum=0,i=0;
   int x[5]={5,9,6,3,7};
   p=x;
   printf("Elements Value Address \n\n");
   while(i<5)
   {
       printf("x[%d]       %d    %p\n",i,*p,p);
       sum=sum+*p;
       i++;
       p++;
   }
   printf(" Sum=%d",sum);
}
