// length of string
#include <stdio.h>
#include <string.h>
void main()
{
    char name[20];
    int length = 0;
    printf("Enter your name :");
    gets(name);
    printf(" \n Name is %s", name);
    for ( int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
     printf(" \n The length of %s is %d", name, length);
    
}
/* length with function
#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    printf("Enter your name :");
    gets(name);
    printf(" \n Name is %s",name);
    printf("\n Length of string is %u ",strlen(name));
}