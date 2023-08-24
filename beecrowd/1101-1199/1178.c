#include <stdio.h>
int main()
{
    double n[100];
    double input;
    scanf("%lf", &input);
    input *= 2;
    for (int i = 0; i < 100; i++)
    {

        n[i] = input / 2;
        input /= 2;
        printf("N[%d] = %.4lf\n", i, n[i]);
    }
}
