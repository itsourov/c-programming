#include <stdio.h>
#include <string.h>

int main()
{
    char string[210];
    scanf("%s", string);

    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {

        if (string[i] == '.')
        {
            printf("0");
        }
        else
        {
            if (string[i + 1] == '.')
            {
                printf("1");
            }
            else
            {
                printf("2");
            }
            i++;
        }
    }

    printf("\n");
}