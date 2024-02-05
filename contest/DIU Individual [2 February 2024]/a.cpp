#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;

signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minElement = arr[0];

    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= minElement)
        {
            ans++;
        }
        minElement = min(minElement, arr[i]);
    }
    cout << ans << endl;
}