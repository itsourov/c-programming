#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {

        int x;
        scanf("%d", &x);

        int sum = 0;
        for (int i = 1; i < x; i++)
        {
            if (x % i == 0)
            {
                sum += i;
            }
        }
        if (sum == x)
        {
            printf("%d eh perfeito\n", x);
        }
        else
        {
            printf("%d nao eh perfeito\n", x);
        }
    }
}