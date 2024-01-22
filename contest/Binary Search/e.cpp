#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> vt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vt[i].second >> vt[i].first;
    }

    sort(vt.begin(), vt.end());

    // for (auto item : vt)
    //     cout << item.first << " " << item.second << endl;
    int l = 0;
    int r = 0;

    int maxSum = 0;
    int sum = 0;
    while (r < n && l < n)
    {

        while (vt[r].first - vt[l].first < d && r < n)
        {

            maxSum = max(maxSum, sum);
            sum += vt[r].second;

            cout << l << "--" << r << " " << sum << endl;
            r++;
        }

        sum -= vt[l].second;
        l++;
    }
    cout << maxSum << endl;
}