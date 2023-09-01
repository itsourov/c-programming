#include <stdio.h>
int main()
{
    int number;
    while (scanf("%d", &number) != EOF)
    {
        char line[number];
        for (int i = 0; i < number; i++)
        {
            line[i] = '-';
        }

        for (int i = 1; i <= number; i += 2)
        {
            for (int j = 1; j <= number; j++)
            {
                printf("%c", line[i]);
            }
            printf("\n");
        }
    }
}