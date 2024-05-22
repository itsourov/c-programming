#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
bool isGood(int mid, int arr[])
{
    int score = mid;
    for (int i = 0; i < n; i++)
    {
        score += arr[i];
        if (score <= 0)
            return false;
    }
    return true;
}
void solve()
{

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int r = 1;
    while (!isGood(r, arr))
    {
        r *= 2;
    }
    // cout << r << endl;
    // return;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isGood(mid, arr))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    int tc = 0;

    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
