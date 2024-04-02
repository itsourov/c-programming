#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 200000 + 10;
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    int l, r;
    map<int, int> mp1;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        mp1[l]++;
        mp1[r + 1]--;
    }

    int effect = 0;
    int count = 0;
    int ps[N + 10] = {0};
    for (int i = 0; i < N; i++)
    {
        if (mp1.find(i) != mp1.end())
        {
            effect += mp1[i];
        }
        ps[i] = ps[i - 1];
        if (effect >= k)
            ps[i]++;
    }
    int a, b;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        cout << ps[b] - ps[a - 1] << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}