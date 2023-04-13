#include<stdio.h>
int main ()
{
 int i=1,s=0,n;
 printf("Enter the value of n");
 scanf("%d",&n);
 while (i <= n)
 {
 s=s*2+1;
 printf ("%d ",s);
 i++;
 }
 return 0;
}