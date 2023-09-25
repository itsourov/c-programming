#include <stdio.h>
#include <string.h>
int main()
{
    char guest[150], host[150];
    char letters[300];
    scanf("%s %s %s", guest, host, letters);

    int guestLen = strlen(guest);
    int hostLen = strlen(host);
    int lettersLen = strlen(letters);

    for (int i = 0; i < guestLen; i++)
    {
        int thisLetterWasFound = 0;
        for (int j = 0; j < lettersLen; j++)
        {
            if (guest[i] == letters[j])
            {
                letters[j] = '0';
                thisLetterWasFound = 1;
                break;
            }
        }
        if (!thisLetterWasFound)
        {
            // printf("guest NO %c\n", guest[i]);
            printf("NO\n");
            return 0;
        }
    }

    for (int i = 0; i < hostLen; i++)
    {
        int thisLetterWasFound = 0;
        for (int j = 0; j < lettersLen; j++)
        {
            if (host[i] == letters[j])
            {
                letters[j] = '0';
                thisLetterWasFound = 1;
                break;
            }
        }
        if (!thisLetterWasFound)
        {
            // printf("host NO %c\n", host[i]);
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
}