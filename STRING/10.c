// Q2) Write a program to count the number of characters, alphabets, tabs, newlines, words, vowels, consonants present  in a string.
#include <stdio.h>
int main()
{
    char s[20];
    int vowels = 0, letters = 0, word = 0, digits = 0, spaces = 0;
    int i;
    printf("\nEnter a string :");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            ++vowels;
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            ++letters;
        else if (s[i] >= '0' && s[i] <= '9')
            ++digits;
        else if (s[i] == ' ')
            ++spaces;
        if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0')
            word++;
    }
    printf("\n Number of Words : %d", word + 1);
    printf("\n Number of Digits: %d", digits);
    printf("\n Number of Alphabets: %d", letters + vowels);
    printf("\n Number of Consonants: %d", letters);
    printf("\n Number of Vowels: %d", vowels);
    printf("\n Number of Tabs: %d", spaces);
    printf("\n Number of Characters: %d", i);
}
