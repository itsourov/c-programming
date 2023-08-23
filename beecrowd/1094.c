#include <stdio.h>
int main(void)
{

    int x, tempInt;
    char tempChar;
    int numberOfC = 0, numberOfR = 0, numberOfS = 0;

    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d %c", &tempInt, &tempChar);
        if (tempChar == 'C')
        {
            numberOfC += tempInt;
        }

        if (tempChar == 'R')
        {
            numberOfR += tempInt;
        }

        if (tempChar == 'S')
        {
            numberOfS += tempInt;
        }
    }

    printf("Total: %d cobaias\n", numberOfC + numberOfR + numberOfS);
    printf("Total de coelhos: %d\n", numberOfC);
    printf("Total de ratos: %d\n", numberOfR);
    printf("Total de sapos: %d\n", numberOfS);
    int totalNumber = numberOfC + numberOfR + numberOfS;

    printf("Percentual de coelhos: %.2lf %%\n", (100.00 * numberOfC) / totalNumber);
    printf("Percentual de ratos: %.2lf %%\n", (100.00 * numberOfR) / totalNumber);
    printf("Percentual de sapos: %.2lf %%\n", (100.00 * numberOfS) / totalNumber);
}