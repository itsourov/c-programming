#include <stdio.h>
int main()
{
    int n, biggestNumber, secondBiggestNumber, positionBiggest, position, sus;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        biggestNumber = 0;
        secondBiggestNumber = 0;
        position = 0;
        positionBiggest = 0;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &sus);

            if (sus > biggestNumber)
            {
                secondBiggestNumber = biggestNumber;
                position = positionBiggest;

                biggestNumber = sus;
                positionBiggest = i;
            }
            else if (sus > secondBiggestNumber)
            {
                secondBiggestNumber = sus;
                position = i;
            }
        }

        printf("%d\n", position);
    }
}