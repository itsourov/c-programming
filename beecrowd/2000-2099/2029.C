#include <stdio.h>

int main()
{

    double volume, radius, pie = 3.14, area, height;

    while (scanf("%lf %lf", &volume, &radius) != EOF)
    {

        radius = radius / 2;
        area = pie * radius * radius;
        height = volume / (pie * radius * radius);
        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }
}
