#include<stdio.h>
void main()
{
 char n;
 printf("Enter any character");
 scanf("%c",&n);
 if((n>='A' && n<='Z') || (n>='a' && n<='z'))
 printf(" %c is an alphabet",n);
 else
 {
 if ( n>='0' && n<='9')
 printf(" %c is a digit",n);
 else
 printf(" %c is a special character ",n);
 
 }
}