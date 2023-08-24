#include <stdio.h>
int main()
{
    int x;
    int countedNumber, sum;
    while (1)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }
        sum = 0;
        countedNumber = 0;
        for (int i = x; countedNumber < 5; i++)
        {
            if (i % 2 == 0)
            {
                sum += i;
                countedNumber++;
            }
        }
        printf("%d\n", sum);
    }
}