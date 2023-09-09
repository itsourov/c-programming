#include <stdio.h>

int main()
{

    int testCase;
    scanf("%d", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        int numberOfStudent;
        scanf("%d", &numberOfStudent);
        int results[numberOfStudent];

        int sum = 0;
        for (int i = 0; i < numberOfStudent; i++)
        {
            scanf("%d", &results[i]);
            sum += results[i];
        }
        double average = sum / numberOfStudent;

        int aboveAverageCount = 0;
        for (int i = 0; i < numberOfStudent; i++)
        {
            if (results[i] > average)
            {
                aboveAverageCount++;
            }
        }

        printf("%.3lf%%\n", (double)(aboveAverageCount * 100) / numberOfStudent);
    }
}