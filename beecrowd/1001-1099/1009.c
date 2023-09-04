#include <stdio.h>

int main(void)
{

    char name[6];
    double fixedSalary;
    double totalSale;

    scanf("%s %lf %lf", name, &fixedSalary, &totalSale);

    printf("TOTAL = R$ %.2lf\n", fixedSalary + (totalSale * 0.15));

    return 0;
}
