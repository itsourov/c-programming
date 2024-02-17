#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int item1 = arr[l];
        int lastItem1 = mp[item1];

        bool found = false;
        for (int i = lastItem1 + 1; i < r; i++)
        {
            if (item1 != arr[i])
            {
                cout << l + 1 << " " << i + 1 << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "-1 -1" << endl;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}