#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int ps[n + 1] = {0};
    int x;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += ps[i];
        ps[i + 1] = (x - sum);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ps[i + 1] << " ";
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}
