#include <stdio.h>
int main()
{

    double a, b, c, d;
    float b;

    // a = 1.2;
    // b = 3.45;

    // c = 3.451;
    // d = 3.4516;


    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("A = %.6lf, B = %.6lf\n", a, b);
    printf("C = %.6lf, D = %.6lf\n", c, d);

    printf("A = %.1lf, B = %.1lf\n", a, b);
    printf("C = %.1lf, D = %.1lf\n", c, d);

    printf("A = %.2lf, B = %.2lf\n", a, b);
    printf("C = %.2lf, D = %.2lf\n", c, d);

    printf("A = %.3lf, B = %.3lf\n", a, b);
    printf("C = %.3lf, D = %.3lf\n", c, d);

    printf("A = %.3E, B = %.3E\n", a, b);
    printf("C = %.3E, D = %.3E\n", c, d);

    printf("A = %.lf, B = %.lf\n", a, b);
    printf("C = %.lf, D = %.lf\n", c, d);
}