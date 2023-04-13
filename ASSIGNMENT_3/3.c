#include<stdio.h>
void main()
{
int h,m,s,h1,m1,s1,h2,m2,s2;
printf("Enter first hours,minutes and seconds\n");
scanf("%d%d%d",&h1,&m1,&s1); 
printf("Enter second hours,minutes and seconds\n");
scanf("%d%d%d",&h2,&m2,&s2);
s=h=m=0;
s=s1+s2;
if(s>60)
 {
 m=s/60;
 s=s%60;
 }
m=m+m1+m2;
if(m>60)
 {
 h=m/60;
 m=m%60;
 }
h=h+h1+h2;
printf("First time = %d:%d:%d",h1,m1,s1);
printf("\nSecond time = %d:%d:%d",h2,m2,s2);
printf("\nAdded time =");
printf("%d:%d:%d\n",h,m,s);
}