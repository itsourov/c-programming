#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int input;
    int bestScore, worstScore, amazingCount = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        if (i == 0)
        {
            bestScore = input;
            worstScore = input;
        }
        else
        {
            if (input > bestScore)
            {
                amazingCount++;
                bestScore = input;
            }
            if (input < worstScore)
            {
                amazingCount++;
                worstScore = input;
            }
        }
    }
    printf("%d\n", amazingCount);
}