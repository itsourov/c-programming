#include <stdio.h>

int main()

{

    int i, n, a, b;

    int dividendo, divisor, c;

    scanf("%d", &n);

    for (i = 0; i < n; ++i)

    {

        scanf("%d%d", &a, &b);

        if (b > a)
        {

            dividendo = b;

            divisor = a;
        }
        else
        {

            dividendo = a;

            divisor = b;
        }

        while (dividendo % divisor != 0)

        {

            c = dividendo % divisor;

            dividendo = divisor;

            divisor = c;
        }

        printf("%d\n", divisor);
    }

    return 0;
}