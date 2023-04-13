//Q.6) Write a program in c to input N integers into an array and find the largest and smallest element stored in that array.

#include <stdio.h>
int main()
{
    int i_2001, n_2001, max_2001, min_2001;
    printf("Enter the no of elements of array\n");
    scanf("%d", &n_2001);
    int a_2001[n_2001];
    printf("enter %d integer numbers:\n", n_2001);
    for (i_2001 = 0; i_2001 < n_2001; i_2001++)
    {
        scanf("%d", &a_2001[i_2001]);
    }
    max_2001 = min_2001 = a_2001[0];
    for (i_2001 = 0; i_2001 < n_2001; i_2001++)
    {

        if (min_2001 > a_2001[i_2001])
            min_2001 = a_2001[i_2001];

        if (max_2001 < a_2001[i_2001])
            max_2001 = a_2001[i_2001];
    }
    printf("The largest no in aaray is %d \n", max_2001);

    printf("The smallest no in aaray is %d ", min_2001);
    return 0;
}