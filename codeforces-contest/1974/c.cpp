#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<pair<int, int>, int> ab, bc, ac;
    map<array<int, 3>, int> abc;
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        ans += ab[{arr[i], arr[i + 1]}];
        ans += bc[{arr[i + 1], arr[i + 2]}];
        ans += ac[{arr[i], arr[i + 2]}];
        ans -= 3 * abc[{arr[i], arr[i + 1], arr[i + 2]}];

        ab[{arr[i], arr[i + 1]}]++;
        bc[{arr[i + 1], arr[i + 2]}]++;
        ac[{arr[i], arr[i + 2]}]++;
        abc[{arr[i], arr[i + 1], arr[i + 2]}]++;
    }
    cout << ans << endl;
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
    return 0;
}