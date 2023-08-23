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
    else
    {
        a = 0;
    }

    if (b > 0)
    {
        numberOfPositiveNumber++;
    }
    else
    {
        b = 0;
    }

    if (c > 0)
    {
        numberOfPositiveNumber++;
    }
    else
    {
        c = 0;
    }
    if (d > 0)
    {
        numberOfPositiveNumber++;
    }
    else
    {
        d = 0;
    }
    if (e > 0)
    {
        numberOfPositiveNumber++;
    }
    else
    {
        e = 0;
    }
    if (f > 0)
    {
        numberOfPositiveNumber++;
    }
    else
    {
        f = 0;
    }
    printf("%d valores positivos\n", numberOfPositiveNumber);
    printf("%.1lf\n", (a + b + c + d + e + f) / numberOfPositiveNumber);
}