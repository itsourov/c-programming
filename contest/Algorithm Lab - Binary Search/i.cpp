#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> arr;
bool isPosible(int mid, int n)
{
    for (int i = 0; i < mid; i++)
    {
        if (arr[i] * 2 > arr[n - mid + i])
            return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // for (auto item : arr)
    //     cout << item << " ";
    // cout << endl;
    int l = 0;
    int r = n;

    while (l + 1 < r)
    {
        int mid = (l + r) / 2;

        if (isPosible(mid, n))
        {
            // cout << "possible " << mid << endl;
            l = mid;
        }
        else
        {
            // cout << "not possible " << mid << endl;
            r = mid;
        }
    }
    if (l > n / 2)
        l = n / 2;
    cout << n - l << endl;
}