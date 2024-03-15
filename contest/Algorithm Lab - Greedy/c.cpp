#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (1)
    {
        int n, d, r;
        cin >> n >> d >> r;
        if (n == 0 && d == 0 && r == 0)
        {
            break;
        }
        int mor[n], eve[n];
        for (int i = 0; i < n; i++)
        {
            cin >> mor[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> eve[i];
        }
        sort(mor, mor + n);
        sort(eve, eve + n, greater<int>());

        int extra = 0;
        for (int i = 0; i < n; i++)
        {
            if (mor[i] + eve[i] > d)
            {
                extra += ((mor[i] + eve[i]) - d) * r;
            }
        }
        cout << extra << endl;
    }
}