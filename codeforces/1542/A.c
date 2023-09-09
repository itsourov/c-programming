#include <stdio.h>

int main()
{
    int testCase, numberOfOdd, oddCount, temp;
    scanf("%d", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        oddCount = 0;
        scanf("%d", &numberOfOdd);

        for (int i = 0; i < numberOfOdd * 2; i++)
        {
            scanf("%d", &temp);
            if (temp % 2 != 0)
            {
                oddCount++;
            }
        }

        if (oddCount == numberOfOdd)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}