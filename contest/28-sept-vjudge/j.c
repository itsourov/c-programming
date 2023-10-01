#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[500];
    char newString[500];
    int index;
    int isOk;
    while (1)
    {
        fgets(word, 500, stdin);
        if (word[0] == 'D' && word[1] == 'O')
        {
            break;
        }

        index = 0;
        int len = strlen(word);
        for (int i = 0; i < len; i++)
        {

            if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z'))
            {
                newString[index] = word[i];
                index++;
            }
        }

               isOk = 1;
        for (int i = 0; i < index / 2; i++)
        {
            // printf("char - %c\n", newString[i]);
            // printf("char -- %c\n", newString[index - 1 - i]);
            if (tolower(newString[i]) != tolower(newString[index - 1 - i]))
            {
                isOk = 0;
            }
        }
        if (isOk)
        {
            printf("You won't be eaten!\n");
        }
        else
        {
            printf("Uh oh..\n");
        }
    }
}