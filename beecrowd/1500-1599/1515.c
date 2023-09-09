#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, year, timeNeedsToReachEarth, shortestTime;
    char message[50], oldestMessage[50];
    while (1)
    {

        scanf("%d", &testCase);

        if (testCase == 0)
        {
            break;
        }

        shortestTime = 3000;

        for (int i = 0; i < testCase; i++)
        {
            scanf("%s %d %d", message, &year, &timeNeedsToReachEarth);

            if (year - timeNeedsToReachEarth < shortestTime)
            {
                shortestTime = year - timeNeedsToReachEarth;
                strcpy(oldestMessage, message);
            }
        }
        printf("%s\n", oldestMessage);
    }
}