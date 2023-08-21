#include <stdio.h>

double getPrice(int productCode)
{
    if (productCode == 1)
    {
        return 4.00;
    }
    if (productCode == 2)
    {
        return 4.50;
    }

    if (productCode == 3)
    {
        return 5.00;
    }
    if (productCode == 4)
    {
        return 2.00;
    }
    if (productCode == 5)
    {
        return 1.50;
    }
    return 0;
}

int main()
{
    int a, b;
    double cost = 0;
    scanf("%d %d", &a, &b);

    printf("Total: R$ %.2lf\n", getPrice(a) * b);

    return 0;
}