// #include <stdio.h>
// int isLeapYear(int year)
// {
//     return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
// }
// int main()
// {
//     int year;
//     while (scanf("%d", &year) != EOF)
//     {
//         int isFestible = 0;
//         if (isLeapYear(year))
//         {
//             printf("This is leap year.\n");
//             isFestible = 1;
//         }
//         if (year % 15 == 0)
//         {
//             printf("This is huluculu festival year.\n");
//             isFestible = 1;
//         }
//         if (year % 55 == 0 && isLeapYear(year))
//         {
//             printf("This is Bulukulu festival year.\n");
//             isFestible = 1;
//         }
//         if (!isFestible)
//         {
//             printf("This is an ordinary year. %d\n", year);
//         }

//         printf("\n");
//     }
// }

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    long i, l, le, f, m4, m15, m55, m100, m400;
    char y[1000001];
    int b = 0;

    while (gets(y))
    {
        if (b)
            printf("n");
        b = 1;
        le = f = m4 = m15 = m55 = m100 = m400 = 0;

        l = strlen(y);

        for (i = 0; i < l; ++i)
        {
            m4 = ((m4 * 10) + (y[i] - '0')) % 4;
            m15 = ((m15 * 10) + (y[i] - '0')) % 15;
            m55 = ((m55 * 10) + (y[i] - '0')) % 55;
            m100 = ((m100 * 10) + (y[i] - '0')) % 100;
            m400 = ((m400 * 10) + (y[i] - '0')) % 400;
        }

        if ((m4 == 0 && m100 != 0) || (m400 == 0))
        {
            printf("This is leap year.n");
            le = f = 1;
        }

        if (m15 == 0)
        {
            printf("This is huluculu festival year.n");
            f = 1;
        }

        if (le == 1 && m55 == 0)
            printf("This is bulukulu festival year.n");
        if (f == 0)
            printf("This is an ordinary year.n");
    }

    return 0;
}