#include <stdio.h>
int main(void)
{
    int x, y, i, sum = 0;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    for (i = x; i <= y; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);
}