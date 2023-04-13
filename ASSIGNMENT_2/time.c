#include <stdio.h>
int main()
{
int sec, h, m, s,d;
printf("Input seconds: ");
scanf("%d", &sec);
h = (sec/3600);
d=sec-(h*3600);
m = d/60;
d= (sec -(3600*h)-(m*60));
s =d;
printf("converted time is %d hours %d minutes and %d seconds ",h,m,s);
return 0;
}