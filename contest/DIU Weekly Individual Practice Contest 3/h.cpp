#include <bits/stdc++.h>
using namespace std;
#define int long long
// #define endl "\n"

void solve()
{
    int l = 1, r = 1e9;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        cout << "Q " << mid << endl;
        // cout.flush();

        char temp;
        cin >> temp;

        if (temp == '=')
        {
            return;
        }
        else if (temp == '>')
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
    return 0;
}
