#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int totalPrice = 0;

    for (int i = 1; i <= w; i++)
    {
        totalPrice += i * k;
    }

    int diff = totalPrice - n;
    if (diff < 0)
    {
        diff = 0;
    }

    printf("%d\n", diff);
}