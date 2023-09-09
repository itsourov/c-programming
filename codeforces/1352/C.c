#include <stdio.h>

int main()
{
    int testCase, n, k, currentPosition, i;
    scanf("%d", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        scanf("%d %d", &n, &k);
        currentPosition = n;

        if (k % 2 == 0)
        {
            printf("%d\n", k - 1 + (k / (n - 1)));
        }
        else
        {
            printf("%d\n", k + (k / (n - 1)));
        }
    }
}