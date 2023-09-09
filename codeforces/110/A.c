#include <stdio.h>
#include <string.h>

int main()
{

    char number[20];
    int luckyDigitCount = 0;
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

    if (luckyDigitCount == 4 || luckyDigitCount == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}