#include <stdio.h>
int main()
{
    long long int n;
    while (1)
    {
        scanf("%lld", &n);
        if (n == 0)
        {
            break;
        }

        long long int goalByGermany = (n * 7) / 90;
        if (goalByGermany < (double)(n * 7) / 90)
        {
            goalByGermany++;
        }

        long long int goalByBrasil = n / 90;

        printf("Brasil %lld x Alemanha %lld\n", goalByBrasil, goalByGermany);
    }
}