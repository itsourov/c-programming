#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<string, int>> vt(n);
    for (int i = 0; i < n; i++)
    {
        string temp;
        int priority;
        cin >> temp >> priority;
        vt[i] = make_pair(temp, -1 * priority);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        string query;
        cin >> query;

        vector<pair<int, string>> founds;
        for (int j = 0; j < n; j++)
        {
            if (vt[j].first.find(query) == 0)
            {
                founds.push_back({vt[j].second, vt[j].first});
            }
        }
        if (founds.empty())
        {

            cout << "NO" << endl;
        }
        else
        {
            pair<int, string> f = *min_element(founds.begin(), founds.end());

            cout << f.second << endl;
        }
    }
}