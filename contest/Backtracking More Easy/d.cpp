#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void rec(vector<char> &vt, vector<char> &ans, vector<bool> &visited)
{
    if (ans.size() == vt.size())
    {
        for (char item : ans)
        {
            cout << item;
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < visited.size(); i++)
    {

        if (visited[i] == false)
        {
            ans.push_back(vt[i]);
            visited[i] = true;
            rec(vt, ans, visited);
            ans.pop_back();
            visited[i] = false;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    bool first = true;
    while (getline(cin, s))
    {
        if (!first)
        {
            cout << endl;
        }

        vector<char> vt, ans;
        vector<bool> visited;
        for (auto item : s)
        {
            if (item >= 'a' && item <= 'z')
            {
                vt.push_back(item);
                visited.push_back(false);
            }
        }

        rec(vt, ans, visited);

        first = false;
    }
}
