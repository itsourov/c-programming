#include <stdio.h>

int main()
{

    while (1)
    {

        double a, b;

        while (1)
        {
            scanf("%lf", &a);
            if (a >= 0 && a <= 10)
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
            scanf("%lf", &b);
            if (b >= 0 && b <= 10)
            {
                break;
            }
            else
            {
                printf("nota invalida\n");
            }
        }

        double avg = (a + b) / 2;
        printf("media = %.2lf\n", avg);

        int userInput = 0;
        while (1)
        {
            printf("novo calculo (1-sim 2-nao)\n");

            scanf("%d", &userInput);
            if (userInput == 1 || userInput == 2)
            {
                break;
            }
        }

        if (userInput == 2)
        {
            break;
        }
    }
}