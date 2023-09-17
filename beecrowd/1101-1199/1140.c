#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1100], firstLetter;
    int strlength, isOk;
    while (1)
    {
        // getchar();
        fgets(sentence, 1010, stdin);
        if (sentence[0] == '*')
        {
            break;
        }

        strlength = strlen(sentence);

        isOk = 1;
        for (int i = 0; i < strlength; i++)
        {
            if (sentence[i] == ' ')
            {
                if (sentence[i + 1] != sentence[0] && sentence[i + 1] - 32 != sentence[0] && sentence[i + 1] + 32 != sentence[0])
                {
                    isOk = 0;
                    break;
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