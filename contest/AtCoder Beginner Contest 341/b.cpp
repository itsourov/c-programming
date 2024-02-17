#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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

    int s[n - 1], t[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s[i] >> t[i];
        if (arr[i] >= s[i])
        {
            int temp = arr[i] / s[i];
            // cout << "adding " << temp << "to " << i + 1 << endl;

            arr[i + 1] += temp * t[i];
        }
    }
    cout << arr[n - 1] << endl;
}
