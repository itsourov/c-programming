#include <stdio.h>
int main(void)
{
    int x, y, i;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    for (i = x + 1; i < y; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }
}