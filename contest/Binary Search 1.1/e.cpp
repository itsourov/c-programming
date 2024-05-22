#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int arr[600];
int m, k;
bool isPossible(int mid)
{
    int total = 0;
    int count = 1;
    for (int i = m - 1; i >= 0; i--)
    {
        if (arr[i] > mid)
            return false;
        if (total + arr[i] <= mid)
        {
            total += arr[i];
        }
        else
        {
            total = arr[i];
            count++;
        }
    }
    return count <= k;
}
void solve()
{

    cin >> m >> k;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = INT_MAX;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isPossible(mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    // cout << l << endl;
    vector<int> vt;
    int total = 0;

    int samneAse = m;
    int slashLagbe = k - 1;
    for (int i = m - 1; i >= 0; i--)
    {
        // cout << arr[i] << " ";
        if (samneAse == slashLagbe)
        {

            vt.push_back(-1);
            vt.push_back(arr[i]);
        }
        else
        {
            if (total + arr[i] <= l)
            {
                total += arr[i];
            }
            else
            {
                total = arr[i];
                vt.push_back(-1);
                slashLagbe--;
            }
            vt.push_back(arr[i]);
            samneAse--;
        }
    }
    // cout << endl;
    // cout << vt.size() << endl;

    for (int i = vt.size() - 1; i >= 0; i--)
    {
        if (vt[i] == -1)
        {
            cout << "/ ";
        }
        else
        {
            if (i == 0)
            {
                cout << vt[i];
            }
            else
            {
                cout << vt[i] << " ";
            }
        }
    }
    cout << endl;
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
        // cout << "Case " << tc << ": ";
        solve();
        // tc++;
    }
}