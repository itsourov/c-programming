#include <stdio.h>
int main()
{
    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }

        for (int i = 0; i < input; i++)
        {
            for (int j = 0; j < input; j++)
            {
                if (i > j)
                {
                    printf("%d", i);
                }
                else
                {
                    printf("%d", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}