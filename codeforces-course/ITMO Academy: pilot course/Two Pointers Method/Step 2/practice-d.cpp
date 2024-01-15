#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        r = i;
        sum += arr[i];

        while (sum >= s && l < n)
        {
            ans += n - r;

            sum -= arr[l];
            l++;
        }
    }
    cout << ans << endl;
}