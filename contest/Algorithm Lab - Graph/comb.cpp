
#include <bits/stdc++.h>
using namespace std;
#define int long long

set<string> ans;
map<int, int> taken;

void rec(int index, string &s, string &temp)
{
    if (temp.size() == s.size())
    {
        ans.insert(temp);
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {

        if (!taken[i])
        {
            taken[i] = 1;
            temp.push_back(s[i]);
            rec(index + 1, s, temp);
            temp.pop_back();
            taken[i] = 0;
        }
    }
}
void solve()
{
    string s;
    cin >> s;
    string temp = "";
    rec(0, s, temp);
    cout << ans.size() << endl;
    for (auto item : ans)
    {
        cout << item << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}