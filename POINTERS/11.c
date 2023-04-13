// Q4) WAP to count distinct number of vowels and consonants present in a string using pointer.
#include <string.h>
#include<stdio.h>
int main()
{
    char s[100], *p;
    int vowels = 0, consonants = 0;
    printf("Enter  the string : ");
    gets(s);
    p = s;
    while (*p)
    {
        if ((*p >= 65 && *p <= 90) || (*p >= 97 && *p <= 122))
        {

            if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
                vowels++;
            else
                consonants++;
        }
        p++;
    }
    printf("No of vowels = %d\n", vowels);
    printf("No of consonants = %d\n", consonants);

    return 0;
}