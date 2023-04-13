// Q.9) Write a program in c to find out the largest even integer stored in the array of n integers. N is the user input.
#include <stdio.h>
int main()
{
    int i_2001, n, max_2001;
    printf("Enter the no of elements of array \n");
    scanf("%d", &n);
    int a_2001[n];
    printf("enter %d integer numbers:", n);
    for (i_2001 = 0; i_2001 < n; i_2001++)
    {
        scanf("%d", &a_2001[i_2001]);
    }
    max_2001 = a_2001[0];
    for (i_2001 = 0; i_2001 < n; i_2001++)
    {
        if (max_2001 < a_2001[i_2001] && a_2001[i_2001] % 2 == 0)
            max_2001 = a_2001[i_2001];
    }
    printf("Largest even integer in array is : %d", max_2001);
    return 0;
}