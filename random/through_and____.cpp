#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void solve()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i] + d) != mp.end())
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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
    return 0;
}