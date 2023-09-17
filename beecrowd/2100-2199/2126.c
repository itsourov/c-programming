#include <stdio.h>
#include <string.h>

int main()
{
    char niddle[11], heystack[33];
    int substrOk, substrCount, substrPos, testcase = 0;
    while (scanf("%s %s", niddle, heystack) != EOF)
    {
        testcase++;

        substrCount = 0;

        for (int i = 0; i < strlen(heystack); i++)
        {
            substrOk = 1;
            for (int j = 0; j < strlen(niddle); j++)
            {
                if (heystack[i + j] != niddle[j])
                {
                    substrOk = 0;
                    break;
                }
            }
            if (substrOk)
            {
                substrCount++;
                substrPos = i;
            }
        }

        printf("Caso #%d:\n", testcase);
        if (substrCount > 0)
        {
            printf("Qtd.Subsequencias: %d\n", substrCount);
            printf("Pos: %d\n", substrPos + 1);
        }
        else
        {
            printf("Nao existe subsequencia\n");
        }
        printf("\n");
    }
}