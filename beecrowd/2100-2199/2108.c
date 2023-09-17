#include <stdio.h>
#include <string.h>

int main()
{
    char string[110];
    char *word;
    char *separator = " ";
    int wordLengh, longestWordLenght = 0, isFirst;
    char longestWord[110];

    while (1)
    {

        fgets(string, 105, stdin);

        if (string[0] == '0' || string[1] == '0')
        {
            printf("\n");
            break;
        }
        string[strlen(string) - 1] = '\0';

        word = strtok(string, separator);
        isFirst = 1;
        while (word != NULL)
        {
            wordLengh = strlen(word);

            if (isFirst)
            {
                // printf("word: %s.\n", word);
                printf("%d", wordLengh);
                isFirst = 0;
            }
            else
            {
                // printf("word: %s.\n", word);
                printf("-%d", wordLengh);
            }

            if (wordLengh >= longestWordLenght)
            {
                longestWordLenght = wordLengh;
                strcpy(longestWord, word);
            }

            word = strtok(NULL, separator);
        }
        printf("\n");
    }
    printf("The biggest word: %s\n", longestWord);
}