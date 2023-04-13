#include <stdio.h>
int main()
{
    int n, i, r;
    long bin = 0;
    printf("enter a deciaml no \n");
    scanf("%d", &n);
    for (i = 1; n > 0; i = i * 10)
    {
        r = n % 2;
        n = n / 2;
        bin = bin + (r * i);
    }
    printf("The binary format is %lld", bin);
    return 0;
}