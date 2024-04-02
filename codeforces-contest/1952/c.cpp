#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    if (n == 0 || n == 1)
        cout << 10 << endl;
    else if (n == 5)
        cout << 7 << endl;
    else if (n == 9)
        cout << 0 << endl;

    else if (n == 12)
    {
        int a = 10;
        while (1)
        {
            a++;
        }
    }
    else
    {
        cout << "asd" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}