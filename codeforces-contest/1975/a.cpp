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
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (cnt > 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (arr[n - 1] <= arr[0])
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
    }
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