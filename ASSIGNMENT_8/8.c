// Q.8) Write a program in c_2001 to input N integers into an array and print all the elements that are three digits even integers.

#include <stdio.h>
int main()
{
    int i_2001, n_2001, c_2001, num_2001;
    printf("Enter the no of elements of array \n");
    scanf("%d", &n_2001);
    int a_2001[n_2001];
    printf("enter %d integer numbers:", n_2001);
    for (i_2001 = 0; i_2001 < n_2001; i_2001++)
    {
        scanf("%d", &a_2001[i_2001]);
    }
    for (i_2001 = 0; i_2001 < n_2001; i_2001++)
    {
        c_2001 = 0;
        num_2001 = a_2001[i_2001];
        while (num_2001 > 0)
        {
            num_2001 = num_2001 / 10;
            c_2001++;
        }
        if (c_2001 == 3 && a_2001[i_2001] % 2 == 0)
            printf("%d is even three digit no\n", a_2001[i_2001]);
    }
    return 0;
}