#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e6 + 1;
int mp[N + 100];
int mp2[N + 100];
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += mp[i] * (mp[i] - 1) / 2;
    }
    for (int i = 0; i < n; i++)
    {
        int count = mp[arr[i]];
        int ans = total;
        ans -= count * (count - 1) / 2;
        count--;
        ans += count * (count - 1) / 2;
        cout << ans << endl;
    }

    // cout << total << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}