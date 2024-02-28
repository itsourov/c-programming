#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool isPossible(int n, int s, int mid)
{

    int total = 0;
    if (n % 2 == 0)
    {
        int single = ((n / 2.0) - 1);

        // total += single;
        total += (n - single) * mid;
    }
    else
    {

        int single = (ceil(n / 2.0) - 1);
        // cout << "single " << single << endl;
        // total += single;
        total += (n - single) * mid;
    }
    // cout << mid << " " << (total <= s) << endl;
    return total <= s;
}
void solve()
{
    int n, s;
    cin >> n >> s;
    if (n == 1)
    {
        cout << s << endl;
        return;
    }

    int l = 0;
    int r = s;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isPossible(n, s, mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << max(0LL, r) << endl;
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