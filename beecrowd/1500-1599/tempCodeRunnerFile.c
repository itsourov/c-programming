#include <stdio.h>
int main()
{
    int n, biggestNumber, secondBiggestNumber, position, sus;
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
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &sus);

            if (sus > biggestNumber)
            {
                biggestNumber = sus;
            }
            else if (sus > secondBiggestNumber)
            {
                secondBiggestNumber = sus;
                position = i;
            }
        }

        printf("%d\n", position + 1);
    }
}