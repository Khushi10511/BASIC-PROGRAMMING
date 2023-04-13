/* copy one string to other without function
#include <stdio.h>

int main()
{
    char string1[20], string2[20];
    int i ;

    printf("\nEnter the string :");
    gets(string1);

    for(i=0;string1[i] != '\0';i++)

        string2[i] = string1[i];

        string2[i] = '\0';
        printf("\nCopied String is %s ", string2);

        return (0);
}*/
// copy one string to other with function
#include <stdio.h>
#include<string.h>

int main()
{
    char string1[20], string2[20];

    printf("\nEnter the string :");
    gets(string1);
    strcpy(string2,string1);
    printf("\nCopied String is %s ", string2);

    return (0);
}