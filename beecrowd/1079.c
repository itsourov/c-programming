#include <stdio.h>
int main(void)
{

    int x;
    double i1, i2, i3;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%lf %lf %lf", &i1, &i2, &i3);
        printf("%.1lf\n", (i1 * 2 + i2 * 3 + i3 * 5) / (2 + 3 + 5));
    }
}