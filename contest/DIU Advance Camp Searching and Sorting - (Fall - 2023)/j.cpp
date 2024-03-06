#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    string s = "A";
    char c = 'B';
    for (int i = 1; i < n; i++)
    {
        s = s + c + s;
        c++;
    }
    cout << s;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}