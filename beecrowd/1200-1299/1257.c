#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, numberOffElement, hashSum;
    char element[51];
    scanf("%d", &testCase);
    while (testCase--)
    {
        hashSum = 0;
        scanf("%d", &numberOffElement);

        for (int i = 0; i < numberOffElement; i++)
        {
            scanf("%s", element);
            for (int j = 0; j < strlen(element); j++)
            {
                hashSum += (element[j] - 'A') + i + j;
            }
        }

        printf("%d\n", hashSum);
    }
}