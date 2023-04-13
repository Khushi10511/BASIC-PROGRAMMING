#include <stdio.h>
#include <math.h>
int main()
{
    long n;
    int i, dec = 0, r;
    printf("enter a no in binary format \n");
    scanf("%lld", &n);
    for (i = 0; n > 0; i++)
    {
        r = n % 10;
        n = n / 10;
        dec = dec + (r * pow(2, i));
    }
    printf("The decimal format is %d  ", dec);
    return 0;
}