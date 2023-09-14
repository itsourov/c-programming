#include <stdio.h>
#include <string.h>
int main()
{
    char number[1100];
    int digitCount, mfd, mfdCount;
    while (scanf("%s", number) != EOF)
    {
        for (int i = 0; i < 10; i++)
        {
            digitCount = 0;
            for (int index = 0; index < strlen(number); index++)
            {
                if (number[index] - 48 == i)
                {
                    digitCount++;
                }
            }
            if (i == 0 || digitCount >= mfdCount)
            {
                mfd = i;
                mfdCount = digitCount;
            }
        }
        printf("%d\n", mfd);
    }
}