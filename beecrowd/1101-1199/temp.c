#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    float p, q, Value;
    scanf("%f %f", &p, &q);
    Value = ((n1 * p) + (n2 * q));
    printf("VALOR A PAGAR: R$ %.2f\n", Value);
}