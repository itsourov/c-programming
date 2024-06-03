#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, t;
    cin >> n >> t;
    int x;
    map<int, int> rc, cc;
    int corner1 = 0;
    int corner2 = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        x--;
        int row = x / n;
        int col = x % n;
        rc[row]++;
        cc[col]++;

        if (row == col)
            corner1++;
        if ((row + col) == (n - 1))
        {
            corner2++;
        }
        if (rc[row] == n || cc[col] == n || corner1 == n || corner2 == n)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}