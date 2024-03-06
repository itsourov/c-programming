#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<vector<int>> ans;
int n, s;

void solve()
{
    string s;
    cin >> s;
    for (int i = s.size() - 1; i > 0; i--)
    {
        if (s[i] >= '5')
        {
            s[i] = ('9' - s[i]) + '0';
        }
    }
    if (s[0] != '9')
    {
        if (s[0] >= '5')
        {
            s[0] = ('9' - s[0]) + '0';
        }
    }
    cout << s << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}