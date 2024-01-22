#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int maxBooks = 0;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        while (sum > t)
        {
            sum -= arr[l];
            l++;
        }
        maxBooks = max(maxBooks, i - l + 1);
    }

    cout << maxBooks << endl;
}