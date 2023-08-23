#include <stdio.h>
int main(void)
{
    double input1, input2;

    while (1)
    {
        scanf("%lf", &input1);
        if (input1 >= 0 && input1 <= 10)
        {
            break;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    while (1)
    {
        scanf("%lf", &input2);
        if (input2 >= 0 && input2 <= 10)
        {
            break;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2lf\n", (input1 + input2) / 2);
}