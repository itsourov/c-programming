#include <stdio.h>
int main(void)
{
    double sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + (1 / (double)i);
    }
    printf("%.2lf\n", sum);
}