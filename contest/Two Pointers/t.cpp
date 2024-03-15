#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;
    int count = 0;
    int j = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] == 1)
        {
            count++;
        }
        while (count > 2)
        {
            mp[arr[j]]--;
            if (mp[arr[j]] == 0)
                count--;
            j++;
        }
        ans = max(i - j + 1, ans);
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