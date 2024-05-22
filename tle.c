#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += i;
    }
    ans -= n;

    printf("%lld\n", ans);
}