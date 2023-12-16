#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], arrbk[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arrbk[i] = arr[i];
        }

        sort(arr, arr + n);

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            cout << mp[arrbk[i]] << " ";
        }
        cout << endl;
    }
}