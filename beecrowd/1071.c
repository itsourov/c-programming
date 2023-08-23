#include <stdio.h>
int main(void)
{

    int x, y;
    scanf("%d %d", &x, &y);

    int sum = 0;
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x + 1; i < y; i++)
    {

        if (i % 2 != 0)
        {

            sum = sum + i;
        }
    }
    printf("%d\n", sum);
}