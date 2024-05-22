#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long ans = n * (n + 1) / 2.0;
    ans -= n;
    printf("%lld\n", ans);
}
