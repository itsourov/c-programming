#include <stdio.h>

int hasUniqueDigit(int year)
{
    int zeroToNine[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (year > 0)
    {
        int digit = year % 10;
        zeroToNine[digit]++;
        if (zeroToNine[digit] > 1)
        {
            return 0;
        }

        year /= 10;
    }
    return 1;
}

int main()
{
    int year;
    scanf("%d", &year);
    year++;
    while (!hasUniqueDigit(year))
    {
        year++;
    }
    printf("%d\n", year);
}