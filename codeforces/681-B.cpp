#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int numi = 1234567 * i;
        if (numi > n)
            break;
        for (int j = 0; j < n; j++)
        {
            int numj = numi + 123456 * j;
            if (numj > n)
                break;
            int baki = n - numj;
            if (baki % 1234 == 0)
            {

                cout << "YES" << endl;
                return;
            }
            // for (int k = 0; k < n; k++)
            // {
            //     int numk = numj + 1234567 * k;
            //     // cout << i << " " << j << " " << k << endl;
            //     if (numk > n)
            //         break;
            //     if (numk == n)
            //     {
            //         cout << "YES" << endl;
            //         return;
            //     }
            // }
        }
    }
    cout << "NO" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    int tc = 1;
    // cin >> t;

    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}