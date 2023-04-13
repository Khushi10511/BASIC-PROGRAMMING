//5. WAP to count the palindrome numbers  of an array of 10 integers.

#include <stdio.h>
int main()
{
    int a_2001[10], i_2001, r_2001, num_2001, rev_2001, c_2001 = 0;
    printf("enter 10 integer numbers:");
    for (i_2001 = 0; i_2001 < 10; i_2001++)
    {
        scanf("%d", &a_2001[i_2001]);
    }
    for (i_2001 = 0; i_2001 < 10; i_2001++)
    {
        num_2001 = a_2001[i_2001];
        rev_2001 = 0;
        while (a_2001[i_2001] > 0)
        {
            r_2001 = a_2001[i_2001] % 10;
            rev_2001 = rev_2001 * 10 + r_2001;
            a_2001[i_2001] = a_2001[i_2001] / 10;
        }
        if (rev_2001 == num_2001)
        {
            printf(" %d is a palindrome no \n", num_2001);
            c_2001++;
        }
    }
    printf("Total no of palindrome no's is %d", c_2001);
    return 0;
}
