#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<string> ans;
void rec(int index, int n, int k, string &st)
{
    if (ans.size() == k)
        return;
    if (index == n)
    {
        ans.push_back(st);
    }

    for (int i = index; i < n; i++)
    {
        swap(st[i], st[index]);
        rec(index + 1, n, k, st);
        swap(st[i], st[index]);
    }
}

void solve(int i)
{
    cout << "Case " << i << ":" << endl;
    int n, k;
    cin >> n >> k;
    string st = "";
    for (int i = 0; i < n; i++)
    {
        st += 'A' + i;
    }

    rec(0, n, k, st);
    for (auto item : ans)
    {
        cout << item << endl;
    }
    ans.clear();
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
}