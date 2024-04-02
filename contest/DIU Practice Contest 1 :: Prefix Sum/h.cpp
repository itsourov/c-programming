#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, q;
    cin >> n >> q;
    int ps1[n + 1] = {0}, ps2[n + 1] = {0}, ps3[n + 1] = {0};
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ps1[i + 1] += ps1[i] + (x == 1);
        ps2[i + 1] += ps2[i] + (x == 2);
        ps3[i + 1] += ps3[i] + (x == 3);
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        cout << ps1[r] - ps1[l - 1] << " " << ps2[r] - ps2[l - 1] << " " << ps3[r] - ps3[l - 1] << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}