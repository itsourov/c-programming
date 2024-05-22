#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int p;
    cin >> p;
    cin.ignore();
    set<int> graph[p];
    for (int i = 0; i < p; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        int number;

        while (ss >> number)
        {
            graph[i].insert(number);
        }

        // cout << s << endl;
    }
    vector<pair<int, int>> ans;
    for (size_t i = 0; i < p; i++)
    {
        ans.push_back({graph[i].size(), i + 1});
    }
    sort(ans.begin(), ans.end());
    cout << ans[0].second;
    int index = 1;
    while (index < p && ans[index].first == ans[index - 1].first)
    {
        cout << " " << ans[index].second;
        index++;
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}