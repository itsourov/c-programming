#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[300];
    while (fgets(sentence, 300, stdin))
    {
        for (int i = 0; i < strlen(sentence); i++)
        {
            if (sentence[i] == ' ' && (sentence[i + 1] == ',' || sentence[i + 1] == '.'))
            {
                // printf("");
            }
            else
            {
                printf("%c", sentence[i]);
            }
        }
        printf("\n");
    }
}