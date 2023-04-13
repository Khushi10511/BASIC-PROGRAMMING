#include <stdio.h>
void main()
{
 int x,y;
 printf("ENTER TWO VARIABLES");
 scanf("%d%d",&x,&y);
 printf("Before Swapping values of x and y are %d %d \n", x,y);
 (x ^= y), (y ^= x), (x ^= y);
 printf("After Swapping values of x and y are %d %d", x,y);
 
}
