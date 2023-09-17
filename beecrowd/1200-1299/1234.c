#include <stdio.h>
#include <string.h>

int main()
{
    char string[51];

    while (fgets(string, 51, stdin))
    {
        int previousOneIsUpperCase = 0;
        for (int i = 0; i < strlen(string); i++)
        {
            if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
            {

                if (previousOneIsUpperCase)
                {

                    if (string[i] >= 'A' && string[i] <= 'Z')
                    {
                        string[i] = string[i] + 32;
                    }
                    previousOneIsUpperCase = 0;
                }
                else
                {
                    previousOneIsUpperCase = 1;
                    if (string[i] >= 'a' && string[i] <= 'z')
                    {
                        string[i] = string[i] - 32;
                    }
                }
            }
        }
        string[strlen(string)]='\0';
        printf("%s", string);
    }
}