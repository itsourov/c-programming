#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int totalStep = n / 5;
    if (n % 5 > 0)
    {
        totalStep++;
    }
    printf("%d\n", totalStep);
}
