#include <stdio.h>
int main()
{
    int testCase, numberOfSheep, temp, uniqueSheepCount, isUnique;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        uniqueSheepCount = 0;
        scanf("%d", &numberOfSheep);

        int sheeps[numberOfSheep];

        for (int j = 0; j < numberOfSheep; j++)
        {
            scanf("%d", &sheeps[j]);
            isUnique = 1;
            for (int k = 0; k < j; k++)
            {
                if (sheeps[j] == sheeps[k])

                {
                    isUnique = 0;
                }
            }
            if (isUnique)
            {
                uniqueSheepCount++;
            }
        }

        printf("%d\n", uniqueSheepCount);
    }
}