#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int t[1010], z[1010], y[1010];
int m, n;
bool isGood(int mid)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int T = mid;
        if (T >= (t[i] * z[i]))
        {

            count += z[i];
            T -= (t[i] * z[i]);

            int chunkAndRest = y[i] + (t[i] * z[i]);
            count += (T / chunkAndRest) * z[i];
            T %= chunkAndRest;
            T -= y[i];
            if (T > 0)
            {
                count += T / t[i];
            }
        }
        else
        {
            count += T / t[i];
        }
    }
    return count >= m;
}
void solve()
{

    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> z[i] >> y[i];
    }
    int l = 0, r = 1;
    while (!isGood(r))
    {
        r *= 2;
    }

    while (l <= r)
    {
        int mid = (l + r) / 2.0;
        if (isGood(mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int T = l;
        if (T >= (t[i] * z[i]))
        {

            count += z[i];
            T -= (t[i] * z[i]);

            int chunkAndRest = y[i] + (t[i] * z[i]);
            count += (T / chunkAndRest) * z[i];
            T %= chunkAndRest;
            T -= y[i];
            if (T > 0)
            {
                count += T / t[i];
            }
        }
        else
        {
            count += T / t[i];
        }

        int required = m - sum;

        cout << min(required, count) << " ";
        sum += min(required, count);
    }
    cout << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}