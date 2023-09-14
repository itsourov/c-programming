#include <stdio.h>
#include <string.h>
int main()
{
    char amount[11];
    int cent, stringLength;
    while (scanf("%s %d", amount, &cent) != EOF)
    {
        stringLength = strlen(amount);

        printf("$");
        for (int i = 0; i < stringLength; i++)
        {
            if ((stringLength - i - 1) % 3 == 0 && i != stringLength - 1)
            {
                printf("%c,", amount[i]);
            }
            else
            {
                printf("%c", amount[i]);
            }
        }
        printf(".%02d\n", cent);
    }
}