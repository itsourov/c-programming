#include <stdio.h>
int main()
{
    int shoe[4];
    scanf("%d %d %d %d", &shoe[0], &shoe[1], &shoe[2], &shoe[3]);

    int sameCount = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j && shoe[i] != -1 && shoe[j] != -1 && shoe[i] == shoe[j])
            {
                sameCount++;
                shoe[j] = -1;
            }
        }
    }

    printf("%d\n", sameCount);
}