#include <stdio.h>
int main(void)
{
    int a, n, sum = 0;
    scanf("%d", &a);
    while (1)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            break;
        }
    }
    for (int i = a; i < a + n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
}