#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool isPossible(int a, int b, int mid)
{
    return (a >= mid && b >= mid && ((a + b) / 4) >= mid);
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int l = 0;
    int r = (a + b) / 4;
    r++;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isPossible(a, b, mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << r << endl;
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