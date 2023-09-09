#include <stdio.h>

int main()
{

    char number[20];
    int luckyDigitCount = 0, digit, isNearlyLucky = 1;
    fgets(number, 20, stdin);

    for (int i = 0; number[i] != '\n'; i++)
    {
        if (number[i] >= '0' && number[i] <= '9')
        {
            if (number[i] == '4' || number[i] == '7')
            {
                luckyDigitCount++;
                // printf("digit %c\n", number[i]);
            }
        }
    }

    while (luckyDigitCount > 0)
    {
        digit = luckyDigitCount % 10;
        if (!(digit == 4 || digit == 7))
        {
            isNearlyLucky = 0;
        }

        luckyDigitCount /= 10;
    }

    if (isNearlyLucky)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}