#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl "\n";

void solve()
{
    int n, k;
    cin >> n >> k;

    int got = 1;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        got *= temp;
    }

    if (2023 < got)
    {
        cout << "NO" << endl;
        return;
    }
    int need = 2023 / got;
    // cout << need << " " << got << endl;
    if (need * got == 2023)
    {
        cout << "YES" << endl;
        cout << need << " ";
        for (int j = 1; j < k; j++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}