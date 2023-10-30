#include <stdio.h>
#include <string.h>
int main()
{

    char word[110];
    scanf("%s", word);

    int len = strlen(word);
    int numberOfUpperCaseLetter = 0;
    int numberOflowerCaseLetter = 0;

    for (int i = 0; i < len; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            numberOflowerCaseLetter++;
        }
        else
        {
            numberOfUpperCaseLetter++;
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (numberOfUpperCaseLetter > numberOflowerCaseLetter)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                printf("%c", word[i] - 32);
            }
            else
            {
                printf("%c", word[i]);
            }
        }
        else
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                printf("%c", word[i]);
            }
            else
            {
                printf("%c", word[i] + 32);
            }
        }
    }
    printf("\n");
}