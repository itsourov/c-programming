#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int dum;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> dum;
        mp[dum]++;
    }
    int maxNum = 0;
    int prev = -1;
    int count = 1;
    for (auto item : mp)
    {
        // maxNum = max(maxNum, item.second);

        if (prev != -1)
        {
            if (prev + 1 == item.first)
            {
                count++;
                maxNum = max(maxNum, count);
            }
            else
            {
                count = 1;
            }
        }
        prev = item.first;
    }
    cout << maxNum << endl;
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
