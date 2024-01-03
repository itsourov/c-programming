#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int sum1 = 0;
        for (int i = 0; i < 6; i++)
        {
            int x;
            cin >> x;
            sum1 += x;
        }

        int bud;
        cin >> bud;

        int sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            int x;
            cin >> x;
            sum2 += x;
        }

        int nextBud = sum2 - (bud - sum1);
        printf("Case %lld: %lld\n", tc, max(nextBud, 0LL));
    }
}