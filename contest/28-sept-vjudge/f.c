#include <stdio.h>
#include <math.h>

int main()
{
    int bags[4];
    int totalCandy = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &bags[i]);
        totalCandy += bags[i];
    }

    int isPossible = 0;
    if (totalCandy % 2 == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i != j)
                {
                    if (bags[i] + bags[j] == totalCandy / 2)
                    {
                        // printf("index1 %d index2 %d\n", i, j);
                        isPossible = 1;
                    }
                }
            }
        }
    }

    if (isPossible)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}