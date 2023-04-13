// WAP to read item details used in party and calculate all expenses, divide expenses in all friends equally.
#include <stdio.h>
#include <string.h>
struct party
{
    char s[100];
    float expense;
} p[100];
int main()
{

    int i, n, t;
    float total, share;
    printf("No of items required in party:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the party item %d:", i);
        scanf("%s", &p[i].s);
        printf("Enter its expense in party:");
        scanf("%f", &p[i].expense);
    }
    printf("PARTY ITEMS AND THEIR EXPENSES ARE AS FOLLOWS \n");
    for (i = 1; i <= n; i++)
    {
        total = total + p[i].expense;
        printf(" %s : %f", p[i].s, p[i].expense);
        printf(" \n");
    }
    printf(" Total expense : %f", total);
    printf("\nEnter total no of friends:");
    scanf("%d", &t);
    share = total / n;
    printf("\n%d friends have to pay %f each for the expenses ", n, share);
    return 0;
}