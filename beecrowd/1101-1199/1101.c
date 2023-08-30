#include <stdio.h>
int main()
{

    int m = 1, n = 1, temp, i, sum;
    while (1)
    {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0 )
        {
            break;
        }

        if (m > n)
        {
            temp = m;
            m = n;
            n = temp;
        }
        sum = 0;
        for (i = m; i <= n; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}