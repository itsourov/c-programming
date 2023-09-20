#include <stdio.h>

int getHcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    if (a > b)
    {
        return getHcf(a % b, b);
    }
    else
    {
        return getHcf(a, b % a);
    }
}
int main()
{
    int n, a, b, hcf, lcm;
    while (1)
    {

        scanf("%d %d %d", &n, &a, &b);

        if (n == 0 && a == 0 && b == 0)
        {
            break;
        }
        hcf = getHcf(a, b);
        lcm = (a * b) / hcf;
        int x = (n / a) + (n / b) - (n / lcm);
        printf("%d\n", x);
    }
}