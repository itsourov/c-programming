#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1100], firstLetter;
    int strlength, isOk;
    while (1)
    {
        getchar();
        fgets(sentence, 1010, stdin);
        if (sentence[0] == '*')
        {
            break;
        }

        strlength = strlen(sentence);
        firstLetter = '\0';
        isOk = 1;
        for (int i = 0; i < strlength; i++)
        {
            if (i == 0 || (sentence[i - 1] == ' ' && sentence[i] != ' '))
            {
                if (firstLetter == '\0')
                {
                    firstLetter = sentence[i];
                }
                else
                {
                    if (sentence[i] != firstLetter)
                    {
                        isOk = 0;
                        break;
                    }
                }
            }
        }

        if (isOk)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
}