#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = n * (n + 1) / 2.0;
    ans -= n;
    printf("%d\n", ans);
}
