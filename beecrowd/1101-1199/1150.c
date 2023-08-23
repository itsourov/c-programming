#include <stdio.h>
int main(void)
{
    int x, z, count = 1;
    scanf("%d", &x);

    while (1)
    {
        scanf("%d", &z);
        if (z > x)
        {
            break;
        }
    }
    for (int i = x; i <= z; i += i)
    {
        count++;
    }
    printf("%d\n", count + 1);
}