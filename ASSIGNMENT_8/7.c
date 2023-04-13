// Q.7) Write a program in c to find the average of all the odd elements and the average of all the even elements in an array.
#include <stdio.h>
int main()
{
    int i_2001, n_2001, se_2001, so_2001, e_2001 = 0, o_2001 = 0;
    float ae_2001, ao_2001;
    printf("Enter the no of elements of array \n");
    scanf("%d", &n_2001);
    int a_2001[n_2001 ];
    printf("enter %d integer numbers:", n_2001);
    for (i_2001 = 0; i_2001 < n_2001; i_2001++)
    {
        scanf("%d", &a_2001[i_2001]);
    }
    for (i_2001 = 0; i_2001 < n_2001; i_2001++)
    {
        if (a_2001[i_2001] % 2 == 0)
        {
            printf("%d is even \n", a_2001[i_2001]);

            se_2001 = se_2001 + a_2001[i_2001];
            e_2001++;
        }
        else
        {
            printf("%d is odd \n", a_2001[i_2001]);
            so_2001 = so_2001 + a_2001[i_2001];
            o_2001++;
        }
    }
    ae_2001 = (float)se_2001 / e_2001;
    ao_2001 = (float)so_2001 / o_2001;
    printf("Average of even elements is %f \n", ae_2001);
    printf("Average of odd elements is %f \n", ao_2001);
    return 0;
}
