#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<vector<int>> ans;
int n, s;

void solve()
{

    cin >> n >> s;

    bool isPossible = true;
    vector<int> vt(n);
    int temp = s - 1;
    for (int i = n - 1; i > 0; i--)
    {
        if (temp >= 9)
        {
            vt[i] = 9;
        }
        else
        {
            vt[i] = temp;
        }
        temp -= vt[i];
    }
    if (temp == 0)
        vt[0]++;
    else
        vt[0] += temp + 1;

    for (int i = 0; i < n; i++)
    {
        if (vt[i] > 9 || vt[i] < 0)
        {
            isPossible = false;
        }
    }
    if (!isPossible)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    for (auto item : vt)
        cout << item;
    cout << " ";
    vector<int> big(n);
    temp = s;
    for (int i = 0; i < n; i++)
    {
        if (temp >= 9)
        {
            big[i] = 9;
        }
        else
        {
            big[i] = temp;
        }
        temp -= big[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (vt[i] > 9 || vt[i] < 0)
        {
            isPossible = false;
        }
    }
    if (!isPossible)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }

    for (auto item : big)
        cout << item;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}