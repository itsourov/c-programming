#include <stdio.h>
int main()
{
    long long int n;
    int biggestNumber, position;

    while (scanf("%lldd", &n) != EOF)
    {
        int digitPosition[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        while (n > 0)
        {
            int digit = n % 10;

            digitPosition[digit] = digitPosition[digit] + 1;

            n = n / 10;
        }

        for (int i = 0; i < 10; i++)
        {
            printf("%d-", digitPosition[i]);
            if (i == 0 || digitPosition[i] > biggestNumber)
            {
                biggestNumber = digitPosition[i];
                position = i + 1;
            }
        }
        printf("==%d\n", position);
    }
}