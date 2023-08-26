#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int numberOfChar, i;
    int charOk[26];

    for (i = 0; i < 26; i++)
    {
        charOk[i] = 0;
    }

    scanf("%d", &numberOfChar);
    char word[numberOfChar];
    scanf("%s", word);

    for (i = 0; i < numberOfChar; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            charOk[word[i] - 97] = 1;
        }
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            charOk[word[i] - 65] = 1;
        }
    }

    int allOk = 1;
    for (i = 0; i < 26; i++)
    {

        if (charOk[i] == 0)
        {
            allOk = 0;
            break;
        }
    }

    if (allOk)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
