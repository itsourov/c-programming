#include <stdio.h>
#include <string.h>
int main()
{
    char string[60];
    int startedItalic, startedBold;
    while (fgets(string, 55, stdin))
    {
        startedItalic = 0, startedBold = 0;
        for (int i = 0; i < strlen(string); i++)
        {
            if (string[i] == '_')
            {

                if (startedItalic)
                {

                    printf("</i>");
                    startedItalic = 0;
                }
                else
                {
                    printf("<i>");
                    startedItalic = 1;
                }
            }
            else if (string[i] == '*')
            {

                if (startedBold)
                {

                    printf("</b>");
                    startedBold = 0;
                }
                else
                {
                    printf("<b>");
                    startedBold = 1;
                }
            }

            else
            {
                printf("%c", string[i]);
            }
        }
    }
}