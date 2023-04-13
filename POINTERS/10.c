// Q3) WAP to print a string in reverse using a pointer.
#include <stdio.h>
#include <string.h>

int main()
{
    char st[50];
    printf(" Enter a string to be reversed: ");
    scanf("%s", st);
    int len, i = 0;
    char *start, *end, temp;
    while (st[i] != '\0')
        i++;
    len = i;
    start = st;
    end = st;

    for (i = 0; i < len - 1; i++)
        end++;

    for (i = 0; i < len / 2; i++)
    {
        temp = *end;
        *end = *start;
        *start = temp;
        start++;
        end--;
    }
    printf(" The reverse string is: %s", st);
}
