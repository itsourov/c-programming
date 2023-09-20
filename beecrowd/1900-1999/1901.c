#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int map[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    int visitedPlaceSpecies[n * 2];
    int index1, index2;
    int count = 0;

    for (int i = 0; i < n * 2; i++)
    {
        scanf("%d %d", &index1, &index2);
        index1--;
        index2--;

        visitedPlaceSpecies[i] = map[index1][index2];

        int shouldCount = 1;
        for (int j = 0; j < i; j++)
        {
            if (visitedPlaceSpecies[i] == visitedPlaceSpecies[j])
            {
                shouldCount = 0;
                break;
            }
        }
        if (shouldCount)
        {
            count++;
        }
    }

    printf("%d\n", count);
}