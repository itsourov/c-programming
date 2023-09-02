#include <stdio.h>
int main()
{
    int number, tempNumber, count,i;

    while (1)
    {
        scanf("%d", &number);
        if (number < 0)
        {
            break;
        }
        int digitCount = 0;
        tempNumber = number;
        while (tempNumber > 0)
        {

            tempNumber = tempNumber / 3;
            digitCount++;
        }
        int numIn3Base[digitCount];

        tempNumber = number;
        count = digitCount - 1;
        while (tempNumber > 0)
        {
            numIn3Base[count] = tempNumber % 3;
            tempNumber = tempNumber / 3;
            count--;
        }
        for (i = 0; i < digitCount; i++)
        {
            printf("%d", numIn3Base[i]);
        }
        printf("\n");
    }
}