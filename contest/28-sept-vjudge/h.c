#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int l;
    double r, areaOfRound, areaTotal;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l);

        r = l / 5.0;
        areaOfRound = acos(-1) * r * r;

        areaTotal = (((double)l / 10.0) * 6.0) * l;
        printf("%.2lf %.2lf\n", areaOfRound, areaTotal - areaOfRound);
    }
}