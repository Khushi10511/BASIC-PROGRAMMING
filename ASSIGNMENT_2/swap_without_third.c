#include <stdio.h>
void main()
{
 int a,b;
 printf("Enter two no's \n");
 scanf("%d %d",&a,&b);
 printf("numbers before swapping are %d and %d \n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("numbers after swapping are %d and %d",a,b);
 
}
