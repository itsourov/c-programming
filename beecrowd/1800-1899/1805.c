#include <stdio.h>

long long int sumFrom1ToN(long long n)
{
    return n * (n + 1) / 2;
}

int main()
{

    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    printf("%lld\n", sumFrom1ToN(b)-sumFrom1ToN(a)+a);
}