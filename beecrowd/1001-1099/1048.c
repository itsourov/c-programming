#include <stdio.h>
int main(void)
{
    double salary;
    scanf("%lf", &salary);
    int increasePercentage = 0;
    if (salary <= 400)
    {
        increasePercentage = 15;
    }
    else if (salary <= 800)
    {
        increasePercentage = 12;
    }
    else if (salary <= 1200)
    {
        increasePercentage = 10;
    }
    else if (salary <= 2000)
    {
        increasePercentage = 7;
    }
    else
    {
        increasePercentage = 4;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salary + salary * increasePercentage / 100, (salary * increasePercentage / 100), increasePercentage);

    return 0;
}