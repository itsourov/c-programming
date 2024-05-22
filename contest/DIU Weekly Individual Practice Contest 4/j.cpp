#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        arr[i] = v[i];
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back(v[i]);
    }
    sort(arr, arr + n);
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j] == arr[i])
        {
            i++;
        }
        if (i == n)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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