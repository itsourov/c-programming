#include <stdio.h>

int main()
{

    char sumOrAverage;
    while (1)
    {
        scanf("%c", &sumOrAverage);
        if (sumOrAverage == 'S' || sumOrAverage == 'M')
        {
            break;
        }
    }

    double sum = 0.0, temp;
    int numberOfNumberWasAddedInSum = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &temp);
            if (j < i)
            {
                sum += temp;
                numberOfNumberWasAddedInSum++;
            }
        }
    }

    if (sumOrAverage == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else
    {
        printf("%.1lf\n", sum / numberOfNumberWasAddedInSum);
    }

    return 0;
}
