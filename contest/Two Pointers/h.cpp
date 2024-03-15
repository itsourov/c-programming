#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    int ans = 0;
    map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 0)
        {
            count++;
        }
        mp[arr[i]]++;
        while (count == k)
        {
            mp[arr[j]]--;
            if (mp[arr[j]] == 0)
            {
                count--;
            }
            j++;
        }
        ans = max(ans, i - j + 1);
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