#include <stdio.h>
int main()
{
    int testCase;
    int x, y, sum, count;
    scanf("%d", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        scanf("%d %d", &x, &y);
        count = 0;

        sum = 0;

        for (int i = x; count < y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
                count++;
            }
        }

        printf("%d\n", sum);
    }
}