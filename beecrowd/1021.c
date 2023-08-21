#include <stdio.h>

int main(void)
{

    double amount;
    int numberOfNote;
    scanf("%lf", &amount);

    printf("NOTAS:\n");

    numberOfNote = amount / 100;
    printf("%d nota(s) de R$ 100.00\n", numberOfNote);
    amount = amount - numberOfNote * 100;



    numberOfNote = amount / 50;
    printf("%d nota(s) de R$ 50.00\n", numberOfNote);
    amount -= numberOfNote * 50;

    numberOfNote = amount / 20;
    printf("%d nota(s) de R$ 20.00\n", numberOfNote);
    amount -= numberOfNote * 20;

    numberOfNote = amount / 10;
    printf("%d nota(s) de R$ 10.00\n", numberOfNote);
    amount -= numberOfNote * 10;

    numberOfNote = amount / 5;
    printf("%d nota(s) de R$ 5.00\n", numberOfNote);
    amount -= numberOfNote * 5;

    numberOfNote = amount / 2;
    printf("%d nota(s) de R$ 2.00\n", numberOfNote);
    amount -= numberOfNote * 2;

    printf("MOEDAS:\n");

    numberOfNote = amount / 1;
    printf("%d moeda(s) de R$ 1.00\n", numberOfNote);
    amount -= numberOfNote * 1;

    numberOfNote = amount / 0.5;
    printf("%d moeda(s) de R$ 0.50\n", numberOfNote);
    amount -= numberOfNote * 0.5;

    numberOfNote = amount / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", numberOfNote);
    amount -= numberOfNote * 0.25;

    numberOfNote = amount / 0.10;
    printf("%d moeda(s) de R$ 0.10\n", numberOfNote);
    amount -= numberOfNote * 0.10;

    numberOfNote = amount / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", numberOfNote);
    amount -= numberOfNote * 0.05;

    numberOfNote = amount / 0.01;
    printf("%d moeda(s) de R$ 0.01\n", numberOfNote);
    amount -= numberOfNote * 0.01;

    return 0;
}
