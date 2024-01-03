#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> jorbijor;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        jorbijor[arr[i] % 2]++;
    }
    if (jorbijor.size() > 1)
    {
        cout << 2 << endl;
        return;
    }
    int k = -1;
    while (k++)
    {
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i] % k]++;
        }
        if (mp.size() == 2)
        {
            cout << k << endl;
            break;
        }
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