#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e5 + 1;
int mp[N + 100];
void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
    }
    int last = n - 1;
    int learge = n;

    while (last >= 0)
    {
        int i = mp[learge];
        // cout << i << " " << last << endl;
        for (; i <= last; i++)
        {
            cout << arr[i] << " ";
        }
        last = min(last, mp[learge] - 1);
        learge--;
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}