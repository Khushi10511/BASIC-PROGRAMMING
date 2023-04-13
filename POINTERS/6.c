// call by value 
#include <stdio.h>
void swap();
int main()
{
    int a=10,b=20;
    printf("before swap \t %d \t %d \n",a,b);
    swap(a,b);

    return 0;
}
 void swap(int x,int y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
  printf("after swap \t %d \t %d",x,y);
}
