#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int minx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        minx = min(minx, arr[i]);
    }
    int count = 0;
    vector<int> vt;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % minx != 0)
        {
            count++;
            vt.push_back(arr[i]);
        }
    }
    if (count < 2)
    {
        cout << "YES" << endl;
        return;
    }
    int miny = *min_element(vt.begin(), vt.end());

    for (auto item : vt)
    {
        if (item % miny != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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