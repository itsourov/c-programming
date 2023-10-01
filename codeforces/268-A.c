#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int colors[n][2];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &colors[i][0], &colors[i][1]);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (colors[i][0] == colors[j][1])
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
}