#include <stdio.h>

int main()
{
    long long testCase, n, divisorCount;
    scanf("%lld", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        scanf("%lld", &n);
        divisorCount = 1;
        for (int i = 1; i <= (n / 2); i++)
        {
            if (n % i == 0)
            {
                divisorCount++;
            }
        }
        if (divisorCount == 3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}