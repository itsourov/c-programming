#include <stdio.h>
int sum(int n)
{
    int x;
    if (n / 10 > 0)
    {
        return (n % 10) + sum(n / 10);
    }
    else
    {
        return n;
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", sum(n));
}
