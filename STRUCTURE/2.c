// Q2)WAP to store n books data such as title, author, pulication, price etc using structures.Display all the books information of a particular author.
#include <stdio.h>
#include <string.h>
struct Display
{
    char title[100];
    char author[100];
    char publication[100];
    float price;
} d[100];
int main()
{
    int i, n, flag = 0;
    char f[100];
    printf("Enter tha no. of books whose information is to be entered:");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        printf("FOR BOOK%d \n", i);
        printf("Enter book title :");
        scanf("%s", &d[i].title);
        printf("Enter book author name :");
        scanf("%s", &d[i].author);
        printf("Enter book publication :");
        scanf("%s", &d[i].publication);
        printf("Enter book price :");
        scanf("%f", &d[i].price);
        printf("\n");
    }
    printf("Enter book author whose information you want :");
    scanf("%s", &f);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        if (strcmp(d[i].author, f) == 0)
        {
            flag = 1;
            printf("BOOK TITLE : %s", d[i].title);
            printf("\n");
            printf("BOOK PUBLICATION :%s", d[i].publication);
            printf("\n");
            printf("BOOK PRICE :%f", d[i].price);
            printf("\n");
        }
    }
    if (flag == 0)
        printf("SPECIFIED BOOK NOT FOUND");
    return 0;
}