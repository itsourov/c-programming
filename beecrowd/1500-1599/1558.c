#include <stdio.h>
#include <math.h>

int canBeRepresentedAsSumOfSquares(int num)
{
    int maxCheck = sqrt(num);
    for (int i = 0; i <= maxCheck; i++)
    {
        for (int j = 0; j <= maxCheck; j++)
        {
            int sumOfSquares = i * i + j * j;
            if (sumOfSquares == num)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        if (canBeRepresentedAsSumOfSquares(num))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
