#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    int arr[n];
    map<int, int> mp, mp2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int fav = arr[f - 1];
    sort(arr, arr + n, greater<int>());

    for (int i = k; i < n; i++)
    {
        mp2[arr[i]]++;
    }
    if (mp2[fav] == 0)
    {
        cout << "YES" << endl;
    }
    else if (mp2[fav] == mp[fav])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "MAYBE" << endl;
    }
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