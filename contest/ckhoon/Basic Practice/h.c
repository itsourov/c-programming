#include <stdio.h>
int main()
{
    int amountToWithdraw;
    double initialBalance;

    scanf("%d %lf", &amountToWithdraw, &initialBalance);

    if (amountToWithdraw % 5 == 0 && amountToWithdraw <= initialBalance - 0.5)
    {
        initialBalance -= amountToWithdraw;
        initialBalance -= 0.5;
    }
    printf("%.2lf\n", initialBalance);
}
