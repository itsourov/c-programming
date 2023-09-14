#include <stdio.h>
#include <string.h>
int main()
{
    int testCase, biggerWordLength;
    char string1[51], string2[51], temp;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%s %s", string1, string2);

        if (strlen(string1) > strlen(string2))
        {
            biggerWordLength = strlen(string1);
        }
        else
        {
            biggerWordLength = strlen(string2);
        }

        for (int i = 0; i < biggerWordLength; i++)
        {
            temp = string1[i];
            if (i < strlen(string1))
            {
                printf("%c", temp);
            }
            temp = string2[i];
            if (i < strlen(string2))
            {
                printf("%c", temp);
            }
        }
        printf("\n");
    }
}