#include <stdio.h>
int main(void)
{
    int fuelCode;
    int alcohol = 0, gasoline = 0, disel = 0;
    while (1)
    {

        scanf("%d", &fuelCode);

        if (fuelCode == 1)
        {
            alcohol++;
        }
        if (fuelCode == 2)
        {
            gasoline++;
        }
        if (fuelCode == 3)
        {
            disel++;
        }
        if (fuelCode == 4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", disel);
}