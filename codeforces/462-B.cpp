#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    vector<int> v;
    for (auto p : mp)
    {
        v.push_back(p.second);
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int a = min(k, v[i]);
        k -= a;
        ans += a * a;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    int tc = 1;
    // cin >> t;

    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}