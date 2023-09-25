#include <stdio.h>
#include <string.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    char stones[55];
    scanf("%s", stones);

    int RCount = 0, GCount = 0, bCount = 0;
    int len = strlen(stones);

    int toRemove = 0;
    for (int i = 0; i < len; i++)
    {
        if (stones[i] == 'R')
        {
            RCount++;
            GCount = 0;
            bCount = 0;
        }
        if (stones[i] == 'G')
        {

            GCount++;
            RCount = 0;
            bCount = 0;
        }
        if (stones[i] == 'B')
        {

            bCount++;
            RCount = 0;
            GCount = 0;
        }
        if (RCount >= 2 || GCount >= 2 || bCount >= 2)
        {
            toRemove++;
        }
    }
    printf("%d\n", toRemove);
}