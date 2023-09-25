#include <stdio.h>

int main()
{
    int numberOfCupboards;
    scanf("%d", &numberOfCupboards);
    int left, right, leftCount = 0, rightCount = 0;

    for (int i = 0; i < numberOfCupboards; i++)
    {
        scanf("%d %d", &left, &right);
        leftCount += left;
        rightCount += right;
    }

    int totalSec = 0;
    if (leftCount > numberOfCupboards / 2)
    {
        totalSec += (numberOfCupboards - leftCount);
    }
    else
    {
        totalSec += leftCount;
    }

    if (rightCount > numberOfCupboards / 2)
    {
        totalSec += (numberOfCupboards - rightCount);
    }
    else
    {
        totalSec += rightCount;
    }
    printf("%d\n", totalSec);
}