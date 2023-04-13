// Q1) WAP to check whether a string entered through keyboard is palindrome or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char string1[20], string2[20];
    int i, length, j;
    printf("Enter String : ");
    gets(string1);
    length = strlen(string1) - 1;
    for (i = length, j = 0; i >= 0; i--, j++)
        string2[j]=string1[i];
    if (strcmp(string1, string2) == 0)
        printf(" %s is a palindrome word", string2);
    else
        printf(" %s is not a palindrome word", string2);
}