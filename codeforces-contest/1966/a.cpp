#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, k;

    cin >> n >> k;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int maxSame = 0;
    for (auto item : mp)
    {
        maxSame = max(item.second, maxSame);
    }
    if (maxSame >= k)
    {
        cout << (k - 1) << endl;
    }
    else
    {
        cout << n << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}