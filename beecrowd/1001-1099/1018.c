#include <stdio.h>
int main()
{
    int amount;
    int temp;

    scanf("%d", &amount);
    printf("%d\n", amount);

    temp = amount / 100;
    printf("%d nota(s) de R$ 100,00\n", temp);
    amount -= temp * 100;

    temp = amount / 50;
    printf("%d nota(s) de R$ 50,00\n", temp);
    amount -= temp * 50;

    temp = amount / 20;
    printf("%d nota(s) de R$ 20,00\n", temp);
    amount -= temp * 20;

    temp = amount / 10;
    printf("%d nota(s) de R$ 10,00\n", temp);
    amount -= temp * 10;

    temp = amount / 5;
    printf("%d nota(s) de R$ 5,00\n", temp);
    amount -= temp * 5;

    temp = amount / 2;
    printf("%d nota(s) de R$ 2,00\n", temp);
    amount -= temp * 2;

    temp = amount / 1;
    printf("%d nota(s) de R$ 1,00\n", temp);
    amount -= temp * 1;
}