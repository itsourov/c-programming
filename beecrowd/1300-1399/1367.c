#include <stdio.h>
#include <string.h>
int main()
{
    int testCase, time, okCount, resultTime, wrongCount;
    char problemNumber, result[20];
    while (1)
    {
        scanf("%d", &testCase);
        if (testCase == 0)
        {
            break;
        }
        okCount = 0;
        wrongCount = 0;
        resultTime = 0;

        char wrongList[testCase];

        for (int i = 0; i < testCase; i++)
        {
            wrongList[i] = '\n';

            getchar();
            scanf("%c %d %s", &problemNumber, &time, result);
            if (strcmp("correct", result) == 0)
            {
                okCount++;
                resultTime += time;
                // printf("---correct %c %d\n", problemNumber, time);

                for (int j = 0; j < wrongCount; j++)
                {
                    if (wrongList[j] == problemNumber)
                    {
                        resultTime += 20;
                    }
                }
            }
            else
            {
                wrongList[wrongCount] = problemNumber;
                wrongCount++;
            }
        }
        printf("%d %d\n", okCount, resultTime);
    }
}