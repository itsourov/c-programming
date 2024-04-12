
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    map<int, int> mp;
    int x;
    int a = INT_MAX;
    for (int i = 0; i < (n * n); i++)
    {
        cin >> x;
        mp[x]++;
        a = min(a, x);
    }
    int temp;
    bool good = true;
    for (int i = 0; i < n; i++)
    {
        temp = a;
        for (int j = 0; j < n; j++)
        {
            if (mp[temp] == 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                mp[temp]--;
            }

            // cout << temp << " ";
            temp += d;
        }
        // cout << endl;
        a += c;
    }
    cout << "YES" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}