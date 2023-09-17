#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    char message[51], *word;
    scanf("%d", &testCase);

    while (testCase--)
    {
        getchar();
        fgets(message, 51, stdin);
        word = strtok(message, " ");

        while (word != NULL)
        {

            printf("%c", word[0]);

            word = strtok(NULL, " ");
        }

        printf("\n");
    }
}