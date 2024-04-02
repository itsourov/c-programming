#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, m, last = 0;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < m; i++)
    {

        cin >> b[i];
    }

    int t = 0;
    for (int i = 0; i < n; i++)
    {
        int ans = 1e10;
        for (int j = t; j < m; j++)
        {
            int temp = abs(a[i] - b[j]);
            ans = min(temp, ans);
            if (ans < temp)
                break;
            t = j;
        }
        last = max(last, ans);
    }
    cout << last << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}