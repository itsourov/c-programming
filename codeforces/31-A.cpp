#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    map<int, int> mp;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (mp[arr[i] + arr[j]])
                {
                    cout << arr[i] + arr[j] << " " << arr[i] << " " << arr[j] << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
}