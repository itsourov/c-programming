#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    double h, c, l;
    while (scanf("%d", &n) != EOF)
    {
        scanf("%lf %lf %lf", &h, &c, &l);

        h /= 100;
        c /= 100;
        l /= 100;

        printf("%.4lf\n", (sqrt(c * c + h * h) * n * l));
    }
}
