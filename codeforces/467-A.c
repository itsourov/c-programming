#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    int p, q;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p, &q);

        if (p + 2 <= q)
        {
            count++;
        }
    }

    printf("%d\n", count);
}