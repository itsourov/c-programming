#include <stdio.h>
int main(void)
{
    int input;
    printf("Enter a month as a number: ");
    scanf("%d", &input);

    if (input >= 1 && input <= 12)
    {
        if (input == 4 || input == 6 || input == 9 || input == 11)
        {
            printf("it has 31 days\n");
        }
        else if (input == 2)
        {
            printf("it has 28 days\n");
        }
        else
        {
            printf("it has 31 days\n");
        }
    }

    else
    {
        printf("input is not an month\n");
    }
}