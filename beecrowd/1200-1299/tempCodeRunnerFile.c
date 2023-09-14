#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    char message[1100];
    scanf("%d", &testCase);

    while (testCase--)
    {

        fgets(message, 1100, stdin);
        for (int i = 0; i < strlen(message); i++)
        {
            if (message[i] != ' ' && (message[i - 1] == ' ' || i == 0))
            {
                printf("%c", message[i]);
            }
        }
    }
}