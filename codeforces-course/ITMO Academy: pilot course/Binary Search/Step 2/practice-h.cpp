#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
vector<int> arr;
bool good(int mid, int k)
{
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    int n;
    cin >> n;
    arr.resize(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int l = 0;
    int r = sum * 2;
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        if (good(mid, k))
            l = mid;
        else
            r = mid;
    }
    cout << l << endl;
}