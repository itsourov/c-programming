#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    char max[101] = "";

    while (1)
    {
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0'; // Remove the newline character

        if (strcmp(str, "0") == 0)
        {
            printf("\nThe biggest word: %s\n", max);
            break;
        }
        else
        {
            char temp[101] = "";
            int len = strlen(str);
            for (int i = 0; i < len; i++)
            {
                if (str[i] != ' ')
                {
                    temp[strlen(temp)] = str[i];
                }
                else
                {
                    if (strlen(temp) >= strlen(max))
                    {
                        strcpy(max, temp);
                    }
                    printf("%d-", (int)strlen(temp));
                    memset(temp, 0, sizeof(temp));
                }
            }
            if (strlen(temp) > 0)
            {
                printf("%d\n", (int)strlen(temp));
                if (strlen(temp) >= strlen(max))
                {
                    strcpy(max, temp);
                }
            }
        }
    }

    return 0;
}
