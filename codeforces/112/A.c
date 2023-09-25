#include <stdio.h>
#include <string.h>

int main()
{
    char s1[500], s2[500];
    scanf("%s %s", s1, s2);

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] += 32;
        }
    }

    for (int i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] += 32;
        }
    }
    if (strcasecmp(s1, s2) < 0)
    {
        printf("-1\n");
    }
    else if (strcasecmp(s1, s2) > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}