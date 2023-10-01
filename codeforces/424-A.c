#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char ham[n + 20];
    scanf("%s", ham);
    int len = strlen(ham);

    int sCount = 0, dCount = 0;
    for (int i = 0; i < len; i++)
    {
        if (ham[i] == 'X')
        {
            sCount++;
        }
        else
        {
            dCount++;
        }
    }

    int diff = (n / 2) - sCount;
    if (diff < 0)
    {
        diff *= -1;
    }
    int count = diff;
    printf("%d\n", count);
    for (int i = 0; i < len && count; i++)
    {
        if (sCount > dCount)
        {
            if (ham[i] == 'X')
            {
                ham[i] = 'x';
                count--;
            }
        }
        else
        {
            if (ham[i] == 'x')
            {
                ham[i] = 'X';
                count--;
            }
        }
    }

    printf("%s\n", ham);
}
