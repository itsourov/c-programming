#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << (n / 4) << endl;
    }
    else
    {
        int cow = n / 4;
        int hen = n / 2;
        if (cow)
        {
            cout << cow + 1 << endl;
        }
        else
        {
            cout << hen << endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
