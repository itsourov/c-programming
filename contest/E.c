#include <stdio.h>
#include <string.h>

int main(void)
{
    char players[110];
    scanf("%s", players);

    int oneCount = 0, zeroCount = 0;
    int len = strlen(players);

    //1 0 0 0 0 0 0 0 0 1

    for (int i = 0; i < len; i++)
    {
        if (players[i] == '1')
        {
            oneCount++;
            zeroCount = 0;
        }
        else
        {
            zeroCount++;
            oneCount = 0;
        }
        if (oneCount >= 7 || zeroCount >= 7)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}