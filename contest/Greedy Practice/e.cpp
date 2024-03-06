#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    stack<char> S;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            S.push(s[i]);
        else
        {
            if (S.empty())
                c++;
            else
                S.pop();
        }
    }
    cout << c << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}