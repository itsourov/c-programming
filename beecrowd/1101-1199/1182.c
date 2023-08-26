#include <stdio.h>

int main()
{
    int columnNumber;
    scanf("%d", &columnNumber);

    char sumOrAverage;
    while (1)
    {
        scanf("%c", &sumOrAverage);
        if (sumOrAverage == 'S' || sumOrAverage == 'M')
        {
            break;
        }
    }

    double sum = 0, temp;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &temp);
            if (j == columnNumber)
            {
                sum += temp;
            }
        }
    }

    if (sumOrAverage == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else
    {
        printf("%.1lf\n", sum / 12);
    }

    return 0;
}
