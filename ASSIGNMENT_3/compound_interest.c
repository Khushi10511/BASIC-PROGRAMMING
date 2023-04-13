#include <stdio.h>
int main()
{
 int p,r,t,n;
 float cp;
 printf("ENTER TEH PRICIPAL,RATE,TIME,NO OF TIMES CP IS CALCULATED RESPECTIVELY");
 scanf("%d%d%d%d",&p,&r,&t,&n);
 cp=p*(1+r/n)^(n*t);
 printf("COMPOUND INTEREST =%f",cp);
 return 0;
}