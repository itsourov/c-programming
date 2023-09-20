#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    float sum = 0.00, dif = 0.00, sum1 = 0.00, sum2 = 0.00;
    float dif2 = 0.00, dif1 = 0.00;

    while (t--)
    {
        char str[20];
        scanf("%s", str);
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        sum += x;
        sum1 += y;
        sum2 += z;
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        dif += A;
        dif1 += B;
        dif2 += C;
    }

    float p, q, r;
    p = (dif * 100.00) / sum;
    q = (dif1 * 100.00) / sum1;
    r = (dif2 * 100.00) / sum2;

    printf("Pontos de Saque: %.2f %%", p);
    printf(".\n");
    printf("Pontos de Bloqueio: %.2f %%", q);
    printf(".\n");
    printf("Pontos de Ataque: %.2f %%", r);
    printf(".\n");

    return 0;
}
