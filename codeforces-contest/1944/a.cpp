#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, k;
    cin >> n >> k;

    if (k >= n - 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << n << endl;
    }
}
signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}