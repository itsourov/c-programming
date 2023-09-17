#include <stdio.h>

int main()
{
    long long n1, n2, diff;
    while (scanf("%lld %lld", &n1, &n2) != EOF)
    {

        diff = n2 - n1;
        if (diff < 0)
        {
            diff = diff * (-1);
        }

        printf("%lld\n", diff);
    }
}