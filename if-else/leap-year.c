#include <stdio.h>
int main()
{
    int a;
    printf("Enter a year to check leap year\n");
    scanf("%d", &a);

    if (a % 4 == 0)
    {
        printf("%d is a leap year \n", a);
    }
    else
    {
        printf("%d is not a leap year \n", a);
    }
}