#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;

    scanf("%d", &testCase);

    getchar();
    while (testCase--)
    {
        // printf("Flag\n");
        char message[100];
        fgets(message, 100, stdin);
        for (int i = 0; message[i] != '\0'; i++)
        {
            if (i == 0 && message[i] != ' ')
            {
                printf("%c", message[i]);
            }
            else if (i > 0 && message[i] >= 'a' && message[i] <= 'z' && message[i - 1] == ' ')
            {
                printf("%c", message[i]);
            }
        }
        printf("\n");
    }
}