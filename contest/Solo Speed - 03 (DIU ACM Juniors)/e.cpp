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
    bool possible = true;

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            if (arr[i] + 1 == arr[i - 1])
            {
                arr[i - 1]--;
            }
            else
            {
                possible = false;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    if (possible)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}