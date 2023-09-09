#include <stdio.h>

int main()
{
    int n, temp;
    while (scanf("%d", &n) != EOF)
    {
        int numbers[n];
        for (int index = 0; index < n; index++)
        {
            scanf("%d", &numbers[index]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (numbers[j] > numbers[j + 1])
                {
                    temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
        }
        for (int index = 0; index < n; index++)
        {
            printf("%04d\n", numbers[index]);
        }
    }
}