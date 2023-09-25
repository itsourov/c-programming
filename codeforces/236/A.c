#include <stdio.h>
#include <string.h>

int main()
{
    char username[150];
    scanf("%s", username);

    int alphabet[26] = {0};

    int usernameLen = strlen(username);

    for (int i = 0; i < usernameLen; i++)
    {
        alphabet[username[i] - 'a'] = 1;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 1)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}