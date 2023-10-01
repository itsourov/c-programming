#include <stdio.h>
int diff(int x, int y)
{
    if (x > y)
    {
        return x - y;
    }
    else
    {
        return y - x;
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int aWinCount = 0, bWinCount = 0, drawCount = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (diff(a, i) == diff(b, i))
        {
            drawCount++;
        }
        else if (diff(a, i) < diff(b, i))
        {
            aWinCount++;
        }
        else
        {
            bWinCount++;
        }
    }

    printf("%d %d %d\n", aWinCount, drawCount, bWinCount);
}