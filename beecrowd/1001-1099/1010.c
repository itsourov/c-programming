#include <stdio.h>

int main(void)
{

    int uselessVariable;
    int secondInput;
    double price;

    scanf("%d %d %lf", &uselessVariable, &secondInput, &price);

    int uselessVariable2;
    int secondInput2;
    double price2;

    scanf("%d %d %lf", &uselessVariable2, &secondInput2, &price2);

    int result = (secondInput * price) + (secondInput2 * price2);

    printf("VALOR A PAGAR: R$ %.2lf\n", result);

    return 0;
}
