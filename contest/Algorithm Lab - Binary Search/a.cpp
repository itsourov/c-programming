#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int tc)
{
    int n;
    cin >> n;
    int arr[n];
    int prev = 0, current;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> current;

        arr[i] = current - prev;
        prev = current;
        mp[arr[i]]++;
        cout << arr[i] << " ";
    }
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > ans + 1)
            ans = arr[i];
        else
        {
        }
    }

    cout << endl;
    // printf("Case %lld: %lld\n", tc, k);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)

    {
        solve(i);
    }
}