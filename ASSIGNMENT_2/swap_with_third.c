#include <stdio.h>
int main()
{
int a,b,t;
printf("Enter two integers");
scanf("%d %d",&a,&b);
printf("Before swapping values are %d and %d",a,b);
t=a;
a=b;
b=t;
printf("\n After swapping values are %d and %d",a,b); 
return 0;
}
