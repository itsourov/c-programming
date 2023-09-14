#include <stdio.h>
#include <string.h>
int main()
{
    int testCase, offset, isSame;
    scanf("%d", &testCase);
    char word1[1100], word2[1100];

    while (testCase--)
    {
        scanf("%s %s", word1, word2);
        offset = strlen(word1) - strlen(word2);
        isSame = 1;
        for (int index = 0; index < strlen(word2); index++)
        {
            if (word1[index + offset] != word2[index])
            {
                isSame = 0;
            }
        }
        if (isSame)
        {
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
    }
}