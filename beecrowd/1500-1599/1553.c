#include <stdio.h>
int main()
{
    int n, k;
    while (scanf("%d %d", &n, &k) && n != 0 && k != 0)
    {
        int questions[n];

        int idk[110];
        for (int i = 0; i < 110; i++)
        {
            idk[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &questions[i]);
            idk[questions[i]]++;
        }

        int count = 0;
        for (int i = 0; i < 110; i++)
        {
            if (idk[i] >= k)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
}