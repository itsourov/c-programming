#include <stdio.h>
int main()
{
    char text[100];

    while (fgets(text, 100, stdin) != 0)
    {
        for (int i = 0; i < 100; i++)
        {
            if (text[i] == ',')
            {
                text[i] = '\n';
                break;
            }
        }
        printf("%s", text);
    }
}