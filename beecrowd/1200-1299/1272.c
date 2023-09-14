#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    char message[51];
    scanf("%d", &testCase);

    while (testCase--)
    {
        getchar();

        fgets(message, 1100, stdin);

        if (message[0] >= 'a' && message[0] <= 'z')
        {
            printf("%c", message[0]);
        }
        for (int i = 1; i < strlen(message); i++)
        {
            if ((message[i] >= 'a' && message[i] <= 'z') && (message[i - 1] < 'a' || message[i - 1] > 'z'))
            {
                printf("%c", message[i]);
            }
        }

        printf("\n");
    }
}