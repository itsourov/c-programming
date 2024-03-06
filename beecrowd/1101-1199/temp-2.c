#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {

        int x;
        scanf("%d", &x);

        int count = 0;
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }
}