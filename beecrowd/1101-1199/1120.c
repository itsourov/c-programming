#include <stdio.h>
#include <string.h>

int main()
{
    int d, printCoutn;
    char n[110];
    while (1)
    {
        scanf("%d %s", &d, n);
        if (d == 0)
        {
            break;
        }
        printCoutn = 0;
        for (int i = 0; i < strlen(n); i++)
        {

            if (n[i] != d + '0' && n[i] != '0')
            {
                printf("%c", n[i]);
                printCoutn++;
            }
            if (n[i] != d + '0' && n[i] == '0' && printCoutn > 0)
            {
                printf("%c", n[i]);
                printCoutn++;
            }
        }
        if (printCoutn == 0)
        {
            printf("0");
        }
        printf("\n");
    }
}
