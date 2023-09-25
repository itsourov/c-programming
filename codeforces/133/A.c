#include <stdio.h>
#include <string.h>

int main()
{
    char command[200];
    scanf("%s", command);
    int len = strlen(command);
    for (int i = 0; i < len; i++)
    {
        if (command[i] == 'H' || command[i] == 'Q' || command[i] == '9')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}