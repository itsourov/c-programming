#include <stdio.h>
int isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
int main()
{
    int year;
    while (scanf("%d", &year) != EOF)
    {
        int isFestible = 0;
        if (isLeapYear(year))
        {
            printf("This is leap year.\n");
            isFestible = 1;
        }
        if (year % 15 == 0)
        {
            printf("This is huluculu festival year.\n");
            isFestible = 1;
        }
        if (year % 55 == 0 && isLeapYear(year))
        {
            printf("This is Bulukulu festival year.\n");
            isFestible = 1;
        }
        if (!isFestible)
        {
            printf("This is an ordinary year. %d\n", year);
        }

        printf("\n");
    }
}