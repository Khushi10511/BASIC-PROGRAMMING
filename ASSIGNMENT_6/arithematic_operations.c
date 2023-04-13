#include <stdio.h>
int main()
{
    int n1, n2, choice;
    printf("Enter two numbers \n"); 
    scanf("%d%d", &n1, &n2);
    printf("User should input the choice as per the following data: \n");
    printf("1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    printf("5.Modulus \n");
    printf("Enter your choice \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Addition of %d and %d is %d", n1, n2, n1 + n2);
        break;
    case 2:
        printf("Difference of %d and %d is %d", n1, n2, n1 - n2);
        break;
    case 3:
        printf("Product of %d and %d is %d", n1, n2, n1 * n2);
        break;
    case 4:
        printf("Division of %d and %d is %d", n1, n2, n1 / n2);
        break;
    case 5:
        printf("Modulus of %d and %d is %d", n1, n2, n1 % n2);
        break;
    default:
        printf("Wrong user choice \n");
    }
    return 0;
}
