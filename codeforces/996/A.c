#include <stdio.h>

int main(void)
{

    int amount;
    int numberOfNote;
    scanf("%d", &amount);

    numberOfNote = amount / 100;
    amount = amount - (int)(amount / 100) * 100;

    numberOfNote += amount / 20;
    amount = amount - (int)(amount / 20) * 20;

    numberOfNote += amount / 10;
    amount = amount - (int)(amount / 10) * 10;

    numberOfNote += amount / 5;
    amount = amount - (int)(amount / 5) * 5;

    numberOfNote += amount / 1;
    amount = amount - (int)(amount / 1) * 1;

    printf("%d\n", numberOfNote);

    return 0;
}
