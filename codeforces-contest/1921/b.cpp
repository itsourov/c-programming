#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;

    int s1 = 0;
    for (auto c : s)
    {
        if (c == '1')
            s1++;
    }

    int f1 = 0;
    int index = 0;
    int ans = 0;
    for (auto c : f)
    {
        if (c != s[index++])
        {

            ans++;
        }
        if (c == '1')
            f1++;
    }

    ans += abs(f1 - s1);
    cout << ans / 2 << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}