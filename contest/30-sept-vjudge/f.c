#include <stdio.h>
int main()
{
    long long int a, b;
    while (scanf("%lld %lld", &a, &b) != EOF)
    {
        long long int d = b - a;
        if (d < 0)
        {
            d *= (-1);
        }

        printf("%lld\n", d);
    }
}