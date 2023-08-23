#include <stdio.h>
int main()
{
    double x, y,z;
    printf("Enter value of x,y\n");
    scanf("%lf %lf", &x, &y);
    z=x+y;
    printf("MEDIA=%.5lf\n", z / 2);
    return 0;
}