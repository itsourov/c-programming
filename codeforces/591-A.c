#include <stdio.h>
#include <string.h>

int main()
{
    double vh, vd, distance;
    scanf("%lf %lf %lf", &distance, &vh, &vd);

    printf("%g\n", (distance / (vh + vd)) * vh);
}
