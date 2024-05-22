#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int maxNum = 0, maxNumCount = 0;
    for (auto item : mp)
    {
        if (item.second > maxNumCount)
        {
        }
    }
    int l = 0, r = n - 1;
    while (mp[arr[l]] > 1)
    {
        mp[arr[l]]--;
        l++;
    }
    while (mp[arr[r]] > 1)
    {
        mp[arr[r]]--;
        r--;
    }
    cout << l << " " << r << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    int tc = 1;
    // cin >> t;

    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}