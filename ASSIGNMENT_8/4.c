// 4. WAP to display the second largest elements of an array of 10 integers.
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
                temp_2001 = a_2001[i_2001]; //swapping a_2001[i_2001 with a_2001[j_2001]
                a_2001[i_2001] = a_2001[j_2001];
                a_2001[j_2001] = temp_2001;
            }
        }
    }
    printf("The largest no is %d \n", a_2001[0]);
    printf("The second largest no is %d \n", a_2001[1]);
    return 0;
}