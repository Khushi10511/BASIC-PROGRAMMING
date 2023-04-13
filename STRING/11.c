// WAP to extract a substring of a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int i, j, n, l, pos, b;
    printf(" Enter a string :");
    gets(s1);
    l = strlen(s1);
    printf(" l= %d \n", l);
    printf("Enter the position of the substring ");
    scanf("%d", &pos);
    printf("Enter no of characters to be extracted :");
    scanf("%d", &n);
    b = (pos - 1) + n;
    printf("%d \n", b);
    if (b > l)
        printf(" Cannot be extracted because required string is out of range ");
    else
    {
        for (i = pos - 1, j = 0; i < b; i++, j++)
            s2[j] = s1[i];
        s2[j] = '\0';
        printf("Extracted substring is : %s", s2);
    }
    return 0;
}