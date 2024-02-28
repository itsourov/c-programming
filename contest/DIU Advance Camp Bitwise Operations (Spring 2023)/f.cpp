#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int i = 0;
    while (1)
    {
        int temp = 1 << i;
        if (temp > n)
            break;
        i++;
    }
    i--;
    cout << (1 << i) - 1 << endl;
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