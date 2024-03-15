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
    for (int i = 0; i < n - 2; i++)
    {

        if (arr[i] > 0)
        {

            arr[i + 1] -= (arr[i] * 2);
            arr[i + 2] -= (arr[i]);
            arr[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
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

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}