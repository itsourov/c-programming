#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int ps[n + 1] = {0};
    map<int, vector<int>> mp;
    mp[0].push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ps[i + 1] = ps[i] + arr[i];
        mp[ps[i + 1]].push_back(i + 1);
    }
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (!mp[x - sum].empty())
        {
            count++;
        }
    }
    cout << count << endl;
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