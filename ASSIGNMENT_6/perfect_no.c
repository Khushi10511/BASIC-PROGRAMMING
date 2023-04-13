#include <stdio.h>
int main ()
{
 int n, i, sum = 0;
 printf ("\nEnter Any Number=>");
 scanf ("%d", &n);
 for (i = 1; i < n; i++)
 {
 if (n % i == 0)
sum = sum + i;
 }
 if (n == sum)
 printf ("\n%d is a perfect number", n);
 else
 printf ("\n%d is not a perfect number", n);
 return 0;
}
