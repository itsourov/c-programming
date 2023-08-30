#include <stdio.h>
int main()
{

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 39; j++)
        {
            if (i == 1 || i == 7)
            {
                printf("-");
            }
            else
            {
                if (j == 1 || j == 39)
                {
                    printf("|");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}