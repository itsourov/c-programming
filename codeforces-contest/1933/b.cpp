#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int dum;
    bool has2 = false;
    bool has1 = false;
    for (int i = 0; i < n; i++)
    {
        cin >> dum;
        if (dum % 3 == 2)
            has2 = true;
        if (dum % 3 == 1)
            has1 = true;
        sum += dum;
    }

    if (dum == 0)
    {
        cout << 0 << endl;
    }
    else if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else if (sum % 3 == 1)
    {
        if (has1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    else if (sum % 3 == 2)
    {
        cout << 1 << endl;
    }
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