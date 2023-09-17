#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Top Coder comp Wedn at midnight";

    char *word = strtok(string, " ");
    

    int index = 0;
    while (word != NULL)
    {

        printf("%p\n", word);

        word = strtok(NULL, " ");
        index++;
    }
}