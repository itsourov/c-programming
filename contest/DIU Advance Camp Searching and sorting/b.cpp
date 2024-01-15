#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

vector<int> arr;

bool good(int mid, int n, int c)
{
    auto startingPointer = arr.begin();
    int count = 0;
    int searchValue = 0;
    while (1)
    {
        auto find = lower_bound(startingPointer, arr.end(), searchValue);
        if (find != arr.end())
        {
            count++;
            startingPointer = find;
            searchValue = *find + mid;
        }
        else
        {
            break;
        }
    }

    return count == c;
}
void solve()
{
    int n, c;
    cin >> n >> c;
    arr.resize(n);
    int max_ = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max_ = max(max_, arr[i]);
    }
    sort(arr.begin(), arr.end());
    int l = 0;
    int r = max_;
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        if (good(mid, n, c))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}