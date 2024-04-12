#include <stdio.h>
#include <stdbool.h>

#define sieveLimit 33000010
#define maxN 2100000

bool sieve[sieveLimit + 10];
int primes[maxN + 10];
void prec()
{
    sieve[0] = 0;
    sieve[1] = 0;

    for (long long i = 2; i * i <= sieveLimit; i++)
    {
        if (sieve[i] == 0)
        {
            for (long long j = i * i; j <= sieveLimit; j += i)
            {
                sieve[j] = 1;
            }
        }
    }
    long long size = 0;
    primes[size++] = 1;
    primes[size++] = 2;
    for (long long i = 3; i <= sieveLimit; i += 2)
    {
        if (sieve[i] == 0)
            primes[size++] = i;
    }
    // printf("%lld\n", sizes);

    for (int i = 0; i < 100; i++)
    {
        printf("%lld %lld\n", i + 1, primes[i]);
    }
}

int main()
{
    prec();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", primes[n - 1]);
    }
}
