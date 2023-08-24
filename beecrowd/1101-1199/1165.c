#include <stdio.h>
int main()
{
    int testCase, x, primeNumner;
    scanf("%d", &testCase);
    for (int index = 0; index < testCase; index++)
    {
        primeNumner = 1;
        scanf("%d", &x);
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                primeNumner = 0;
            }
        }
        if (primeNumner)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }
}