#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int len = s.size();
    map<char, int> vl;
    vl['a'] = 1;
    vl['e'] = 1;
    vector<string> ans;
    for (int i = len - 1; i >= 0;)
    {
        if (vl[s[i]])
        {
            string temp = "";
            temp += s[i - 1];
            temp += s[i];
            ans.push_back(temp);
            i -= 2;
        }
        else
        {
            string temp = "";
            temp += s[i - 2];
            temp += s[i - 1];
            temp += s[i];
            ans.push_back(temp);
            i -= 3;
        }
    }
    reverse(ans.begin(), ans.end());
    bool isFirst = true;
    for (string item : ans)
    {
        if (isFirst)
        {
            cout << item;
            isFirst = false;
        }
        else
            cout << "." << item;
    }
    cout << endl;
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