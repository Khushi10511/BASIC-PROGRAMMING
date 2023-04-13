// Write a program to replace a character of a string at a particular place with another user defined character
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], oc, nc;
    int i, flag = 0;
    printf("\nEnter a string:");
    gets(s);
    printf("\nEnter a character of string and new character :");
    scanf("%c %c", &oc, &nc);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == oc)
        {
            s[i] = nc;
            flag = 1;
        }
    }
    if (flag == 1)
        printf("\nAfter the replacement by new character, the string is %s", s);
    else
        printf("\nThe given string does not contain the character %c", oc);
    return 0;
}