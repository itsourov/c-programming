#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int l = 0;
    int r = n - 1;
    while (l <= r)
    {

        int mid = (l + r) / 2;

        if (arr[mid] == key)
        {
            cout << "position  " << mid << endl;
            return 0;
        }
        else if (arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Not Found!" << endl;
}