#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[510];
    fgets(sentence, 510, stdin);
    int size = 0;

    for (int i = 0; i < 510; i++)
    {
        if (sentence[i] == '\n')
        {
            break;
        }

        size++;
    }
    if (size <= 80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}