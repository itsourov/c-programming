#include <stdio.h>
int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i += x)
    {
        for (int j = 0; j < x; j++)
        {

            if (j == x - 1)
            {
                printf("%d", i + j);
            }
            else
            {
                printf("%d ", i + j);
            }
        }
        printf("\n");
    }
}