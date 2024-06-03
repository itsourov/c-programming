#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    int ans = 0;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (mp[arr[i]] > 0)
        {

            mp[arr[i]]--;
            mp[arr[i] - 1]++;
        }
        else
        {
            ans++;
            mp[arr[i] - 1]++;
        }
    }

    cout << ans << endl;
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
}