#include <stdio.h>

int main(void)
{

    int testCase, numberOfCandies, output;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &numberOfCandies);
        output = (numberOfCandies - 1) / 2;
        printf("%d\n", output);
    }
}
