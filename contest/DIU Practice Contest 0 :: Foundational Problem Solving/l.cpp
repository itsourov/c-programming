#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << "No" << endl;
        return;
    }
    int three = 0, two = 0;
    three = n / 3;
    n %= 3;
    while (three && n < 2)
    {
        three--;
        n += 3;
    }
    if (n == 2)
    {
        cout << 1 << " " << three << endl;
    }
    else if (n == 3)
    {
        cout << 0 << " " << three + 1 << endl;
    }
    else if (n == 4)
    {
        cout << 2 << " " << three << endl;
    }
    else
    {
        cout << "amar logic vul" << endl;
    }
}
signed main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}