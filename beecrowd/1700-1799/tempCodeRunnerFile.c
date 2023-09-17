#include <stdio.h>

int main()
{
    int n;
    long long int sum = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum *= 3;
    }
    printf("%lld\n", sum);
}
// 81,27,9,3