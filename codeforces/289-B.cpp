#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    int arr[n * m];

    set<int> st;
    for (int i = 0; i < n * m; i++)
    {
        cin >> arr[i];
        st.insert(arr[i] % d);
    }
    if (st.size() > 1)
    {
        cout << -1 << endl;
        return;
    }
    sort(arr, arr + (n * m));
    int mid = (n * m) / 2;
    int midEl = arr[mid];
    int ans = 0;
    for (int i = 0; i < (n * m); i++)
    {
        ans += abs(arr[i] - midEl) / d;
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
}