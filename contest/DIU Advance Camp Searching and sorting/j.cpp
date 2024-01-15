#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(int tc)
{

    printf("Case %lld:\n", tc);

    int n, q;
    scanf("%lld %lld", &n, &q);

    int starting[n], ending[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &starting[i], &ending[i]);
    }

    sort(starting, starting + n);
    sort(ending, ending + n);

    int qi;
    for (int i = 0; i < q; i++)
    {
        scanf("%lld", &qi);

        int l = -1, r = n;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (starting[mid] <= qi)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        int ans1 = l + 1;

        l = -1;
        r = n;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (ending[mid] >= qi)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }

        int ans2 = l + 1;

        printf("%lld\n", ans1 - ans2);
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