// Write a program to count the no of vowel present in string 
#include <stdio.h>
#include <string.h>
void main()
{
    char string[20];
    int i, vow = 0;

    printf("\nEnter the string :");
    gets( string );
    

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')

        {
            vow++;
           //printf("%s", string[i]);
            
        }
    }
    printf("\nTHERE ARE %d VOWELS IN THE STRING", vow);
}


