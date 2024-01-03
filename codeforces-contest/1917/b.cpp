#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    // int n;
    // cin >> n;
    // string s;
    // cin >> s;

    // map<char, int> mp;
    // for (auto c : s)
    //     mp[c]++;

    // cout << n << " " << mp.size() << " " << n * mp.size() << endl;

    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_set<char> distinct_chars;

    // Add all characters of the string to the set
    for (char c : s)
    {
        distinct_chars.insert(c);
    }

    // Output the number of distinct characters
    cout << (n - distinct_chars.size() + 1) << endl;
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