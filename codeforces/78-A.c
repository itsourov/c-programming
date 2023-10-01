#include <stdio.h>
#include <string.h>

int getVowelCount(char line[110])
{
    int count = 0;
    int len = strlen(line);

    for (int i = 0; i < len; i++)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char line1[110], line2[110], line3[110];
    fgets(line1, 110, stdin);
    fgets(line2, 110, stdin);
    fgets(line3, 110, stdin);

    if (getVowelCount(line1) == 5 && getVowelCount(line2) == 7 && getVowelCount(line3) == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}