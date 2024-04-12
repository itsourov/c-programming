#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
struct operation
{
    int l;
    int r;
    int d;
    // int kotobar;
};

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    struct operation ops[m];
    for (int i = 0; i < m; i++)
    {
        cin >> ops[i].l;
        cin >> ops[i].r;
        cin >> ops[i].d;
        // ops[i].kotobar = 0;
    }

    map<int, int> mp;
    int x, y;
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        mp[x - 1]++;
        mp[y]--;
    }
    int effect = 0;
    map<int, int> mp2;
    for (int i = 0; i < m; i++)
    {
        if (mp.find(i) != mp.end())
        {
            effect += mp[i];
        }
        ops[i].d *= effect;
        mp2[ops[i].l - 1] += ops[i].d;
        mp2[ops[i].r] -= ops[i].d;
    }
    effect = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp2.find(i) != mp2.end())
        {
            effect += mp2[i];
        }
        arr[i] += effect;
        cout << arr[i] << " ";
    }
    cout << endl;
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