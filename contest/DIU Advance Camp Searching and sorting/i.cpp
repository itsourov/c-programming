#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(int tc)
{

    printf("Case %lld:\n", tc);
    int n, q;
    scanf("%lld %lld", &n, &q);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        scanf("%lld %lld", &l, &r);
        auto left = lower_bound(arr, arr + n, l);
        auto right = upper_bound(arr, arr + n, r);

        printf("%lld\n", right - left);
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    scanf("%lld", &t);

    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
}