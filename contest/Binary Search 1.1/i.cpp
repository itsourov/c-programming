#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool isPossible(int n, int k, int arr[], int mid)
{
    int walking = 0;
    int night = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (walking + arr[i] <= mid)
        {
            walking += arr[i];
        }
        else
        {
            walking = arr[i];
            night++;
        }
    }
    return night <= k;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    n++;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = INT_MAX;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isPossible(n, k, arr, mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
    int printed = 0;
    int bakiase = n;
    int walking = 0;
    k++;
    for (int i = 0; i < n; i++)
    {

        if (printed + bakiase == k && arr[i] + walking <= l)
        {
            cout << arr[i] << endl;
            walking = 0;
            printed++;
        }
        else
        {
            if (walking + arr[i] <= l)
            {
                walking += arr[i];
            }
            else
            {
                cout << walking << endl;
                printed++;
                walking = arr[i];
            }
        }
        bakiase--;
    }
    if (walking)
    {
        cout << walking << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}