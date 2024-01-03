#include <bits/stdc++.h>
using namespace std;
#define int long long

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

    sort(arr, arr + n);
    // cout << "After sorting: ";
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    int count = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != -1)
        {
            // cout << "finding " << arr[i] / 2 << endl;

            auto f = upper_bound(arr, arr + n, arr[i] / 2);

            if (*f != -1)
            {
                *f = -1;
                arr[i] = -1;
                count--;
                // cout << "found --- " << count << endl;

                // for (int i = 0; i < n; i++)
                //     cout << arr[i] << " ";
                // cout << endl;
            }
        }
    }
    cout << count << endl;
}