#include <stdio.h>
int main(void)
{
    double sum = 0;
    int blaBla = 1;
    for (int i = 1; i <= 39; i += 2)
    {
        sum = sum + (i / (double)blaBla);
        blaBla *= 2;
    }
    printf("%.2lf\n", sum);
}