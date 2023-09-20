#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j > 2)
            {
                printf("%d", j - 1);
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}

// 1
// 1 1
// 1 1 2
// 1 1 2 3