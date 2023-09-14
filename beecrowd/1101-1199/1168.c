#include <stdio.h>
#include <string.h>

int getLEDCount(int digit)
{
    int numberOfLeds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    return numberOfLeds[digit];
}

int main()
{

    int testCase, totalLeds;
    char number[110];
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%s", number);
        totalLeds = 0;
        for (int i = 0; i < strlen(number); i++)
        {
            totalLeds += getLEDCount(number[i] - 48);
        }

        printf("%d leds\n", totalLeds);
    }
}
