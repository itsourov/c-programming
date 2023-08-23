#include <stdio.h>
int main(void)
{

    double a, b, c, d, e, f;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    int numberOfPositiveNumber = 0;

    if (a > 0)
    {
        numberOfPositiveNumber++;
    }

    if (b > 0)
    {
        numberOfPositiveNumber++;
    }

    if (c > 0)
    {
        numberOfPositiveNumber++;
    }
    if (d > 0)
    {
        numberOfPositiveNumber++;
    }
    if (e > 0)
    {
        numberOfPositiveNumber++;
    }
    if (f > 0)
    {
        numberOfPositiveNumber++;
    }
    printf("%d valores positivos\n", numberOfPositiveNumber);
}