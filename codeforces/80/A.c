#include <stdio.h>
int isPrime(int number)
{
    if (number < 2)
    {
        return 0;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {

            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    n++;
    while (!isPrime(n))
    {
        n++;
    }
    if (n == m)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}