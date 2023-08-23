#include <stdio.h>
int main(void)
{
    int x;

    while (1)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }

        for (int i = 1; i <= x; i++)
        {

            if (i == x)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}