#include<stdio.h>
int main()
{
 int n,num,rev=0,r;
 printf("Enter a no.");
 scanf("%d",&n);
 num=n;
 r=n%10;
 rev=rev*10+r;
 n=n/10;
 r=n%10;
 rev=rev*10+r;
 n=n/10;
 r=n%10;
 rev=rev*10+r;
 if (num == rev)
 printf("%d is a palindrome no",num);
 else
 printf("%d is not a palindrome no",num);
 return 0;
}