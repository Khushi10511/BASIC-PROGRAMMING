// Write a program to reverse a string with/without using library function
#include <stdio.h>
#include <string.h>
int main()
{
    char string[20], temp;
    int i, length, j;
    printf("Enter String : ");
    gets(string);
    length = strlen(string) - 1;
    for (i = length, j = 0; i >= length / 2; i--, j++)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
    printf("\nReverse string :%s", string);
}

/* #include <stdio.h>  
 #include <string.h>  
int main()  
{  
    char str[40]; // declare the size of character string  
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%s", str);  
      
    // use strrev() function to reverse a string  
    printf (" \n After the reverse of a string: %s ", strrev(str));  
    return 0;  
}  */