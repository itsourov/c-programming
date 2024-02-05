#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    string ans = "";
    for (auto c : s)
    {
        ans += c;
        if (c == '.')
            ans = "";
    }
    cout << ans << endl;
}