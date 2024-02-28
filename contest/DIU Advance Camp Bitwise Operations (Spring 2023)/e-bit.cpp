#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
int arr[20];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int total = 1 << n;
    for (int mask = 0; mask < total; mask++)
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                sum += arr[i];
            }
            else
            {
                sum -= arr[i];
            }
        }
        if (sum == 0 || sum % 360 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}