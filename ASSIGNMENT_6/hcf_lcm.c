#include <stdio.h>
int main()
{
    int n1, n2, max, min, i, hcf;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf(" LCM of %d and %d = %d \n", n1, n2, max);
            break;
        }
        ++max;
    }
    min = (n1 < n2) ? n1 : n2;
    for (i = 1; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }
    printf(" HCF of %d and %d = %d\n", n1, n2, hcf);
    return 0;
}
