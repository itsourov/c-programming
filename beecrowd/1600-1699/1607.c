#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    char string1[10010], string2[10010];
    scanf("%d", &testCase);

    while (testCase--)
    {
        scanf("%s %s", string1, string2);

        int count = 0;

        for (int i = 0; i < strlen(string1); i++)
        {
            int diff = string2[i] - string1[i];
            if (diff < 0)
            {
                diff = diff + 26;
            }

            count += diff;
        }
        printf("%d\n", count);
    }
}