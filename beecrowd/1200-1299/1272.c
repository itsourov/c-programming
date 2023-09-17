#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    char message[52], *word;
    scanf("%d", &testCase);

    getchar();
    while (testCase--)
    {

        fgets(message, 52, stdin);

        word = strtok(message, " ");

        while (word != NULL)
        {
            if (word[0] >= 'a' && word[0] <= 'z')
            {
                printf("%c", word[0]);
            }

            word = strtok(NULL, " ");
        }

        printf("\n");
    }
}