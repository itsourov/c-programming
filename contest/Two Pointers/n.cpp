#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
    }
    int uq = st.size();

    map<char, int> mp;
    int count = 0;
    int j = 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] == 0)
        {
            count++;
        }
        mp[s[i]]++;
        while (count >= uq)
        {
            if (count == uq)
            {
                ans = min(ans, i - j + 1);
            }

            mp[s[j]]--;
            if (mp[s[j]] == 0)
            {
                count--;
            }
            j++;
        }
    }
    cout << ans << endl;
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