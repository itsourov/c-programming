#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<pair<int, int>> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int dum;
    for (int i = 0; i < n; i++)
    {
        cin >> dum;
        if (dum < 0)
        {
            dum *= -1;
        }
        vt[i].first = dum;
        vt[i].second = arr[i];
    }
    sort(vt.begin(), vt.end());
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        auto monstar = vt[i];
    }
    cout << "YES" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}