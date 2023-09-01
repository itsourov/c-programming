#include <stdio.h>

double getPrice(int productCode)
{
    if (productCode == 1001)
    {
        return 1.50;
    }
    else if (productCode == 1002)
    {
        return 2.50;
    }
    else if (productCode == 1003)
    {
        return 3.50;
    }
    else if (productCode == 1004)
    {
        return 4.50;
    }
    else if (productCode == 1005)
    {
        return 5.50;
    }

    return 0;
}

int main()
{

    int numberOfPurchasedProducts, productCode, qty;
    double sum = 0;
    scanf("%d", &numberOfPurchasedProducts);
    for (int i = 0; i < numberOfPurchasedProducts; i++)
    {
        scanf("%d %d", &productCode, &qty);

        sum += getPrice(productCode) * qty;
    }

    printf("%.2lf\n", sum);
}
