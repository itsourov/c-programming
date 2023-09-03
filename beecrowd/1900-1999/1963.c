#include <stdio.h>

int main()
{

    double oldPrice, newPrice;
    scanf("%lf %lf", &oldPrice, &newPrice);
    double diff = newPrice - oldPrice;
    printf("%.2lf%%\n", (diff * 100) / oldPrice);
}
