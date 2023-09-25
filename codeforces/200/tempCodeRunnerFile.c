#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    int input;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        sum += input;
    }
    printf("%lf\n", sum / n);
}