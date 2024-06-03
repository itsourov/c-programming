#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;

    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int c = 0;
        for (int j = i; j < n; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (c + 1 == 2 * i + 1)
                cout << j << endl;
            else
                cout << j << " ";
            c++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (c + 1 == 2 * i + 1)
                cout << j << endl;
            else
                cout << j << " ";
            c++;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int c = 0;
        for (int j = i; j < n; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (c + 1 == 2 * i + 1)
                cout << j << endl;
            else
                cout << j << " ";
            c++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (c + 1 == 2 * i + 1)
                cout << j << endl;
            else
                cout << j << " ";
            c++;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}