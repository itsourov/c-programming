#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int totalTIme = 0;
    if (b <= a)
    {
        totalTIme = 24 - a + b;
    }
    else
    {
        totalTIme = b - a;
    }
    printf("O JOGO DUROU %d HORA(S)\n", totalTIme);

    return 0;
}