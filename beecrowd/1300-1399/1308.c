#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, trops, row;
    scanf("%lld", &n);
    while (n--)
    {
        scanf("%lld", &trops);
        row = (sqrt(1 + 8 * trops) - 1) / 2;
        printf("%lld\n", row);
    }
}