#include <stdio.h>
#include <stdlib.h>

#define maxN 2000010

typedef struct
{
    long long first;
    long long second;
} Pair;

Pair vt[maxN];

void prec()
{
    long long number, count;
    for (long long i = 1; i <= maxN; i++)
    {
        number = i;
        count = 0;
        while (number % 2 == 0)
        {
            count++;
            number /= 2;
        }

        for (long long j = 3; j * j <= number; j += 2)
        {
            while (number % j == 0)
            {
                number /= j;
                count++;
            }
        }
        if (number > 1)
        {
            count++;
        }
        vt[i - 1].first = count;
        vt[i - 1].second = i;
    }

    for (long long i = 0; i < maxN; i++)
    {
        for (long long j = i + 1; j < maxN; j++)
        {
            if (vt[i].first > vt[j].first || (vt[i].first == vt[j].first && vt[i].second > vt[j].second))
            {
                Pair temp = vt[i];
                vt[i] = vt[j];
                vt[j] = temp;
            }
        }
    }
}

void solve()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", vt[n - 1].second);
}

int main()
{
    prec();
    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}
