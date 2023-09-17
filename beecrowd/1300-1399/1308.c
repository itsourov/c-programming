#include <stdio.h>
#include <math.h>

int main()
{
    long long int s;
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf("%lld", &s);
        printf("%lld\n", (long long int)(-1 + sqrt(1 + 8 * s)) / 2);
    }

    return 0;
}
