#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int x;
    map<int, int> mp;
    int count = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        if (mp[x] == 2 || mp[x] == 4)
        {
            count++;
        }
        if (count == 2)
        {
            found = true;
        }
    }
    if (!found)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
}