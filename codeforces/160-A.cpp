#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int half = sum / 2;
    int count = 0;
    int newSum = 0;
    bool foundAns = false;
    for (int i = 0; i < n; i++)
    {
        newSum += arr[i];
        count++;
        if (newSum > half)
        {
            foundAns = true;
            break;
        }
    }
    cout << count << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}