#include <stdio.h>
#include <math.h>
double calculate1by6(int times)
{
    if (times == 0)
    {
        return 1 / 6;
    }
    else
    {
        return 1 / (6 + calculate1by6(times - 1));
    }
}
int main()
{

    int n;
    scanf("%d", &n);

    double res = 3;
    res += calculate1by6(n);

    printf("%.10lf\n", res);
}