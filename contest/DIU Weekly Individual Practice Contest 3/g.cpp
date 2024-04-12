#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 4 == 0)
        {
            mp['A'] += arr[i];
        }
        else if (i % 4 == 1)
        {
            mp['B'] += arr[i];
        }
        else if (i % 4 == 2)
        {
            mp['C'] += arr[i];
        }
        else if (i % 4 == 3)
        {
            mp['D'] += arr[i];
        }
    }
    vector<pair<int, char>> vt;
    for (auto item : mp)
    {
        vt.push_back({item.second * (-1), item.first});
    }
    sort(vt.begin(), vt.end());
    cout << vt[0].second << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
    return 0;
}
