#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int sum0 = 0, sum1 = 0, sum2 = 0;
    int x, y, z;
    while (n--)
    {
        scanf("%d %d %d", &x, &y, &z);
        sum0 += x;
        sum1 += y;
        sum2 += z;
    }

    if (sum0 == 0 && sum1 == 0 && sum2 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}