#include <stdio.h>
#include <string.h>
int main()
{
    char word[1002];
    char temp;

    int testCase;
    scanf("%d", &testCase);
    getchar();
    while (testCase--)
    {

        fgets(word, 1002, stdin);

        int lenght = strlen(word);

        for (int i = 0; i < lenght; i++)
        {
            if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
            {
                word[i] += 3;
            }
        }
        // printf("word 1: %s\n", word);

        for (int i = 0; i < lenght / 2; i++)
        {
            temp = word[lenght - i - 1];
            word[lenght - i - 1] = word[i];
            word[i] = temp;
        }
        // printf("word 2: %s\n", word);

        for (int i = (lenght / 2); i < lenght; i++)
        {
            word[i] = word[i] - 1;
        }

        printf("%s\n", strtok(word, "\n"));
    }
}