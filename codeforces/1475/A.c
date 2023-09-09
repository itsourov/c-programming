#include <stdio.h>

int main()
{
    long long testCase, n;
    scanf("%lld", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        scanf("%lld", &n);
        if (n % 2 == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}