#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n >= 5)
        {
            cout << 1 << " " << n - 1 << endl;
        }
        else
        {
            cout << 0 << " " << n << endl;
        }
    }
}