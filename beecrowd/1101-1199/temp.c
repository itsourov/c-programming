#include <stdio.h>

int main()
{
    int x, z = 0, i, sum = 0;
    scanf("%d", &x);
    for (i = 0; z <= x; i++)
    {
        scanf("%d", &z);
    }
    for (i = x; sum > z; i++)
    {
        sum += i;
    }
    printf("%d\n", i);
}