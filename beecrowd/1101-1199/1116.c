#include <stdio.h>
int main(void)
{
    int testCase;
    int x, y;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d", &x, &y);

        if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n", (double)x / y);
        }
    }
}