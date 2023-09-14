#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, longestWordLength;
    while (1)
    {
        scanf("%d", &testCase);
        if (testCase == 0)
        {
            break;
        }
        char ListOfWord[testCase][51];
        longestWordLength = 0;

        for (int index = 0; index < testCase; index++)
        {
            scanf("%s", ListOfWord[index]);
            if (strlen(ListOfWord[index]) >= longestWordLength)
            {
                longestWordLength = strlen(ListOfWord[index]);
            }
        }
        for (int i = 0; i < testCase; i++)
        {
            if (testCase == i + 1)
            {
                printf("%*s", longestWordLength, ListOfWord[i]);
            }
            else
            {
                printf("%*s\n", longestWordLength, ListOfWord[i]);
            }
        }
        printf("\n");
    }
}