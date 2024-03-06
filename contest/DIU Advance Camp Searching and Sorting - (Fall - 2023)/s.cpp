#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    int qi;
    for (int i = 0; i < q; i++)
    {
        cin >> qi;
        int l = -1, r = n;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] < qi)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        if (l == -1)
            cout << "X ";
        else
            cout << arr[l] << " ";

        r = n;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] > qi)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        if (r == n)
            cout << "X";
        else
            cout << arr[r];

        cout << endl;
    }
}