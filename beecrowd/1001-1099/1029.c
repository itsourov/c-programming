#include <stdio.h>

int callCount;
int getFibonocy(int n)
{
    callCount++;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return getFibonocy(n - 1) + getFibonocy(n - 2);
    }
}

int main()
{
    int n, x, res;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);
        callCount = 0;
        res = getFibonocy(x);
        printf("fib(%d) = %d calls = %d\n", x, callCount - 1, res);
    }
}