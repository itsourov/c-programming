#include <stdio.h>
#include <string.h>
int main()
{
    char string[55];
    int maxR, runCount, tempCount;

    while (scanf("%s %d", string, &maxR) != EOF)
    {
        runCount = 0;
        tempCount = 0;

        // RWWRRRR
        for (int i = 0; i < strlen(string); i++)
        {
            if (string[i] == 'W')
            {
                runCount++;
                if (tempCount > 0)
                {
                    runCount++;
                    tempCount = 0;
                }
            }
            else
            {
                tempCount++;
                if (tempCount == maxR)
                {
                    runCount++;
                    tempCount = 0;
                }
            }
        }
        if (tempCount > 0)
        {
            runCount++;
            tempCount = 0;
        }
        printf("%d\n", runCount);
    }
}