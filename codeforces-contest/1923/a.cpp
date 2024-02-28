#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    bool foundOne = false;
    int count = 0;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            if (foundOne)
            {
                count += zeroCount;
                zeroCount = 0;
            }
            foundOne = true;
        }
        else if (foundOne)
        {
            zeroCount++;
        }
    }
    cout << count << endl;
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