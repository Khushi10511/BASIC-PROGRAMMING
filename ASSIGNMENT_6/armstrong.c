#include <stdio.h>
int main ()
{
 int n, num, s = 0, r;
 printf ("Enter a no \n");
 scanf ("%d", &n);
 num = n;
 while (n > 0)
 {
 r = n % 10;
 s = s + (r * r * r);
 n = n / 10;
 }
 if (s == num)
 printf ("%d is an armstrong no ", num);
 else
 printf ("%d is not an armstrong no ", num);
 return 0;
}