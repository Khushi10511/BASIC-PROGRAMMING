// pointer to character string
#include <stdio.h>

int main()
{
    char *name="DELHI";
    char *c=name;
    char **d=&name;
    printf("address of D is %p \n",name );
    printf("value of c is %p \n",c);
    printf("value of d is %p \n",d);
    int length;
    while(*c != '\0')
    {
        printf("%c is stored at address %p \n",*c,c);
        c++;
    }
   
length=c-name;
printf("\n Length is %d",length);
    return 0;
}