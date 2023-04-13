//1. WAP to display the prime numbers in a array of 10 integers.
#include <stdio.h>

int main()
{
    int a[10], i_2001, c_2001, j_2001;

    printf("Enter 10 integers: \n");

    // taking input and storing it in an array
    for (int i_2001 = 0; i_2001 < 10; ++i_2001)
    {
        scanf("%d", &a[i_2001]);
    }
    for (i_2001 = 0; i_2001 < 10; i_2001++)
    {
        c_2001 = 0;
        for (j_2001 = 1; j_2001 <= a[i_2001]; j_2001++)
        {
            if (a[i_2001] % j_2001 == 0)
                c_2001++;
        }
        if (c_2001 == 2)
            printf("%d is prime no \n", a[i_2001]);
    }
    return 0;
}