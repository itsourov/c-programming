#include <stdio.h>
#include <string.h>

int getWrongCountLetterCount(char wordInput[5], char wordMain[5])
{

    int wrongCount = 0;
    for (int i = 0; i < strlen(wordMain); i++)
    {
        if (wordInput[i] != wordMain[i])
        {
            wrongCount++;
        }
    }
    return wrongCount;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);

    char word[5];

    while (testCase--)
    {
        scanf("%s", word);
        if (getWrongCountLetterCount(word, "one") <= 1)
        {
            printf("1\n");
        }
        else if (getWrongCountLetterCount(word, "two") <= 1)
        {
            printf("2\n");
        }
        else if (getWrongCountLetterCount(word, "three") <= 1)
        {
            printf("3\n");
        }
    }
}