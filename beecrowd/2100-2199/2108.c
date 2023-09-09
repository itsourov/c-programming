#include <stdio.h>
#include <string.h>

int getStringLength(char sentence[100])
{
    int length = 0;
    for (int i = 0; i < 100; i++)
    {
        if (sentence[i] == '\n')
        {
            break;
        }

        length++;
    }
    return length;
}

int main()
{
    char sentence[100], biggestString[100], biggestStringLength = 0;
    while (1)
    {
        fgets(sentence, 100, stdin);
        if (sentence[0] == '0')
        {
            printf("\nThe biggest word: %s\n", biggestString);
            break;
        }

        if (getStringLength(sentence) > biggestStringLength)
        {
            strcpy(biggestString, sentence);
            biggestStringLength = getStringLength(sentence);
        }

        int wordCount = 0;
        for (int i = 0; i < 100; i++)
        {
            if (sentence[i] == '\n')
            {
                printf("%d\n", wordCount);
                break;
            }

            if (sentence[i] == ' ')
            {
                printf("%d", wordCount);
                printf("-");
                wordCount = 0;
            }
            else
            {
                wordCount++;
            }
        }
    }
}