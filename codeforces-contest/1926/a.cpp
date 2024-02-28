#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl "\n"
void solve()
{
    map<char, int> mp;
    string s;
    cin >> s;
    for (auto c : s)
        mp[c]++;

    if (mp['A'] > mp['B'])
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
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