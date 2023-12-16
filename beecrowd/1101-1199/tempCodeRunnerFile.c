#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    fgets(string, 100, stdin);

    int len = strlen(string);

    for (int i = 0; i < len; i++)
    {
        string[i] += 5;
    }
    printf("%s\n", string);
}
