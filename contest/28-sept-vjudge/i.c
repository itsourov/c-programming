#include <stdio.h>

int f91(int n)
{
    if (n <= 100)
    {
        return f91(f91(n + 11));
    }
    if (n >= 101)
    {
        return n - 10;
    }

    return 127;
}
int main()
{

    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        printf("f91(%d) = %d\n", n, f91(n));
    }
}