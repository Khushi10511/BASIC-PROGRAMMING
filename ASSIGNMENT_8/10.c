// Q.10) Write a program in c to search a_2001 specific element in the given array, if it is found then display its position otherwise display a message as Not Found.

#include <stdio.h>
int main()
{
    int i_2001, n_2001, flag_2001 = 0, c_2001;
    printf("Enter the no of elements of array \n");
    scanf("%d", & n_2001 );
    int a_2001[ n_2001 ];
    printf("enter %d integer numbers:", n_2001);
    for (i_2001 = 0; i_2001 < n_2001; i_2001++)
    {
        scanf("%d", &a_2001[i_2001]);
    }
    printf("enter a no to be found :");
    scanf("%d", &c_2001);
    for (i_2001 = 0; i_2001 < n_2001; i_2001++)
    {
        if (c_2001 == a_2001[i_2001])
        {

            printf(" no is found at %d position", i_2001 + 1);
            flag_2001 = 1;
            break;
        }
    }
    if (flag_2001 == 0)
        printf(" %d not found in array", c_2001);
    return 0;
}