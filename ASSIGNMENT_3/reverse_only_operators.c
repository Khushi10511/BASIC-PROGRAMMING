#include <stdio.h>
int main()
{
 int n,rev=0,r=0;
 printf("Enter a no:");
 scanf("%d",&n);
 r=n%10;
 rev=rev*10+r;
 n=n/10;
 r=n%10;
 rev=rev*10+r;
 n=n/10;
 r=n%10;
 rev=rev*10+r;
 
 printf("Reveresed no:%d",rev);
return 0;
}
