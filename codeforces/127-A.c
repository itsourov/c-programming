#include <stdio.h>
#include <math.h>
int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    double distance = 0.0;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
        if (i > 0)
        {
            distance += sqrt((x[i] - x[i - 1]) * (x[i] - x[i - 1]) + (y[i] - y[i - 1]) * (y[i] - y[i - 1]));
        }
    }
    printf("%.9lf\n", (distance * k) / 50);
}