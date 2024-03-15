#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, m;
    cin >> n >> m;
    int vill[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vill[i];
    }
    int tow[m];
    for (int i = 0; i < m; i++)
    {
        cin >> tow[i];
    }
    int j = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (j < m - 1)
            ans = max(ans, min(abs(tow[j] - vill[i]), abs(tow[j + 1] - vill[i])));
        else
            ans = max(ans, abs(tow[j] - vill[i]));
        }
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