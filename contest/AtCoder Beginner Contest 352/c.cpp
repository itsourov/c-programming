#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    vector<pair<int, int>> newArr;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        newArr.push_back({abs(a[i] - b[i]), i});
    }
    sort(newArr.begin(), newArr.end());
    int ans = b[newArr.back().second];
    for (int i = 0; i < newArr.size() - 1; i++)
    {
        ans += a[newArr[i].second];
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}