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
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
            else
            {
                if (j % 2 == 1)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
        }
        cout << endl;
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
            else
            {
                if (j % 2 == 1)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
        }
        cout << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}