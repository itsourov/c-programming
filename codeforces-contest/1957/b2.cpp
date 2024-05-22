#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << k << endl;
        return;
    }

    int num = 1;

    int lastGood = 1;
    while ((num - 1) <= k)
    {
        lastGood = num - 1;
        num = num << 1;
    }
    cout << lastGood << " ";

    cout << k - lastGood << " ";
    for (int i = 0; i < n - 2; i++)
    {
        cout << 0 << " ";
    }

    cout << endl;
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