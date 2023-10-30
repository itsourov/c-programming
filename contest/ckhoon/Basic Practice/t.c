#include <stdio.h>
#include <math.h>

int main()
{
    int arr[4];
    int total = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int isPossible = 0;
    if (total % 2 == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i != j)
                {
                    if (arr[i] + arr[j] == total / 2)
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