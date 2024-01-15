#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

vector<int> arr;
bool check(int mid, int k)
{

    int sum = 0;
    int segmentCount = 1;
    for (auto item : arr)
    {
        if (item > mid)
            return false;
        sum += item;
        if (sum > mid)
        {
            segmentCount++;
            sum = item;
            if (segmentCount > k)
                return false;
        }
    }

    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    arr.resize(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    // sort(arr.begin(), arr.end());
    int l = 0;
    // cout << "l " << l << endl;
    int r = sum + 100;
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        if (check(mid, k))
        {
            // cout << "possible " << mid << endl;
            r = mid;
        }
        else
        {
            // cout << "not possible " << mid << endl;
            l = mid;
        }
    }
    cout << r << endl;
}