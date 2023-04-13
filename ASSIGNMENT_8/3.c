// 3. WAP to display the elements of an array of 10 integers in descending order.
#include <stdio.h>
int main()
{
    int a_2001[10], i_2001, j_2001, temp_2001;
    printf("enter 10 integer numbers:");
    for (i_2001 = 0; i_2001 < 10; i_2001++)
    {
        scanf("%d", &a_2001[i_2001]);
    }
    for (i_2001 = 0; i_2001 < 10 - 1; i_2001++)
    {
        for (j_2001 = i_2001 + 1; j_2001 < 10; j_2001++)
        {
            if (a_2001[i_2001] < a_2001[j_2001])
            {
                temp_2001 = a_2001[i_2001]; //swapping a_2001[i_2001] with a_2001[j_2001]
                a_2001[i_2001] = a_2001[j_2001];
                a_2001[j_2001] = temp_2001;
            }
        }
    }
    printf("Elements are now in descending order: \n");
    for (i_2001 = 0; i_2001 < 10; i_2001++)
        printf("%d\n", a_2001[i_2001]);
    return 0;
}