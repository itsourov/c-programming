
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int x;
bool found = false;
void rec(int idx, int sum, int prev, vector<int> ans)
{
    if (idx == 19)
    {
        return;
    }
    if (found)
        return;
    if (sum == x)
    {
        found = true;
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
        return;
    }
    int pw = 1 << idx;

    if (prev == 0)
    {
        ans.push_back(1);
        rec(idx + 1, sum + pw, 1, ans);
        ans.pop_back();

        ans.push_back(-1);
        rec(idx + 1, sum - pw, -1, ans);
        ans.pop_back();
    }
    ans.push_back(0);
    rec(idx + 1, sum, 0, ans);
    ans.pop_back();
}
void solve()
{

    cin >> x;
    found = false;
    vector<int> ans;
    rec(0, 0, 0, ans);
}

signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}