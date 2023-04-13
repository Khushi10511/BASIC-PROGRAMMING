#include<stdio.h>
int main ()
{
 int n,num;
 int fact=1;
 printf("ENTER A NO.");
 scanf("%d",&n);
 num=n;
 if(n<=0)
 printf("WRONG INPUT");
 else
 {
 while(n>1)
 {
 fact=fact*n;
 n--;
 }
 printf("FACTORIAL:%d",fact);
 }
 return 0;
}