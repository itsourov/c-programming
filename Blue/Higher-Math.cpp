
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    if ((arr[0] * arr[0]) + (arr[1] * arr[1]) == (arr[2] * arr[2]))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}