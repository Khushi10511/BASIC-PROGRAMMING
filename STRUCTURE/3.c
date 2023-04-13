// to store information of students 
#include<string.h>
#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
    char a[3];
} s[5];

int main()
{
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 3; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter section :");
        scanf("%s", s[i].a);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 3; ++i)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
        printf("Section: %s", s[i].a);
        printf("\n");
    }
    return 0;
}
