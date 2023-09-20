#include <stdio.h>
int main(void)
{
    int input;
    printf("Enter a month as a number ");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Januarry\n");
    }
    else if (input == 2)
    {
        printf("February\n");
    }
    else if (input == 3)
    {
        printf("March\n");
    }
    else if (input == 4)
    {
        printf("April\n");
    }
    else if (input == 5)
    {
        printf("May\n");
    }
    else if (input == 6)
    {
        printf("Jun\n");
    }
    else if (input == 7)
    {
        printf("July\n");
    }
    else if (input == 8)
    {
        printf("August\n");
    }
    else if (input == 9)
    {
        printf("September\n");
    }
    else if (input == 10)
    {
        printf("October\n");
    }
    else if (input == 11)
    {
        printf("November\n");
    }
    else if (input == 12)
    {
        printf("December\n");
    }
    else
    {
        printf("input is not an month\n");
    }
}