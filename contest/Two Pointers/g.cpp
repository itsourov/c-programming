#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n;
    cin >> n;
    int item[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> item[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    int sum = 0;
    int ans = INT_MIN;
    int l = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += value[i];
        mp[item[i]]++;
        if (mp[item[i]] == 1)
        {
            ans = max(sum, ans);
        }
        while (mp[item[i]] > 1)
        {
            sum -= value[l];
            mp[item[l]]--;
            l++;
        }
        ans = max(sum, ans);
    }

    cout << ans << endl;
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