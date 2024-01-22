#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int r = 0;
    int sum = 0;
    int minSongs = LONG_MAX;
    int minL = 0;
    while (r < n)
    {
        sum += arr[r];

        while (sum >= s)
        {

            if (r - l + 1 < minSongs)
            {
                minSongs = r - l + 1;
                minL = l;
            }

            sum -= arr[l];
            l++;
        }

        r++;
    }
    if (minSongs == LONG_MAX)
    {
        cout << sum << endl;
    }
    cout << minL + 1 << " " << minSongs << endl;
}