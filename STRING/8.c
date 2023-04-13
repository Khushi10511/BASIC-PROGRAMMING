// WAP in c to concatenate two string using user defined function.
#include <stdio.h>

int main()
{
    char string1[100], string2[100], string3[100];
    int i, j;
    printf("Enter the first string : ");
    gets(string1);
    printf("Enter the second string : ");
    gets(string2);

    // Insert the first string in the new string
    for (i = 0, j = 0; string1[i] != '\0'; i++, j++)
        string3[j] = string1[i];

    // Insert the second string in the new string
    for (i = 0; string2[i] != '\0'; i++, j++)
        string3[j] = string2[i];
    string3[j] = '\0';

    // Print the concatenated string
    printf("\nConcatenated string: %s", string3);

    return 0;
}