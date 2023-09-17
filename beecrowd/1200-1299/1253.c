#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, offsetNumber;
    char string[51];
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%s %d", string, &offsetNumber);
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i] - offsetNumber;

            if (string[i] < 'A')
            {
                string[i] = string[i] + 26;
            }
            printf("%c", string[i]);
        }
        printf("\n");
    }
}