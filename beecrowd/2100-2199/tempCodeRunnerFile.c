#include <stdio.h>
#include <string.h>

int main()
{
    char string[110];
    char *word;
    char separator = ' ';
    int wordLengh, longestWordLenght = 0, isFirst;
    char longestWord[110];

    while (1)
    {

        fgets(string, 110, stdin);

        if (string[0] == '0')
        {
            printf("\n");
            break;
        }

        word = strtok(string, &separator);
        isFirst = 1;
        while (word != NULL)
        {
            wordLengh = strlen(word);

            if (isFirst)
            {
                // printf("word: %s.", word);
                printf("%d", wordLengh);
                isFirst = 0;
            }
            else
            {
                // printf("word: %s.", word);
                printf("-%d", wordLengh);
            }

            if (wordLengh > longestWordLenght)
            {
                longestWordLenght = wordLengh;
                strcpy(longestWord, word);
            }

            word = strtok(NULL, &separator);
        }
        printf("\n");
    }
    printf("The biggest word: %s\n", longestWord);
}