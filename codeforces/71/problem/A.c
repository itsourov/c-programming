#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    char word[120];
    scanf("%d", &n);
    for (int index = 0; index < n; index++)
    {
        scanf("%s", word);
        int l = strlen(word);
        if (l > 10)
        {
            printf("%c%d%c\n", word[0], l - 2, word[l - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }
}
